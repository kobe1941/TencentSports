//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "QSModel.h"

@class NSString, QSLotteryPropsData, QSMatchDetailDmConfig, QSMatchDetailPropsInfo;

__attribute__((visibility("hidden")))
@interface QSSportsMediaMatchInfo : QSModel
{
    id _lotteryPropsData;
    QSMatchDetailPropsInfo *_propsInfo;
    _Bool _isPay;
    _Bool _openVideoStat;
    NSString *_mid;
    NSString *_targetId;
    long long _matchType;
    NSString *_leftGoal;
    long long _leftSupport;
    NSString *_leftPropsTeamLogo;
    NSString *_leftBadge;
    NSString *_leftId;
    NSString *_leftName;
    NSString *_rightGoal;
    long long _rightSupport;
    NSString *_rightPropsTeamLogo;
    NSString *_rightBadge;
    NSString *_rightId;
    NSString *_rightName;
    NSString *_quarter;
    NSString *_quarterTime;
    NSString *_logo;
    NSString *_title;
    long long _matchPeriod;
    long long _livePeriod;
    NSString *_liveId;
    NSString *_programId;
    NSString *_supportType;
    QSMatchDetailDmConfig *_dmConfig;
    long long _onLiveMatchCnt;
    NSString *_onLivesDesc;
    NSString *_commentator;
    NSString *_leftColor;
    NSString *_rightColor;
}

@property(copy, nonatomic) NSString *rightColor; // @synthesize rightColor=_rightColor;
@property(copy, nonatomic) NSString *leftColor; // @synthesize leftColor=_leftColor;
@property(retain, nonatomic) NSString *commentator; // @synthesize commentator=_commentator;
@property(nonatomic) _Bool openVideoStat; // @synthesize openVideoStat=_openVideoStat;
@property(retain, nonatomic) NSString *onLivesDesc; // @synthesize onLivesDesc=_onLivesDesc;
@property(nonatomic) long long onLiveMatchCnt; // @synthesize onLiveMatchCnt=_onLiveMatchCnt;
@property(retain, nonatomic) QSMatchDetailDmConfig *dmConfig; // @synthesize dmConfig=_dmConfig;
@property(retain, nonatomic) NSString *supportType; // @synthesize supportType=_supportType;
@property(nonatomic) _Bool isPay; // @synthesize isPay=_isPay;
@property(copy, nonatomic) NSString *programId; // @synthesize programId=_programId;
@property(copy, nonatomic) NSString *liveId; // @synthesize liveId=_liveId;
@property(nonatomic) long long livePeriod; // @synthesize livePeriod=_livePeriod;
@property(nonatomic) long long matchPeriod; // @synthesize matchPeriod=_matchPeriod;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
@property(retain, nonatomic) NSString *logo; // @synthesize logo=_logo;
@property(copy, nonatomic) NSString *quarterTime; // @synthesize quarterTime=_quarterTime;
@property(copy, nonatomic) NSString *quarter; // @synthesize quarter=_quarter;
@property(copy, nonatomic) NSString *rightName; // @synthesize rightName=_rightName;
@property(copy, nonatomic) NSString *rightId; // @synthesize rightId=_rightId;
@property(copy, nonatomic) NSString *rightBadge; // @synthesize rightBadge=_rightBadge;
@property(copy, nonatomic) NSString *rightPropsTeamLogo; // @synthesize rightPropsTeamLogo=_rightPropsTeamLogo;
@property(nonatomic) long long rightSupport; // @synthesize rightSupport=_rightSupport;
@property(copy, nonatomic) NSString *rightGoal; // @synthesize rightGoal=_rightGoal;
@property(copy, nonatomic) NSString *leftName; // @synthesize leftName=_leftName;
@property(copy, nonatomic) NSString *leftId; // @synthesize leftId=_leftId;
@property(copy, nonatomic) NSString *leftBadge; // @synthesize leftBadge=_leftBadge;
@property(copy, nonatomic) NSString *leftPropsTeamLogo; // @synthesize leftPropsTeamLogo=_leftPropsTeamLogo;
@property(nonatomic) long long leftSupport; // @synthesize leftSupport=_leftSupport;
@property(copy, nonatomic) NSString *leftGoal; // @synthesize leftGoal=_leftGoal;
@property(nonatomic) long long matchType; // @synthesize matchType=_matchType;
@property(copy, nonatomic) NSString *targetId; // @synthesize targetId=_targetId;
@property(copy, nonatomic) NSString *mid; // @synthesize mid=_mid;
@property(retain, nonatomic) QSMatchDetailPropsInfo *propsInfo; // @synthesize propsInfo=_propsInfo;
- (void).cxx_destruct;
- (void)resetLotteryPropsDataWithDataSource:(id)arg1;
@property(readonly, nonatomic) QSLotteryPropsData *lotteryPropsData; // @dynamic lotteryPropsData;

@end

