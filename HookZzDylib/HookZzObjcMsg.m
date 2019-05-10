//
//  HookZzPrint.m
//  HookZzTestPrint
//
//  Created by 王磊磊 on 2018/5/28.
//  Copyright © 2018年 王磊磊. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <dlfcn.h>
#import <mach-o/dyld.h>
#import <objc/message.h>
#import <objc/runtime.h>


#include "hookzz.h"

#ifndef ZREG_MACRO
#define ZREG_MACRO
#if defined(__LP64__)
#define ZREG(n) general.regs.x##n
#else
#define ZREG(n) general.regs.r##n
#endif
#endif

char decollators[512]           = {0};

#define FAKE(func) fake_##func
#define ORIG(func) orig_##func





@interface OCMethodMonitor : NSObject

@end

@implementation OCMethodMonitor

//void (*origin_objc_msgSend)(id _Nullable obj, SEL _Nonnull op);
//OBJC_EXPORT id _Nullable
//origin_objc_msgSend(id _Nullable obj, SEL _Nonnull op)
//OBJC_AVAILABLE(10.0, 2.0, 9.0, 1.0, 2.0);

id (*origin_objc_msgSend)(id obj, SEL _Nonnull op, ...);

id (fake_objc_msgSend)(id obj, SEL _Nonnull op, ...) {
    // Do What you Want.
    
    NSLog(@"---+++[%@ %@]", NSStringFromClass([obj class]), NSStringFromSelector(op));
    
    va_list args;
    
    va_start(args, op);
    
    if (op)
    {
        //依次取得除第一个参数以外的参数
        //4.va_arg(args,NSString)：返回参数列表中指针所指的参数，返回类型为NSString，并使参数指针指向参数列表中下一个参数。
        while (va_arg(args, id))
        {
            NSString *otherString = va_arg(args, id);
        }
    }
    
    
    
    id value = origin_objc_msgSend(obj, op, args);
    
    //5.清空参数列表，并置参数指针args无效
    va_end(args);
    
    return value;
    
}

void hook_objc_msgSend() {
    ZzReplace((void *)objc_msgSend, (void *)fake_objc_msgSend, (void **)&origin_objc_msgSend);
}

+ (void)load
{
//    hook_objc_msgSend();
}


- (void)log_for_test {
    NSLog(@"catch by HookZz:OCMethodMonitor");
}


//void objc_msgSend_pre_call(RegState *rs, ThreadStackPublic *ts, CallStackPublic *cs, const HookEntryInfo *info)
/*
{
    char *selector = (char *)rs->ZREG(1);
    id tmpObject = (id)rs->ZREG(0);
    Class tmpClass  = object_getClass(tmpObject);
    if (!tmpClass)
        return;
    const char *className               = class_getName(tmpClass);
    
    return;
    
    NSString *classStr = [NSString stringWithCString:className encoding:NSUTF8StringEncoding];
    
    
    
//    NSString *selectorStr = [NSString stringWithCString:selector encoding:NSUTF8StringEncoding];
    
    /*
    static BOOL start = NO;
    if ([classStr isEqualToString:@"QSMatchDetailViewController"] && strstr(selector, "alloc")) {
        start = YES;
    }
    
    if (!start) {
        return;
    }
     */
    
/*
    NSArray *classNameAvoid = @[
                                @"QSOperationQueue",@"QSBusSystem",
                                @"QBBeaconEvent",@"QSStateMachine",
                                @"TADHTTPClientRequest",
                                @"ASIFormDataRequest",
                                @"QSImageCache",@"QSQueue",
                                @"XMLDictionaryParser",
                                @"QSPropertyInfoEx",@"QSSportsMediaMatchInfo",
                                @"TSADP3Item",@"FMDatabase",
                                @"AVPlayerItem",
                                ];
    NSArray *classPrefixAvoid = @[
                                  @"NS",@"_NS",@"__NS",@"QSLog",@"QSDatabase",
                                  @"UI",@"_UI",@"MTALogTrack",
                                  @"MttMemory",@"VRPosition",@"QBReachability",@"QBBeaconAnalytics",
                                  @"QSCache",@"LOT",@"ASIHTTPRequest",
                                  @"LOT",
                                  ];
    NSArray *classSuffixAvoid = @[
                                  @"Log",@"log",
                                  @"Cell",
                                  @"Layer",
                                  @"Transaction",
                                  @"LinkedList",
                                  @"LinkedNode",
                                  @"Socket",
                                  @"Loading",
                                  @"Store",
                                  @"Node",
                                  @"Queue",
                                  @"TCPData",
                                  @"Logger",
                                  ];
 */
    
   /****selector****/
    /*
    NSArray *selectorNameAvoid = @[
                                   @"view",
                                   @"presentingViewController",
                                   @"parentViewController",
                                   ];
    
    NSArray *selectorPrefixAvoid = @[
                                     @"isKindOfClass",
                                     @"class",
                                     ];
    NSArray *selectorContain = @[
                                @"loading",
                                @"Animation",
                                @"valueForKey",
                                ];
     */
    
