//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSHashTable, NSMutableDictionary;

@interface QSTVLiveHttpProxyManager : NSObject
{
    _Bool _enable;
    long long _liveHttpProxyState;
    NSMutableDictionary *_playerDic;
    NSHashTable *_restartArray;
}

+ (id)sharedInstance;
@property(retain, nonatomic) NSHashTable *restartArray; // @synthesize restartArray=_restartArray;
@property(retain, nonatomic) NSMutableDictionary *playerDic; // @synthesize playerDic=_playerDic;
@property(nonatomic) long long liveHttpProxyState; // @synthesize liveHttpProxyState=_liveHttpProxyState;
@property(nonatomic) _Bool enable; // @synthesize enable=_enable;
- (void).cxx_destruct;
- (void)log:(id)arg1;
- (void)setLogFunc:(CDUnknownFunctionPointerType)arg1;
- (void)pushNetworkEvent;
- (void)enterBackgroundTVLiveHttpProxy;
- (void)enterForegroundTVLiveHttpProxy;
- (id)buildLivePlayURL:(int)arg1;
- (int)startLivePlay:(id)arg1 withCDNUrl:(id)arg2;
- (_Bool)stopTVLiveHttpProxy:(int)arg1;
- (void)deinitTVLiveHttpProxy;
- (void)initTVLiveHttpProxy;
- (void)removeProxyObject:(id)arg1;
- (void)setProxyObjectForPlayer:(id)arg1 proxyObject:(id)arg2;
- (id)proxyObjectForPlayer:(id)arg1;
- (id)originLiveURLArrayOfPlayer:(id)arg1;
- (id)proxyUrlOfPlayer:(id)arg1;
- (id)start:(id)arg1 programId:(id)arg2 cdnUrl:(id)arg3 sportsTVLiveDelegate:(id)arg4 originLiveURLArray:(id)arg5;
- (void)stop:(id)arg1;
- (void)onAppWillEnterForeground:(id)arg1;
- (void)onAppDidEnterBackground:(id)arg1;
- (void)applicationWillTerminate:(id)arg1;
- (void)didReceiveMemoryWarning:(id)arg1;
- (void)removeNotification;
- (void)addNotification;
- (void)dealloc;
- (id)init;

@end

