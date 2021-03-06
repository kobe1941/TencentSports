//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "QSBaseDataDelegate-Protocol.h"
#import "QSMatchDetailLiveSourceSelectViewDelegate-Protocol.h"

@class NSString, QSMatchDetailInfo, QSMatchDetailLiveSourceSelectView, QSMatchItem, QSNewSupportView, QSWebImageView, UIButton, UIColor, UIImageView, UILabel;

__attribute__((visibility("hidden")))
@interface QSMatchDataHeaderView : UIView <QSBaseDataDelegate, QSMatchDetailLiveSourceSelectViewDelegate>
{
    QSMatchDetailInfo *_detailInfo;
    UIView *_liveSourceShowView;
    QSMatchItem *_matchInfo;
    long long _style;
    UIColor *_textColor;
    QSNewSupportView *_supportView;
    UILabel *_timeLabel;
    UILabel *_quarterLabel;
    UILabel *_quarterTimeLabel;
    UILabel *_vsLabel;
    UIImageView *_liveImageView;
    UIButton *_homeTeamButton;
    UIButton *_guestTeamButton;
    QSWebImageView *_homeTeamImageView;
    QSWebImageView *_guestTeamImageView;
    UILabel *_homeTeamLabel;
    UILabel *_guestTeamLabel;
    UILabel *_homeScoreLabel;
    UILabel *_guestScoreLabel;
    UILabel *_vsScoreLabel;
    UILabel *_nonVSTitleLabel;
    UILabel *_matchDescLabel;
    UIButton *_reminderButton;
    UIButton *_liveSourceButton;
    UIButton *_gotoSourceButton;
    QSMatchDetailLiveSourceSelectView *_sourceSelectView;
}

+ (double)suggestHeightWithDetailInfo:(id)arg1 style:(long long)arg2;
@property(nonatomic) __weak QSMatchDetailLiveSourceSelectView *sourceSelectView; // @synthesize sourceSelectView=_sourceSelectView;
@property(retain, nonatomic) UIButton *gotoSourceButton; // @synthesize gotoSourceButton=_gotoSourceButton;
@property(retain, nonatomic) UIButton *liveSourceButton; // @synthesize liveSourceButton=_liveSourceButton;
@property(retain, nonatomic) UIButton *reminderButton; // @synthesize reminderButton=_reminderButton;
@property(retain, nonatomic) UILabel *matchDescLabel; // @synthesize matchDescLabel=_matchDescLabel;
@property(retain, nonatomic) UILabel *nonVSTitleLabel; // @synthesize nonVSTitleLabel=_nonVSTitleLabel;
@property(retain, nonatomic) UILabel *vsScoreLabel; // @synthesize vsScoreLabel=_vsScoreLabel;
@property(retain, nonatomic) UILabel *guestScoreLabel; // @synthesize guestScoreLabel=_guestScoreLabel;
@property(retain, nonatomic) UILabel *homeScoreLabel; // @synthesize homeScoreLabel=_homeScoreLabel;
@property(retain, nonatomic) UILabel *guestTeamLabel; // @synthesize guestTeamLabel=_guestTeamLabel;
@property(retain, nonatomic) UILabel *homeTeamLabel; // @synthesize homeTeamLabel=_homeTeamLabel;
@property(retain, nonatomic) QSWebImageView *guestTeamImageView; // @synthesize guestTeamImageView=_guestTeamImageView;
@property(retain, nonatomic) QSWebImageView *homeTeamImageView; // @synthesize homeTeamImageView=_homeTeamImageView;
@property(retain, nonatomic) UIButton *guestTeamButton; // @synthesize guestTeamButton=_guestTeamButton;
@property(retain, nonatomic) UIButton *homeTeamButton; // @synthesize homeTeamButton=_homeTeamButton;
@property(retain, nonatomic) UIImageView *liveImageView; // @synthesize liveImageView=_liveImageView;
@property(retain, nonatomic) UILabel *vsLabel; // @synthesize vsLabel=_vsLabel;
@property(retain, nonatomic) UILabel *quarterTimeLabel; // @synthesize quarterTimeLabel=_quarterTimeLabel;
@property(retain, nonatomic) UILabel *quarterLabel; // @synthesize quarterLabel=_quarterLabel;
@property(retain, nonatomic) UILabel *timeLabel; // @synthesize timeLabel=_timeLabel;
@property(retain, nonatomic) QSNewSupportView *supportView; // @synthesize supportView=_supportView;
@property(retain, nonatomic) UIColor *textColor; // @synthesize textColor=_textColor;
@property(nonatomic) long long style; // @synthesize style=_style;
@property(retain, nonatomic) QSMatchItem *matchInfo; // @synthesize matchInfo=_matchInfo;
@property(nonatomic) __weak UIView *liveSourceShowView; // @synthesize liveSourceShowView=_liveSourceShowView;
@property(retain, nonatomic) QSMatchDetailInfo *detailInfo; // @synthesize detailInfo=_detailInfo;
- (void).cxx_destruct;
- (void)dealloc;
- (id)getTimeLabelString;
- (id)getLiveTypeString;
- (void)resetReminderState;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)onMatchDetailLiveSourceSelect:(id)arg1;
- (void)dismissLoadingTextAndJump:(id)arg1;
- (void)onLiveSourceList:(id)arg1;
- (void)onGotoLiveSource:(id)arg1;
- (id)currentScene;
- (void)onRemind:(id)arg1;
- (void)awayPressed:(id)arg1;
- (void)homePressed:(id)arg1;
- (void)reset;
- (void)resetScoreLabelFrameWithLeft:(double)arg1 center:(double)arg2;
- (void)resetForView;
- (void)resetForCell;
- (void)resetRelativeForCell;
- (void)data:(id)arg1 didFinishLoadWithError:(id)arg2;
- (void)dataWillStartLoad:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1 style:(long long)arg2;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

