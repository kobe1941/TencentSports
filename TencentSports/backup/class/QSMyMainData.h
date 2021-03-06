//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "QSStatedData.h"

@class NSMutableDictionary, NSString, QSMyMainInfo;

__attribute__((visibility("hidden")))
@interface QSMyMainData : QSStatedData
{
    _Bool _dailyCheckPop;
    _Bool _beginnerRewardPop;
    NSString *_dateString;
    NSMutableDictionary *_redPoints;
    NSMutableDictionary *_dailyCycleReadDates;
}

+ (_Bool)cleanCacheWhenUserChanged;
@property(retain, nonatomic) NSMutableDictionary *dailyCycleReadDates; // @synthesize dailyCycleReadDates=_dailyCycleReadDates;
@property(retain, nonatomic) NSMutableDictionary *redPoints; // @synthesize redPoints=_redPoints;
@property(nonatomic) _Bool beginnerRewardPop; // @synthesize beginnerRewardPop=_beginnerRewardPop;
@property(nonatomic) _Bool dailyCheckPop; // @synthesize dailyCheckPop=_dailyCheckPop;
@property(retain, nonatomic) NSString *dateString; // @synthesize dateString=_dateString;
- (void).cxx_destruct;
- (void)clearRedPointForItem:(id)arg1;
- (id)checkRedPointForItem:(id)arg1;
@property(readonly, nonatomic) __weak QSMyMainInfo *info; // @dynamic info;
- (void)refreshDataDidFinishWithError:(id)arg1;
- (void)resetWithResponseModel:(id)arg1;
- (id)httpURLComponents;
- (void)resetFromCacheObject:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)emptyMemoryCache;
- (id)identifier;
- (double)updateTimeInterval;
- (double)cacheExpireTime;

@end

