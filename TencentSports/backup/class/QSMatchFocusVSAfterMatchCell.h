//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "QSMatchFocusVSPreMatchCell.h"

@class UILabel;

__attribute__((visibility("hidden")))
@interface QSMatchFocusVSAfterMatchCell : QSMatchFocusVSPreMatchCell
{
    UILabel *_leftGoalLabel;
    UILabel *_rightGoalLabel;
}

@property(retain, nonatomic) UILabel *rightGoalLabel; // @synthesize rightGoalLabel=_rightGoalLabel;
@property(retain, nonatomic) UILabel *leftGoalLabel; // @synthesize leftGoalLabel=_leftGoalLabel;
- (void).cxx_destruct;
- (void)updateWithInfo:(id)arg1;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

