//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "QSMatchStateBaseInfo.h"

@class QSMatchStateBasketballTeamInfo;

__attribute__((visibility("hidden")))
@interface QSMatchStateBasketballTeamPlayerInfo : QSMatchStateBaseInfo
{
    QSMatchStateBasketballTeamInfo *_leftTeam;
    QSMatchStateBasketballTeamInfo *_rightTeam;
}

@property(retain, nonatomic) QSMatchStateBasketballTeamInfo *rightTeam; // @synthesize rightTeam=_rightTeam;
@property(retain, nonatomic) QSMatchStateBasketballTeamInfo *leftTeam; // @synthesize leftTeam=_leftTeam;
- (void).cxx_destruct;
- (_Bool)manualSetValue:(id)arg1 forKey:(id)arg2;

@end

