//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "QSStatedData.h"

@class NSString, QSPlayerRanklistDetailContentInfo;

__attribute__((visibility("hidden")))
@interface QSPlayerRanklistDetailData : QSStatedData
{
    NSString *_columnId;
    long long _tabType;
    QSPlayerRanklistDetailContentInfo *_playerRanklistDetailContentInfo;
}

@property(retain, nonatomic) QSPlayerRanklistDetailContentInfo *playerRanklistDetailContentInfo; // @synthesize playerRanklistDetailContentInfo=_playerRanklistDetailContentInfo;
@property(nonatomic) long long tabType; // @synthesize tabType=_tabType;
@property(retain, nonatomic) NSString *columnId; // @synthesize columnId=_columnId;
- (void).cxx_destruct;
- (void)resetWithResponseModel:(id)arg1;
- (id)httpURLComponents;
- (id)identifier;

@end