/*
    for (NSString *tempName in classNameAvoid) {
        if ([classStr isEqualToString:tempName]) {
            return;
        }
    }
    
    for (NSString *tempName in classPrefixAvoid) {
        if ([classStr hasPrefix:tempName]) {
            return;
        }
    }
    
    for (NSString *tempName in classSuffixAvoid) {
        if ([classStr hasSuffix:tempName]) {
            return;
        }
    }
    
    for (NSString *tempSEL in selectorNameAvoid) {
        if ([selectorStr isEqualToString:tempSEL]) {
            return;
        }
    }
    
    for (NSString *tempSEL in selectorPrefixAvoid) {
        if ([selectorStr hasPrefix:tempSEL]) {
            return;
        }
    }
    
    for (NSString *tempSEL in selectorContain) {
        if ([selectorStr containsString:tempSEL]) {
            return;
        }
    }
    
    */

    /*
    static BOOL tryStart = NO;
    if ([classStr isEqualToString:@"QSMPAuthenticationView"] || [classStr isEqualToString:@"QSMPMatchLiveAuthenticationView"]) {
//        if (strstr(selector, "tryButtonPressed")) {
         // 是调用的canTryWatch这个属性
            tryStart = YES;
//        }
    }
    
    if (!tryStart) {
        return;
    }
    
*/
    
    //
    
//    if ([classStr hasPrefix:@"TAD"] ) {
//        return; ///< 这里值得商榷
//    }
    
    /*
    
    //类名包含 Media 的就打印出来
    NSArray *classNameContainsLog = @[
                                      @"Media",
                                      @"TryWatch",
                                      @"tryWatch",
                                      @"QLTryWatchView",
                                      @"QLTryWatchViewController",
                                      @"QSVideoPlayerTryWatchProgressViewController",
                                      @"QSMatchDetailTopViewController",
                                      @"QSMatchSkipViewController",
                                      @"QSMatchDetailViewController",
                                      @"Authentication",
                                      @"QSUserInfoManagement",
                                      @"QSVIPInfo",
                                      @"vip",
                                      @"VIP",
                                      ];
    
    NSArray *selectorNameContainsLog = @[
                                         @"vip",
                                         @"",
                                         @"",
                                         @"",
                                         ];

    BOOL shoudLog = NO;
    for (NSString *tempName in classNameContainsLog) {
        if ([classStr containsString:tempName]) {
            shoudLog = YES;
            break;
        }
    }
    
    
    for (NSString *tempName in selectorNameContainsLog) {
        if ([selectorStr containsString:tempName]) {
            shoudLog = YES;
            break;
        }
    }

     
     */
    
    
    
  /*
    memset(decollators, '-', 512);
    if (ts->size * 3 >= 512)
        return;
    decollators[ts->size * 3] = '\0';
    
    
    
//    printf("[OCMethodMonitor|%ld] %s [%s %s]\n", ts->thread_id, decollators, className, selector);
    
    // NSlog比printf更合适，log更干净
    NSLog(@"[OCMethodMonitor|%ld] %s [%s %s]\n", ts->thread_id, decollators, className, selector);
}

void objc_msgSend_post_call(RegState *rs, ThreadStackPublic *ts, CallStackPublic *cs, const HookEntryInfo *info) {
//    printf("post call success.\n");
}

   */
@end

