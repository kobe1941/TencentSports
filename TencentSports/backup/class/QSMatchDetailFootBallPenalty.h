//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "QSModel.h"

@class NSString;

__attribute__((visibility("hidden")))
@interface QSMatchDetailFootBallPenalty : QSModel
{
    NSString *_round;
    NSString *_leftPlayerId;
    NSString *_leftPlayerName;
    NSString *_leftResult;
    NSString *_rightPlayerId;
    NSString *_rightPlayerName;
    NSString *_rightResult;
}

@property(retain, nonatomic) NSString *rightResult; // @synthesize rightResult=_rightResult;
@property(retain, nonatomic) NSString *rightPlayerName; // @synthesize rightPlayerName=_rightPlayerName;
@property(retain, nonatomic) NSString *rightPlayerId; // @synthesize rightPlayerId=_rightPlayerId;
@property(retain, nonatomic) NSString *leftResult; // @synthesize leftResult=_leftResult;
@property(retain, nonatomic) NSString *leftPlayerName; // @synthesize leftPlayerName=_leftPlayerName;
@property(retain, nonatomic) NSString *leftPlayerId; // @synthesize leftPlayerId=_leftPlayerId;
@property(retain, nonatomic) NSString *round; // @synthesize round=_round;
- (void).cxx_destruct;

@end
