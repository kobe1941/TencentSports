//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class QSMatchStateScoreTrendInfo, QSMatchStateTeamInfo;

__attribute__((visibility("hidden")))
@interface QSScoreLineGraphCellModel : NSObject
{
    QSMatchStateScoreTrendInfo *_data;
    QSMatchStateTeamInfo *_teamInfo;
}

@property(retain, nonatomic) QSMatchStateTeamInfo *teamInfo; // @synthesize teamInfo=_teamInfo;
@property(retain, nonatomic) QSMatchStateScoreTrendInfo *data; // @synthesize data=_data;
- (void).cxx_destruct;

@end
