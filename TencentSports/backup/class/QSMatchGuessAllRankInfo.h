//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "QSModel.h"

@class NSArray, NSString, QSMatchGuessAllRankAnchorRank, QSMatchGuessAllRankGuess, QSMatchGuessAllRankGuessRank;

__attribute__((visibility("hidden")))
@interface QSMatchGuessAllRankInfo : QSModel
{
    _Bool _cardMark;
    QSMatchGuessAllRankGuess *_guess;
    QSMatchGuessAllRankGuessRank *_guessRank;
    QSMatchGuessAllRankAnchorRank *_anchorRank;
    NSArray *_moreRank;
    NSString *_userRank;
}

+ (Class)classForObjectInArrayProperty:(id)arg1;
@property(retain, nonatomic) NSString *userRank; // @synthesize userRank=_userRank;
@property(nonatomic) _Bool cardMark; // @synthesize cardMark=_cardMark;
@property(retain, nonatomic) NSArray *moreRank; // @synthesize moreRank=_moreRank;
@property(retain, nonatomic) QSMatchGuessAllRankAnchorRank *anchorRank; // @synthesize anchorRank=_anchorRank;
@property(retain, nonatomic) QSMatchGuessAllRankGuessRank *guessRank; // @synthesize guessRank=_guessRank;
@property(retain, nonatomic) QSMatchGuessAllRankGuess *guess; // @synthesize guess=_guess;
- (void).cxx_destruct;

@end

