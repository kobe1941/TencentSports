//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "QSPropsRanklistKickOffData.h"

@class NSString, QSPropsRanklistDetailRankListRankItem;

__attribute__((visibility("hidden")))
@interface QSPropsRanklistCounterAttackKickOffData : QSPropsRanklistKickOffData
{
    NSString *_mid;
    NSString *_targetCode;
    long long _rankType;
    NSString *_userId;
    NSString *_leftTeam;
    NSString *_rightTeam;
    NSString *_matchTitle;
    QSPropsRanklistDetailRankListRankItem *_kickedOffRankItem;
}

@property(retain, nonatomic) QSPropsRanklistDetailRankListRankItem *kickedOffRankItem; // @synthesize kickedOffRankItem=_kickedOffRankItem;
@property(copy, nonatomic) NSString *matchTitle; // @synthesize matchTitle=_matchTitle;
@property(copy, nonatomic) NSString *rightTeam; // @synthesize rightTeam=_rightTeam;
@property(copy, nonatomic) NSString *leftTeam; // @synthesize leftTeam=_leftTeam;
@property(copy, nonatomic) NSString *userId; // @synthesize userId=_userId;
@property(nonatomic) long long rankType; // @synthesize rankType=_rankType;
@property(copy, nonatomic) NSString *targetCode; // @synthesize targetCode=_targetCode;
@property(copy, nonatomic) NSString *mid; // @synthesize mid=_mid;
- (void).cxx_destruct;
- (id)buyNum;
- (id)propsid;
- (long long)costKB;
- (void)kickOffRequestDataDidFinish;
- (id)kickOffRequestData;

@end

