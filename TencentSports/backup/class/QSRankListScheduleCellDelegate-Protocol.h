//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class QSRankListScheduleCell;

@protocol QSRankListScheduleCellDelegate <NSObject>
- (void)rankListScheduleCellDidPressRankButton:(QSRankListScheduleCell *)arg1;
- (void)rankListScheduleCellDidPressScheduleButton:(QSRankListScheduleCell *)arg1;
- (_Bool)rankListScheduleCellShouldShowRankButton:(QSRankListScheduleCell *)arg1;
@end

