//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;

@interface TADOrderCache : NSObject
{
    NSMutableDictionary *_orderDataMap;
    NSMutableDictionary *_orderIndexMap;
    NSMutableDictionary *_orderLcountMap;
}

+ (id)sharedInstance;
@property(retain, nonatomic) NSMutableDictionary *orderLcountMap; // @synthesize orderLcountMap=_orderLcountMap;
@property(retain, nonatomic) NSMutableDictionary *orderIndexMap; // @synthesize orderIndexMap=_orderIndexMap;
@property(retain, nonatomic) NSMutableDictionary *orderDataMap; // @synthesize orderDataMap=_orderDataMap;
- (void).cxx_destruct;
- (_Bool)isIndexValid:(id)arg1 withDp3Item:(id)arg2;
- (void)unlikeOrder:(id)arg1;
- (id)lcountForKey:(id)arg1;
- (id)getStreamAdSeqListWithChannel:(id)arg1;
- (id)getRequestIdWithChannel:(id)arg1;
- (id)getStreamAdOrderListWithChannel:(id)arg1;
- (id)cachedSplashUoidList;
- (id)cachedSplashServerDataList;
- (id)cachedSplashOrderList;
- (_Bool)isOutDated:(id)arg1;
- (void)checkOverPVLimit:(id)arg1;
- (void)addOrderViewCount:(id)arg1;
- (void)clear;
- (void)p_setVaildDateFor:(id)arg1 withDate:(id)arg2;
- (void)appWillResignActiveNotification:(id)arg1;
- (_Bool)updateOrInsertDataCache:(id)arg1;
- (id)stringFromDate:(id)arg1;
- (id)p_updateRotDict:(id)arg1 withKey:(id)arg2 ForDic:(id)arg3;
- (id)p_updateRotDict:(id)arg1 withLevelOne:(id)arg2 withLevelTwo:(id)arg3 ForDic:(id)arg4;
- (void)markImpressedStreamAd:(id)arg1 forChannel:(id)arg2 requestId:(id)arg3;
- (void)updateStreamRotDict:(id)arg1 forChannel:(id)arg2;
- (void)updateRequestId:(id)arg1 forChannel:(id)arg2;
- (void)updateRotDateForChannel:(id)arg1;
- (void)updateSplashRotDict:(id)arg1 withDateString:(id)arg2;
- (void)updatePhotosRotDict:(id)arg1;
- (void)updateRotDict:(id)arg1 forChannel:(id)arg2 withAdType:(id)arg3;
- (void)rotateAdForItem:(id)arg1;
- (void)rotateAdForKey:(id)arg1;
- (id)allCacheOrderForSplashAdPreload;
- (int)p_playCountForForkey:(id)arg1;
- (id)cachedAdsForChannel:(id)arg1 withType:(id)arg2 dp3Item:(id)arg3 usePool:(_Bool)arg4;
- (id)cachedAdForIndexFetcher:(id)arg1 dp3Item:(id)arg2;
- (id)cachedAdForSplashWithDp3Item:(id)arg1;
- (id)cachedAdForChannel:(id)arg1 withType:(id)arg2 dp3Item:(id)arg3;
- (id)cachedAdByOrderId:(id)arg1;
- (void)dealloc;
- (id)init;

@end

