//  weibo: http://weibo.com/xiaoqing28
//  blog:  http://www.alonemonkey.com
//
//  TencentSportsDylib.m
//  TencentSportsDylib
//
//  Created by hufeng on 22/8/18.
//  Copyright (c) 2018年 hufeng. All rights reserved.
//

#import "TencentSportsDylib.h"
#import <CaptainHook/CaptainHook.h>
#import <UIKit/UIKit.h>
#import <Cycript/Cycript.h>
#import "NSObject+methodSwizzle.h"

@interface NSObject (test)
@end

@implementation NSObject (test)

//+ (void)load
//{
//    Class originClass = NSClassFromString(@"QSMatchDetailViewController");
//    [self ff_instancenSwizzleWithClass:originClass originSelector:@selector(viewDidAppear:) swizzleSelector:@selector(ff_viewDidAppear:)];
//}

//- (void)ff_viewDidAppear:(BOOL)animation
//{
//    Class originClass = NSClassFromString(@"QSMatchDetailViewController");
//    if ([self isKindOfClass:originClass.class]) {
////        [self performSelector:@selector(removeAd)];
//    }
//
//    return [self ff_viewDidAppear:animation];
//}

//+ (UIView *)findGoalView:(UIView *)objectView
//{
//    if (objectView.subviews.count == 0) {
//        return nil;
//    }
//
//    for (UIView *view in objectView.subviews) {
//        //QSMPADViewController QSADViewController
//        Class vcClass = NSClassFromString(@"QSADViewController");
//        if ([view.nextResponder isKindOfClass:[vcClass class]]) {
//            return view;
//        } else {
//            UIView *tempView = [self findGoalView:view];
//            if (tempView) {
//                return tempView;
//            }
//        }
//    }
//
//    return nil;
//}

@end

CHConstructor{
    NSLog(INSERT_SUCCESS_WELCOME);
    
    [[NSNotificationCenter defaultCenter] addObserverForName:UIApplicationDidFinishLaunchingNotification object:nil queue:[NSOperationQueue mainQueue] usingBlock:^(NSNotification * _Nonnull note) {
        
#ifndef __OPTIMIZE__
        CYListenServer(6666);
#endif
        
    }];
}


CHDeclareClass(TADSplashManager);
CHDeclareClass(TADVideoViewController);
CHDeclareClass(NSURLSession);

#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wstrict-prototypes"

#pragma clang diagnostic pop

// CHMethod()这个宏的格式是：参数的个数，返回值的类型，类的名称，selector的名称，selector的类型，selector对应的参数的变量名。
CHMethod(1, id, TADSplashManager, splashItemForItem, id, arg1){

    NSLog(@"hook 到闪屏的函数啦");
    NSLog(@"self = %@", self);
    //    return CHSuper(1, TADSplashManager, splashItemForItem, arg1);
    //    NSLog(@"hook到函数啦，参数为，arg1 = %@, 返回值为 = %@", arg1, value);
    //
    return nil;
}


///< 注意参数类型，此处给BOOL，不要给id
CHMethod(1, void, TADVideoViewController, viewDidAppear, BOOL, arg1){

    NSLog(@"hook 到TADVideoViewController的函数啦");
    NSLog(@"self = %@", self);
    NSObject *object = self;
    if ([object respondsToSelector:@selector(skipAdPlay)]) {
        [object performSelector:@selector(skipAdPlay)];
        NSLog(@"调用了TADVideoViewController 的 skipAdPlay函数");
    }

    return CHSuper(1, TADVideoViewController, viewDidAppear, arg1);
}


