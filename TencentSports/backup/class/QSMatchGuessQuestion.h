//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "QSModel.h"

@class NSArray, NSString, QSMatchGuessQuestionExtraInfo;

__attribute__((visibility("hidden")))
@interface QSMatchGuessQuestion : QSModel
{
    _Bool _active;
    _Bool _showChoiceDirectly;
    NSString *_adLogo;
    NSArray *_choiceOpts;
    NSString *_gid;
    NSString *_endTime;
    NSString *_endTimeDesc;
    NSString *_joinTime;
    NSString *_title;
    NSString *_participatorCnt;
    NSString *_userChoiceId;
    NSString *_userChoiceText;
    NSString *_choiceAns;
    NSString *_lotteryWord;
    long long _lotteryResult;
    long long _choiceType;
    NSString *_currencyCnt;
    NSString *_winCurrencyCnt;
    NSString *_extraDesc;
    NSString *_odds;
    NSString *_vsLogo;
    QSMatchGuessQuestionExtraInfo *_extraInfo;
    long long _drawStateNo;
    NSString *_ad;
    NSString *_adIcon;
}

+ (Class)classForObjectInArrayProperty:(id)arg1;
@property(retain, nonatomic) NSString *adIcon; // @synthesize adIcon=_adIcon;
@property(retain, nonatomic) NSString *ad; // @synthesize ad=_ad;
@property(nonatomic) _Bool showChoiceDirectly; // @synthesize showChoiceDirectly=_showChoiceDirectly;
@property(nonatomic) long long drawStateNo; // @synthesize drawStateNo=_drawStateNo;
@property(retain, nonatomic) QSMatchGuessQuestionExtraInfo *extraInfo; // @synthesize extraInfo=_extraInfo;
@property(retain, nonatomic) NSString *vsLogo; // @synthesize vsLogo=_vsLogo;
@property(nonatomic) _Bool active; // @synthesize active=_active;
@property(retain, nonatomic) NSString *odds; // @synthesize odds=_odds;
@property(retain, nonatomic) NSString *extraDesc; // @synthesize extraDesc=_extraDesc;
@property(retain, nonatomic) NSString *winCurrencyCnt; // @synthesize winCurrencyCnt=_winCurrencyCnt;
@property(retain, nonatomic) NSString *currencyCnt; // @synthesize currencyCnt=_currencyCnt;
@property(nonatomic) long long choiceType; // @synthesize choiceType=_choiceType;
@property(nonatomic) long long lotteryResult; // @synthesize lotteryResult=_lotteryResult;
@property(retain, nonatomic) NSString *lotteryWord; // @synthesize lotteryWord=_lotteryWord;
@property(retain, nonatomic) NSString *choiceAns; // @synthesize choiceAns=_choiceAns;
@property(retain, nonatomic) NSString *userChoiceText; // @synthesize userChoiceText=_userChoiceText;
@property(retain, nonatomic) NSString *userChoiceId; // @synthesize userChoiceId=_userChoiceId;
@property(retain, nonatomic) NSString *participatorCnt; // @synthesize participatorCnt=_participatorCnt;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
@property(retain, nonatomic) NSString *joinTime; // @synthesize joinTime=_joinTime;
@property(retain, nonatomic) NSString *endTimeDesc; // @synthesize endTimeDesc=_endTimeDesc;
@property(retain, nonatomic) NSString *endTime; // @synthesize endTime=_endTime;
@property(retain, nonatomic) NSString *gid; // @synthesize gid=_gid;
@property(retain, nonatomic) NSArray *choiceOpts; // @synthesize choiceOpts=_choiceOpts;
@property(retain, nonatomic) NSString *adLogo; // @synthesize adLogo=_adLogo;
- (void).cxx_destruct;

@end
