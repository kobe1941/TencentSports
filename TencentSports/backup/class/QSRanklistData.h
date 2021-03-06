//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "QSStatedData.h"

@class NSArray, NSString;

__attribute__((visibility("hidden")))
@interface QSRanklistData : QSStatedData
{
    NSString *_columnId;
    long long _tabType;
    NSArray *_ranklistArray;
}

@property(retain, nonatomic) NSArray *ranklistArray; // @synthesize ranklistArray=_ranklistArray;
@property(nonatomic) long long tabType; // @synthesize tabType=_tabType;
@property(copy, nonatomic) NSString *columnId; // @synthesize columnId=_columnId;
- (void).cxx_destruct;
- (id)filteredDataWithOriginalData:(id)arg1;
- (void)resetWithResponseModel:(id)arg1;
- (id)httpURLComponents;
- (id)identifier;

@end

