//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "QSModel.h"

@class NSString, QSGuessRankingPrizeItem;

__attribute__((visibility("hidden")))
@interface QSGuessRankingPrize : QSModel
{
    _Bool _hasPrize;
    NSString *_title;
    NSString *_word;
    QSGuessRankingPrizeItem *_one;
    QSGuessRankingPrizeItem *_two;
    QSGuessRankingPrizeItem *_three;
}

@property(retain, nonatomic) QSGuessRankingPrizeItem *three; // @synthesize three=_three;
@property(retain, nonatomic) QSGuessRankingPrizeItem *two; // @synthesize two=_two;
@property(retain, nonatomic) QSGuessRankingPrizeItem *one; // @synthesize one=_one;
@property(retain, nonatomic) NSString *word; // @synthesize word=_word;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
@property(nonatomic) _Bool hasPrize; // @synthesize hasPrize=_hasPrize;
- (void).cxx_destruct;

@end

