//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "QSModel.h"

@class NSString;

__attribute__((visibility("hidden")))
@interface QSUserGuessListItem : QSModel
{
    NSString *_gid;
    NSString *_title;
    long long _period;
    long long _lotteryResult;
    NSString *_drawWord;
    NSString *_userChoiceText;
    NSString *_participatorCnt;
    NSString *_choiceAns;
}

@property(retain, nonatomic) NSString *choiceAns; // @synthesize choiceAns=_choiceAns;
@property(retain, nonatomic) NSString *participatorCnt; // @synthesize participatorCnt=_participatorCnt;
@property(retain, nonatomic) NSString *userChoiceText; // @synthesize userChoiceText=_userChoiceText;
@property(retain, nonatomic) NSString *drawWord; // @synthesize drawWord=_drawWord;
@property(nonatomic) long long lotteryResult; // @synthesize lotteryResult=_lotteryResult;
@property(nonatomic) long long period; // @synthesize period=_period;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
@property(retain, nonatomic) NSString *gid; // @synthesize gid=_gid;
- (void).cxx_destruct;

@end

