//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class QSShareView, TencentOAuth;

__attribute__((visibility("hidden")))
@interface QSShareKit : NSObject
{
    _Bool _isShareFunctionOn;
    _Bool _isSinaWeiboClose;
    id _delegate;
    CDUnknownBlockType _excuteWhenShareViewDismissBlock;
    TencentOAuth *_qqOauth;
    QSShareView *_shareView;
}

+ (id)sharedInstance;
+ (_Bool)canSharedToWeibo;
+ (_Bool)canSharedToQQ;
+ (_Bool)canSharedToWx;
@property(retain, nonatomic) QSShareView *shareView; // @synthesize shareView=_shareView;
@property(retain, nonatomic) TencentOAuth *qqOauth; // @synthesize qqOauth=_qqOauth;
@property(copy, nonatomic) CDUnknownBlockType excuteWhenShareViewDismissBlock; // @synthesize excuteWhenShareViewDismissBlock=_excuteWhenShareViewDismissBlock;
@property(nonatomic) _Bool isSinaWeiboClose; // @synthesize isSinaWeiboClose=_isSinaWeiboClose;
@property(nonatomic) _Bool isShareFunctionOn; // @synthesize isShareFunctionOn=_isShareFunctionOn;
@property(nonatomic) __weak id delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)hideShareView;
- (_Bool)openWeiXin;
- (_Bool)openQQ;
- (void)shareToTarget:(unsigned long long)arg1 inScene:(id)arg2 andContentType:(unsigned long long)arg3 shareImage:(id)arg4;
- (void)shareToTarget:(unsigned long long)arg1 inScene:(id)arg2 andContentType:(unsigned long long)arg3 title:(id)arg4 image:(id)arg5 imageURL:(id)arg6 externInfo:(id)arg7;
- (void)showWithFullScreenView:(id)arg1 inScene:(id)arg2 andContentType:(unsigned long long)arg3 shareImage:(id)arg4;
- (void)showWithFullScreenView:(id)arg1 inScene:(id)arg2 andContentType:(unsigned long long)arg3 title:(id)arg4 image:(id)arg5 imageURL:(id)arg6 externInfo:(id)arg7;
- (void)showWithViewNotGetInfoFromNetwork:(id)arg1 inScene:(id)arg2 url:(id)arg3 shareTitle:(id)arg4 description:(id)arg5 imageURL:(id)arg6;
- (void)showWithView:(id)arg1 inScene:(id)arg2 andContentType:(unsigned long long)arg3 shareImage:(id)arg4;
- (void)showWithView:(id)arg1 inScene:(id)arg2 andContentType:(unsigned long long)arg3 title:(id)arg4 image:(id)arg5 imageURL:(id)arg6 externInfo:(id)arg7;
- (_Bool)handleOpenURL:(id)arg1;
- (_Bool)shareToSinaWeiboWithShareImage:(id)arg1;
- (_Bool)shareToSinaWeiboWith:(id)arg1 description:(id)arg2 thumbImage:(id)arg3 url:(id)arg4;
- (_Bool)shareToQZoneWithShareImage:(id)arg1;
- (_Bool)shareToQZoneWith:(id)arg1 description:(id)arg2 thumbImage:(id)arg3 url:(id)arg4;
- (_Bool)shareToQQWithShareImage:(id)arg1;
- (_Bool)shareToQQWith:(id)arg1 description:(id)arg2 thumbImage:(id)arg3 url:(id)arg4;
- (_Bool)shareTextToQQWith:(id)arg1 text:(id)arg2;
- (_Bool)shareTextToWxWith:(id)arg1 friendCircle:(_Bool)arg2 text:(id)arg3;
- (_Bool)shareToWxWithShareImage:(id)arg1 friendCircle:(_Bool)arg2;
- (_Bool)shareToWxWith:(id)arg1 friendCircle:(_Bool)arg2 description:(id)arg3 thumbImage:(id)arg4 url:(id)arg5;
- (id)shareThumbImageDataWithImage:(id)arg1 toTarget:(unsigned long long)arg2;
- (id)shareImageDataWithImage:(id)arg1 toTarget:(unsigned long long)arg2;
- (id)imageDataWithImage:(id)arg1;
- (void)getContent:(id)arg1 withType:(unsigned long long)arg2 toTarget:(unsigned long long)arg3 completion:(CDUnknownBlockType)arg4;
- (void)shareContent:(id)arg1 withType:(unsigned long long)arg2 toTarget:(unsigned long long)arg3 completion:(CDUnknownBlockType)arg4;
- (id)infoFromContent:(id)arg1 withType:(unsigned long long)arg2 toTarget:(unsigned long long)arg3;
- (void)initAllSharePlatform;
- (_Bool)isShow;

@end
