//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "QSScheduleCell.h"

@class UIImageView, UILabel;

__attribute__((visibility("hidden")))
@interface QSScheduleNonVSMatchCell : QSScheduleCell
{
    UILabel *_matchTypeLabel;
    UILabel *_matchDescLabel;
    UILabel *_matchStatusLabel;
    UIImageView *_liveTypeIconView;
}

@property(retain, nonatomic) UIImageView *liveTypeIconView; // @synthesize liveTypeIconView=_liveTypeIconView;
@property(retain, nonatomic) UILabel *matchStatusLabel; // @synthesize matchStatusLabel=_matchStatusLabel;
@property(retain, nonatomic) UILabel *matchDescLabel; // @synthesize matchDescLabel=_matchDescLabel;
@property(retain, nonatomic) UILabel *matchTypeLabel; // @synthesize matchTypeLabel=_matchTypeLabel;
- (void).cxx_destruct;
- (void)updateWithInfo:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end
