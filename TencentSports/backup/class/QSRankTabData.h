//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "QSStatedData.h"

@class NSArray, NSString;

__attribute__((visibility("hidden")))
@interface QSRankTabData : QSStatedData
{
    _Bool _needSchedule;
    _Bool _isWorldCup;
    NSString *_columnId;
    long long _tabType;
    NSString *_columnName;
}

@property(nonatomic) _Bool isWorldCup; // @synthesize isWorldCup=_isWorldCup;
@property(nonatomic) _Bool needSchedule; // @synthesize needSchedule=_needSchedule;
@property(copy, nonatomic) NSString *columnName; // @synthesize columnName=_columnName;
@property(nonatomic) long long tabType; // @synthesize tabType=_tabType;
@property(copy, nonatomic) NSString *columnId; // @synthesize columnId=_columnId;
- (void).cxx_destruct;
- (_Bool)cacheExists;
- (double)cacheExpireTime;
- (void)resetFromCacheObject:(id)arg1;
- (unsigned long long)indexWithType:(long long)arg1;
- (unsigned long long)defaultRankIndex;
@property(readonly, nonatomic) NSArray *rankTabs;
- (void)resetWithResponseModel:(id)arg1;
- (id)httpURLComponents;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)identifier;

@end
