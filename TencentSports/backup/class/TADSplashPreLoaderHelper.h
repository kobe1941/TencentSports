//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSString, TADSplashItem, TSASplashAsyncLoader;
@protocol OS_dispatch_queue;

@interface TADSplashPreLoaderHelper : NSObject
{
    NSObject<OS_dispatch_queue> *_loaderQueue;
    int playStrategy[2][5];
    TSASplashAsyncLoader *_loader;
    TADSplashItem *_splashItem;
    long long _loadStatus;
    NSString *_synchronizedToken;
    double _timeRecord;
    NSArray *_playTimeInterControl;
}

+ (id)shareInstance;
@property(retain, nonatomic) NSArray *playTimeInterControl; // @synthesize playTimeInterControl=_playTimeInterControl;
@property(nonatomic) double timeRecord; // @synthesize timeRecord=_timeRecord;
@property(retain, nonatomic) NSString *synchronizedToken; // @synthesize synchronizedToken=_synchronizedToken;
@property(nonatomic) long long loadStatus; // @synthesize loadStatus=_loadStatus;
@property(retain, nonatomic) TADSplashItem *splashItem; // @synthesize splashItem=_splashItem;
@property(retain, nonatomic) TSASplashAsyncLoader *loader; // @synthesize loader=_loader;
- (void).cxx_destruct;
- (void)_recordTime;
- (void)_pingPVForEmptyOrder:(id)arg1;
- (void)_pingPVForSplashItem:(id)arg1;
- (_Bool)enableSplashAdInLaunchingType:(long long)arg1 from:(long long)arg2;
@property(readonly, nonatomic) long long status;
- (id)currentSplashItem;
- (void)disableSplashAdWithReasonCode:(long long)arg1;
- (void)_selectCurrentSplashAdOrder;
- (_Bool)selectCurrentSplashAdOrder;
- (void)_preLoadSplashAdOrderWithUserInfo:(id)arg1 withLaunchingTpye:(long long)arg2 callFrom:(long long)arg3;
- (void)preLoadSplashAdOrderWithUserInfo:(id)arg1 withLaunchingTpye:(long long)arg2 callFrom:(long long)arg3;
- (void)preLoadSplashAdOrderWithUserInfo:(id)arg1;
- (id)init;

@end

