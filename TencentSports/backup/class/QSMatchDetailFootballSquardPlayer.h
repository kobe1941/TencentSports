//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "QSModel.h"

@class NSString;

__attribute__((visibility("hidden")))
@interface QSMatchDetailFootballSquardPlayer : QSModel
{
    _Bool _isStart;
    NSString *_playerId;
    NSString *_jerseyNum;
    NSString *_position;
    NSString *_playerName;
    NSString *_playerIcon;
    NSString *_playerUrl;
}

@property(nonatomic) _Bool isStart; // @synthesize isStart=_isStart;
@property(retain, nonatomic) NSString *playerUrl; // @synthesize playerUrl=_playerUrl;
@property(retain, nonatomic) NSString *playerIcon; // @synthesize playerIcon=_playerIcon;
@property(retain, nonatomic) NSString *playerName; // @synthesize playerName=_playerName;
@property(retain, nonatomic) NSString *position; // @synthesize position=_position;
@property(retain, nonatomic) NSString *jerseyNum; // @synthesize jerseyNum=_jerseyNum;
@property(retain, nonatomic) NSString *playerId; // @synthesize playerId=_playerId;
- (void).cxx_destruct;

@end

