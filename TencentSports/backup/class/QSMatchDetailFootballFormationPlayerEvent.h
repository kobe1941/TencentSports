//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "QSModel.h"

@class NSString;

__attribute__((visibility("hidden")))
@interface QSMatchDetailFootballFormationPlayerEvent : QSModel
{
    NSString *_type;
    NSString *_time;
    NSString *_playerId;
    NSString *_teamId;
    NSString *_homeGoal;
    NSString *_awayGoal;
    NSString *_eventPeriod;
    NSString *_vid;
    NSString *_playUrl;
    NSString *_newsId;
    NSString *_newsAppUrl;
    NSString *_logo;
}

@property(retain, nonatomic) NSString *logo; // @synthesize logo=_logo;
@property(retain, nonatomic) NSString *newsAppUrl; // @synthesize newsAppUrl=_newsAppUrl;
@property(retain, nonatomic) NSString *newsId; // @synthesize newsId=_newsId;
@property(retain, nonatomic) NSString *playUrl; // @synthesize playUrl=_playUrl;
@property(retain, nonatomic) NSString *vid; // @synthesize vid=_vid;
@property(retain, nonatomic) NSString *eventPeriod; // @synthesize eventPeriod=_eventPeriod;
@property(retain, nonatomic) NSString *awayGoal; // @synthesize awayGoal=_awayGoal;
@property(retain, nonatomic) NSString *homeGoal; // @synthesize homeGoal=_homeGoal;
@property(retain, nonatomic) NSString *teamId; // @synthesize teamId=_teamId;
@property(retain, nonatomic) NSString *playerId; // @synthesize playerId=_playerId;
@property(retain, nonatomic) NSString *time; // @synthesize time=_time;
@property(retain, nonatomic) NSString *type; // @synthesize type=_type;
- (void).cxx_destruct;

@end
