//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "QSStatedData.h"

@class NSString, QSMatchGuessQuestionExtraInfo;

__attribute__((visibility("hidden")))
@interface QSMatchGuessJoinCommitData : QSStatedData
{
    QSMatchGuessQuestionExtraInfo *_extraInfo;
    NSString *_gid;
    NSString *_choiceId;
    NSString *_currencyCnt;
    NSString *_odds;
}

@property(copy, nonatomic) NSString *odds; // @synthesize odds=_odds;
@property(copy, nonatomic) NSString *currencyCnt; // @synthesize currencyCnt=_currencyCnt;
@property(copy, nonatomic) NSString *choiceId; // @synthesize choiceId=_choiceId;
@property(retain, nonatomic) NSString *gid; // @synthesize gid=_gid;
@property(retain, nonatomic) QSMatchGuessQuestionExtraInfo *extraInfo; // @synthesize extraInfo=_extraInfo;
- (void).cxx_destruct;
- (void)resetWithResponseModel:(id)arg1;
- (id)retExtraInfoInError:(id)arg1;
- (id)retOddsInError:(id)arg1;
- (id)httpURLComponents;
- (id)identifier;
- (long long)cookiesInvalidOperation;

@end