static BOOL g_canCopyM3u8 = YES;
/*********NSURLSession**********/
typedef void(^CompletionBlock)(NSData * _Nullable data, NSURLResponse * _Nullable response, NSError * _Nullable error);
CHMethod(2, id, NSURLSession, dataTaskWithRequest, id, arg1, completionHandler, CompletionBlock, arg2){
    
    // arg1=NSURLRequest
    NSURLRequest *request = (NSURLRequest *)arg1;
    
    NSString *urlString = request.URL.absoluteString;
    NSLog(@"hook到函数啦 url = %@", urlString);
    if ([urlString containsString:@"hls.bideo.qq.com"]) {
        NSLog(@"hook到直播请求啦");
        NSLog(@"线程回溯 = %@", [NSThread callStackSymbols]);
    }
    
    CompletionBlock block = arg2;
    if ([request.URL.absoluteString containsString:@"info.zb.video.qq.com"]) {
        NSLog(@"hook到直播接口啦%@，参数为，request = %@", NSStringFromSelector(_cmd), arg1);
        // arg2居然是null，天啦！！
        __block BOOL isControllerRight = NO;
        void(^tempBlock)(void) = ^{
            UIWindow *window = [UIApplication sharedApplication].delegate.window;
            UITabBarController *tabBarVC =  (UITabBarController *)window.rootViewController;
            UINavigationController *vc = (UINavigationController *)tabBarVC.selectedViewController;
            UIViewController *topVC = vc.topViewController;
            if ([topVC isKindOfClass:[NSClassFromString(@"QSMatchDetailViewController") class]]) {
                isControllerRight = YES;
            }
        };
        
        if ([NSThread isMainThread]) {
            tempBlock();
        } else {
            dispatch_sync(dispatch_get_main_queue(), tempBlock);
        }
        
        
        if (g_canCopyM3u8 && isControllerRight) {
            g_canCopyM3u8 = NO;
            block = ^(NSData *tempData, NSURLResponse *tempResponse, NSError *tempError){
                if (tempError) {
                    NSLog(@"请求m3u8出错啦，error = %@", tempError);
                    g_canCopyM3u8 = YES;
                } else {
                    NSLog(@"请求m3u8成功啦, response = %p, data = %p", tempResponse, tempData);
                }
            };
        }
        
    }
    
    return CHSuper(2, NSURLSession, dataTaskWithRequest, arg1, completionHandler, arg2);
}

CHMethod(1, id, NSURLSession, dataTaskWithRequest, id, arg1){
    // arg1=URL
    NSURLRequest *request = (NSURLRequest *)arg1;
    
    NSString *urlString = request.URL.absoluteString;
    NSLog(@"hook到函数啦 url = %@", urlString);
    return CHSuper(1, NSURLSession, dataTaskWithRequest, arg1);
}

CHMethod(1, id, NSURLSession, dataTaskWithURL, id, arg1){
    // arg1=URL
    NSLog(@"hook到函数啦%@，参数 arg1 = %@", NSStringFromSelector(_cmd), arg1);
    return CHSuper(1, NSURLSession, dataTaskWithURL, arg1);
}

CHMethod(2, id, NSURLSession, dataTaskWithURL, id, arg1, completionHandler, CompletionBlock, arg2){
    // arg1=URL
    NSLog(@"hook到函数啦%@，参数为 arg1 = %@", NSStringFromSelector(_cmd), arg1);
    return CHSuper(2, NSURLSession, dataTaskWithURL, arg1, completionHandler, arg2);
}





CHConstructor{
    CHLoadLateClass(TADSplashManager);
//    CHClassHook()这个宏的格式是：参数的个数，返回值的类型，类的名称，selector的名称。
    CHClassHook(1, TADSplashManager, splashItemForItem);
    
    CHLoadLateClass(TADVideoViewController);
    CHClassHook(1, TADVideoViewController, viewDidAppear);
    
    CHLoadLateClass(NSURLSession);
    CHClassHook(2, NSURLSession, dataTaskWithRequest, completionHandler);
    CHClassHook(2, NSURLSession, dataTaskWithURL, completionHandler);
    CHClassHook(1, NSURLSession, dataTaskWithRequest);
    CHClassHook(1, NSURLSession, dataTaskWithURL);
    
}

