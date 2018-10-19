//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "MTAMainServiceDelegate-Protocol.h"

@class NSString;

@interface MTA : NSObject <MTAMainServiceDelegate>
{
    struct dispatch_queue_s *task_queue;
    NSString *_keyForKeyChain;
    NSString *_mtaCurrentPage;
    NSString *_lastPage;
}

+ (void)setUserProperty:(id)arg1;
+ (void)setAccount:(id)arg1 type:(unsigned long long)arg2;
+ (void)sendEventReplaceBlock:(id)arg1 withCachedEvent:(int)arg2;
+ (void)reportSessionEvent:(id)arg1 isRealTime:(_Bool)arg2;
+ (id)getMtaUDID;
+ (void)trackGameUser:(id)arg1 world:(id)arg2 level:(id)arg3 appkey:(id)arg4 isRealTime:(_Bool)arg5;
+ (void)trackGameUser:(id)arg1 world:(id)arg2 level:(id)arg3;
+ (void)reportAppMonitorStat:(id)arg1 appkey:(id)arg2 isRealTime:(_Bool)arg3;
+ (void)reportAppMonitorStat:(id)arg1;
+ (void)reportAccount:(id)arg1 type:(unsigned int)arg2 ext:(id)arg3 appkey:(id)arg4 isRealTime:(_Bool)arg5;
+ (void)reportAccount:(id)arg1 type:(unsigned int)arg2 ext:(id)arg3;
+ (void)reportQQ:(id)arg1 appkey:(id)arg2 isRealTime:(_Bool)arg3;
+ (void)reportQQ:(id)arg1;
+ (void)stopSession;
+ (void)startNewSession:(_Bool)arg1;
+ (void)startNewSession;
+ (long long)trackCustomKeyValueEventDuration:(float)arg1 withEventid:(id)arg2 props:(id)arg3 appKey:(id)arg4 isRealTime:(_Bool)arg5;
+ (long long)trackCustomKeyValueEventDuration:(float)arg1 withEventid:(id)arg2 props:(id)arg3;
+ (long long)trackCustomKeyValueEventEnd:(id)arg1 props:(id)arg2 appkey:(id)arg3 isRealTime:(_Bool)arg4;
+ (long long)trackCustomKeyValueEventEnd:(id)arg1 props:(id)arg2;
+ (long long)trackCustomKeyValueEventBegin:(id)arg1 props:(id)arg2 appkey:(id)arg3;
+ (long long)trackCustomKeyValueEventBegin:(id)arg1 props:(id)arg2;
+ (long long)trackCustomKeyValueEvent:(id)arg1 props:(id)arg2 appkey:(id)arg3 isRealTime:(_Bool)arg4;
+ (long long)trackCustomKeyValueEvent:(id)arg1 props:(id)arg2;
+ (long long)trackCustomEventEnd:(id)arg1 args:(id)arg2 appkey:(id)arg3 isRealTime:(_Bool)arg4;
+ (long long)trackCustomEventEnd:(id)arg1 args:(id)arg2;
+ (long long)trackCustomEventBegin:(id)arg1 args:(id)arg2 appkey:(id)arg3;
+ (long long)trackCustomEventBegin:(id)arg1 args:(id)arg2;
+ (long long)trackCustomEvent:(id)arg1 args:(id)arg2 appkey:(id)arg3 isRealTime:(_Bool)arg4;
+ (long long)trackCustomEvent:(id)arg1 args:(id)arg2;
+ (long long)trackError:(id)arg1 appkey:(id)arg2 isRealTime:(_Bool)arg3;
+ (long long)trackError:(id)arg1;
+ (long long)trackException:(id)arg1 appkey:(id)arg2 isRealTime:(_Bool)arg3;
+ (long long)trackException:(id)arg1;
+ (void)trackActiveEnd;
+ (void)trackActiveBegin;
+ (void)resetTrackActiveStartTime;
+ (void)autoTrackActiveEnd;
+ (void)autoTrackActiveBegin;
+ (void)trackPageViewEnd:(id)arg1 appkey:(id)arg2 isRealTime:(_Bool)arg3;
+ (void)trackPageViewEnd:(id)arg1;
+ (void)trackPageViewBegin:(id)arg1 appkey:(id)arg2;
+ (void)trackPageViewBegin:(id)arg1;
+ (void)trackDirectPageViewEnd:(id)arg1 appkey:(id)arg2 isRealTime:(_Bool)arg3;
+ (void)trackDirectPageViewBegin:(id)arg1 appkey:(id)arg2;
+ (void)commitCachedStats:(int)arg1;
+ (_Bool)startWithAppkey:(id)arg1 checkedSdkVersion:(id)arg2;
+ (void)startWithAppkey:(id)arg1;
+ (id)allocWithZone:(struct _NSZone *)arg1;
+ (id)getInstance;
+ (id)getMTAVersion;
+ (id)getNetworkType;
+ (id)getAppVersion;
+ (_Bool)isEqualToMagic:(id)arg1;
+ (id)filterBodyData:(id)arg1 configData:(id)arg2;
+ (id)getSendData:(id)arg1;
+ (id)getAppKey;
+ (id)getMTAConfigIDFA;
+ (id)getIDFV;
+ (id)getBundleID;
+ (id)getOpenUDID;
@property(retain, nonatomic) NSString *lastPage; // @synthesize lastPage=_lastPage;
@property(retain, nonatomic) NSString *mtaCurrentPage; // @synthesize mtaCurrentPage=_mtaCurrentPage;
@property(retain, nonatomic) NSString *keyForKeyChain; // @synthesize keyForKeyChain=_keyForKeyChain;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (struct dispatch_queue_s *)getTaskQueue;
- (void)dealloc;
- (void)onWillApplicationEnterBackground;
- (void)onWillApplicationEnterForeground;
- (void)onDidApplicationBecomeActive;
- (void)onWillApplicationResignActive;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
