//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "QSCellView.h"

@class QSAvatarView, UILabel, UIView;

__attribute__((visibility("hidden")))
@interface QSBasketBallGoalsSubCell : QSCellView
{
    UILabel *_titleLable;
    UILabel *_firstScore;
    UILabel *_lastScore;
    UIView *_topSeparator;
    UIView *_middleSeparator;
    QSAvatarView *_lastIcon;
    QSAvatarView *_firstIcon;
    double _leftOffset;
}

@property(nonatomic) double leftOffset; // @synthesize leftOffset=_leftOffset;
@property(retain, nonatomic) QSAvatarView *firstIcon; // @synthesize firstIcon=_firstIcon;
@property(retain, nonatomic) QSAvatarView *lastIcon; // @synthesize lastIcon=_lastIcon;
@property(retain, nonatomic) UIView *middleSeparator; // @synthesize middleSeparator=_middleSeparator;
@property(retain, nonatomic) UIView *topSeparator; // @synthesize topSeparator=_topSeparator;
@property(retain, nonatomic) UILabel *lastScore; // @synthesize lastScore=_lastScore;
@property(retain, nonatomic) UILabel *firstScore; // @synthesize firstScore=_firstScore;
@property(retain, nonatomic) UILabel *titleLable; // @synthesize titleLable=_titleLable;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1 reuseIdentifier:(id)arg2;

@end
