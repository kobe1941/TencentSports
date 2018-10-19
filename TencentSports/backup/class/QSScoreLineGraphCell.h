//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

@class QSLineGraphView, QSMatchStateScoreTrendInfo, QSMatchStateTeamInfo, UIColor, UILabel, UIView;

__attribute__((visibility("hidden")))
@interface QSScoreLineGraphCell : UITableViewCell
{
    _Bool _showDarkStyle;
    QSMatchStateScoreTrendInfo *_data;
    QSMatchStateTeamInfo *_teamInfo;
    UIColor *_leftColor;
    UIColor *_rightColor;
    QSLineGraphView *_lineGraphView;
    UIView *_homeLine;
    UILabel *_homeLabel;
    UIView *_guestLine;
    UILabel *_guestLabel;
}

+ (double)heightWithModel:(id)arg1;
@property(retain, nonatomic) UILabel *guestLabel; // @synthesize guestLabel=_guestLabel;
@property(retain, nonatomic) UIView *guestLine; // @synthesize guestLine=_guestLine;
@property(retain, nonatomic) UILabel *homeLabel; // @synthesize homeLabel=_homeLabel;
@property(retain, nonatomic) UIView *homeLine; // @synthesize homeLine=_homeLine;
@property(retain, nonatomic) QSLineGraphView *lineGraphView; // @synthesize lineGraphView=_lineGraphView;
@property(retain, nonatomic) UIColor *rightColor; // @synthesize rightColor=_rightColor;
@property(retain, nonatomic) UIColor *leftColor; // @synthesize leftColor=_leftColor;
@property(retain, nonatomic) QSMatchStateTeamInfo *teamInfo; // @synthesize teamInfo=_teamInfo;
@property(retain, nonatomic) QSMatchStateScoreTrendInfo *data; // @synthesize data=_data;
@property(nonatomic) _Bool showDarkStyle; // @synthesize showDarkStyle=_showDarkStyle;
- (void).cxx_destruct;
- (void)update;
- (void)updateWithModel:(id)arg1;
- (void)layoutSubviews;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end
