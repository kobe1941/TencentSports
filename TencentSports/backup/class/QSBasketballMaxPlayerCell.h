//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

@class QSMPMatchDetailBasketballMaxPlayerItem, QSMatchDetailBasketballMaxPlayerItem, QSWebImageViewEx, UIColor, UILabel, UIView;

__attribute__((visibility("hidden")))
@interface QSBasketballMaxPlayerCell : UITableViewCell
{
    UILabel *_text;
    QSWebImageViewEx *_leftImageView;
    QSWebImageViewEx *_rightImageView;
    UILabel *_leftScore;
    UILabel *_leftName;
    UILabel *_rightScore;
    UILabel *_rightName;
    _Bool _showDarkStyle;
    _Bool _handleIconPress;
    _Bool _showAnimated;
    QSMatchDetailBasketballMaxPlayerItem *_item;
    QSMPMatchDetailBasketballMaxPlayerItem *_MPItem;
    UIColor *_leftColor;
    UIColor *_rightColor;
    UIView *_leftScoreBar;
    UIView *_leftScoreSeparator;
    UIView *_rightScoreBar;
    UIView *_rightScoreSeparator;
    unsigned long long _leftScoreNum;
    unsigned long long _rightScoreNum;
}

+ (double)height;
@property(nonatomic) unsigned long long rightScoreNum; // @synthesize rightScoreNum=_rightScoreNum;
@property(nonatomic) unsigned long long leftScoreNum; // @synthesize leftScoreNum=_leftScoreNum;
@property(retain, nonatomic) UIView *rightScoreSeparator; // @synthesize rightScoreSeparator=_rightScoreSeparator;
@property(retain, nonatomic) UIView *rightScoreBar; // @synthesize rightScoreBar=_rightScoreBar;
@property(retain, nonatomic) UIView *leftScoreSeparator; // @synthesize leftScoreSeparator=_leftScoreSeparator;
@property(retain, nonatomic) UIView *leftScoreBar; // @synthesize leftScoreBar=_leftScoreBar;
@property(nonatomic) _Bool showAnimated; // @synthesize showAnimated=_showAnimated;
@property(retain, nonatomic) UIColor *rightColor; // @synthesize rightColor=_rightColor;
@property(retain, nonatomic) UIColor *leftColor; // @synthesize leftColor=_leftColor;
@property(retain, nonatomic) QSMPMatchDetailBasketballMaxPlayerItem *MPItem; // @synthesize MPItem=_MPItem;
@property(retain, nonatomic) QSMatchDetailBasketballMaxPlayerItem *item; // @synthesize item=_item;
@property(nonatomic) _Bool handleIconPress; // @synthesize handleIconPress=_handleIconPress;
@property(nonatomic) _Bool showDarkStyle; // @synthesize showDarkStyle=_showDarkStyle;
- (void).cxx_destruct;
- (void)showDataAnimated:(_Bool)arg1;
- (void)update;
- (void)layoutSubviews;
- (void)rightPressed:(id)arg1;
- (void)leftPressed:(id)arg1;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

