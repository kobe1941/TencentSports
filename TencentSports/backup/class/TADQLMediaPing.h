//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary, NSMutableDictionary;

@interface TADQLMediaPing : NSObject
{
    _Bool _funnelPingFlag;
    NSDictionary *_videoInfo;
    NSDictionary *_videoUserInfo;
    NSMutableDictionary *_itemDic;
}

+ (id)sharedMediaPing;
+ (id)commonInfo;
+ (id)commonInfo;
@property(retain, nonatomic) NSMutableDictionary *itemDic; // @synthesize itemDic=_itemDic;
@property(retain, nonatomic) NSDictionary *videoUserInfo; // @synthesize videoUserInfo=_videoUserInfo;
@property(retain, nonatomic) NSDictionary *videoInfo; // @synthesize videoInfo=_videoInfo;
@property(nonatomic) _Bool funnelPingFlag; // @synthesize funnelPingFlag=_funnelPingFlag;
- (void).cxx_destruct;
- (void)pingWithURL:(id)arg1 postData:(id)arg2 userInfo:(id)arg3;
- (void)postWithUrl:(id)arg1 dict:(id)arg2 shouldAddRetryCode:(_Bool)arg3;
- (void)postWithUrl:(id)arg1 andDict:(id)arg2;
- (void)pingWithUrl:(id)arg1 shouldAddRetryCode:(_Bool)arg2;
- (void)pingWithUrl:(id)arg1;
- (id)urlEncode:(id)arg1;
- (id)fixUrlWithUserData:(id)arg1;
- (id)fixUrlWithUserInfo:(id)arg1;
- (void)reset;
- (void)dealloc;
- (id)init;
- (void)mmaReportForOpenLandingePage:(id)arg1 isNative:(_Bool)arg2;
- (void)pingForMMASecClick:(id)arg1;
- (void)pingForMMAClick:(id)arg1;
- (void)pingForMMAView:(id)arg1;
- (void)pingForMMA:(id)arg1 actionType:(int)arg2;
- (void)pingWithItemInfo:(id)arg1 forTADActionType:(int)arg2 withExtendInfo:(id)arg3;
- (void)pingForItem:(id)arg1 forActionType:(int)arg2 withExtendInfo:(id)arg3;
- (void)pingForItem:(id)arg1 forActionType:(int)arg2;
- (void)pingMindForItem:(id)arg1 forActionId:(long long)arg2;
- (_Bool)isOrderReportType:(long long)arg1 CurrentImpType:(int)arg2;
- (id)commonInfo;
- (void)pingForPV:(id)arg1;
- (void)pingForClick:(id)arg1;
- (void)pingForAction:(id)arg1;
- (void)addPingItem:(id)arg1 forTADActionType:(int)arg2;
- (void)pingForSplashItem:(id)arg1 forTADActionType:(int)arg2;
- (void)clickPingWithoutWebview:(id)arg1;
- (id)fixUrl:(id)arg1 withErrorInfo:(id)arg2;
- (id)fixReportUrlWithClientInfo:(id)arg1;
- (id)fixClickLinkWithUserInfoForMediaItem:(id)arg1;
- (id)fixUrl:(id)arg1 withVideoInfo:(id)arg2;
- (id)fixUrlWithVideoInfo:(id)arg1;
- (void)sendPingForMediaItem:(id)arg1 onStep:(long long)arg2 error:(id)arg3;
- (void)sendPingForMediaItemWhenOpenLandingPage:(id)arg1 isNativePage:(_Bool)arg2;
- (void)sendPingForMediaItem:(id)arg1 reportItem:(id)arg2 withTimePast:(_Bool)arg3 timePast:(double)arg4;
- (void)pingImmediatelyWithURL:(id)arg1;
- (id)commonVInfo;
- (void)pingSecClickForMediaItem:(id)arg1 WithActionID:(long long)arg2;
- (void)pingForMediaItemWhenOpenWebLandingPage:(id)arg1;
- (void)pingForMediaItemWhenOpenNativeLandingPage:(id)arg1;
- (void)pingImmediatelyForMediaItem:(id)arg1;
- (void)pingForWZMediaItem:(id)arg1;
- (void)pingForMediaItem:(id)arg1 onSecond:(double)arg2 isSkipped:(_Bool)arg3;
- (void)pingForMediaItem:(id)arg1 onSecond:(double)arg2;
- (void)pingForMediaItemWhenSkipped:(id)arg1 onSecond:(double)arg2;
- (void)pingForMediaItemPlayFinished:(id)arg1;
- (void)pingForMediaItemVideoLoadFailed:(id)arg1;
- (void)pingForMediaItemLoadFailed:(id)arg1 error:(id)arg2;
- (void)funnelPingForMediaItem:(id)arg1 withError:(id)arg2 inPlayback:(_Bool)arg3;
- (void)pingForVideoPlayStatus:(unsigned long long)arg1 adItem:(id)arg2;
- (void)pingUnlikeOpsForItem:(id)arg1;
- (_Bool)isOrderReportType:(long long)arg1 CurrentImpType:(long long)arg2;
- (id)commonInfo;
- (void)pingForPV:(id)arg1;
- (void)pingForClick:(id)arg1;
- (void)pingForAction:(id)arg1;
- (void)addPingItem:(id)arg1 forTADActionType:(long long)arg2;
- (void)mmaReportForOpenLandingePage:(id)arg1 isNative:(_Bool)arg2;
- (void)pingForMMASecClick:(id)arg1;
- (void)pingForMMAClick:(id)arg1;
- (void)pingForMMAView:(id)arg1;
- (void)pingForMMA:(id)arg1 actionType:(long long)arg2;
- (void)pingWithItemInfo:(id)arg1 forTADActionType:(long long)arg2 withExtendInfo:(id)arg3;
- (void)pingForItem:(id)arg1 forActionType:(long long)arg2 withExtendInfo:(id)arg3;
- (void)pingForItem:(id)arg1 forActionType:(long long)arg2;
- (void)pingMindForItem:(id)arg1 forActionId:(long long)arg2;

@end

