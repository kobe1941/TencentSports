//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "QSStatedData.h"

@class NSString, QSPropsRanklistDetailInfo;

__attribute__((visibility("hidden")))
@interface QSPropsRanklistDetailData : QSStatedData
{
    NSString *_targetCode;
    NSString *_mid;
    NSString *_userId;
}

@property(copy, nonatomic) NSString *userId; // @synthesize userId=_userId;
@property(copy, nonatomic) NSString *mid; // @synthesize mid=_mid;
@property(copy, nonatomic) NSString *targetCode; // @synthesize targetCode=_targetCode;
- (void).cxx_destruct;
- (void)resetWithResponseModel:(id)arg1;
- (id)httpURLComponents;
@property(readonly, nonatomic) QSPropsRanklistDetailInfo *info; // @dynamic info;

@end

