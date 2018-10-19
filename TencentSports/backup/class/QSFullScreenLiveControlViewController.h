//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "QSVideoPlayerBaseControlViewController.h"

#import "QSBaseDataDelegate-Protocol.h"
#import "QSBusEventConsumerDelegate-Protocol.h"
#import "QSShareKitDelegate-Protocol.h"
#import "QSVideoPlayerProgressViewDelegate-Protocol.h"

@class NSString, QSAvatarView, QSMPSeeBackPreviewData, QSMPSeeBackPreviewView, QSVideoPlayerProgressView, UIButton, UIImageView, UILabel;

__attribute__((visibility("hidden")))
@interface QSFullScreenLiveControlViewController : QSVideoPlayerBaseControlViewController <QSBusEventConsumerDelegate, QSVideoPlayerProgressViewDelegate, QSBaseDataDelegate, QSShareKitDelegate>
{
    _Bool _isGettingSeeBackPreviewData;
    _Bool _statusBarHidden;
    UIButton *_backButton;
    UIImageView *_liveImageView;
    UIImageView *_dotImageView;
    UILabel *_titleLabel;
    UIImageView *_vipImageView;
    UIButton *_matchListButton;
    UIButton *_matchListTapButton;
    UIImageView *_arrowImageView;
    UIButton *_unicomButton;
    UIButton *_projectionButton;
    UIButton *_shareButton;
    UIButton *_engButton;
    UIButton *_playButton;
    UIButton *_pauseButton;
    UILabel *_playTimeLabel;
    QSVideoPlayerProgressView *_progressView;
    UILabel *_totalTimeLabel;
    UIButton *_tipBgButton;
    UILabel *_tipLabel;
    QSAvatarView *_avatarView;
    UIButton *_definitionButton;
    UIButton *_viewAngleButton;
    UIImageView *_vrImageView;
    QSMPSeeBackPreviewView *_seeBackPreviewView;
    UIButton *_restoreLiveButton;
    QSMPSeeBackPreviewData *_seeBackPreviewData;
    UIButton *_propsListButton;
    UIButton *_barrageButton;
    UIButton *_matchDataButton;
    UIImageView *_matchDataNewIcon;
    UIButton *_inputButton;
}

@property(nonatomic) _Bool statusBarHidden; // @synthesize statusBarHidden=_statusBarHidden;
@property(retain, nonatomic) UIButton *inputButton; // @synthesize inputButton=_inputButton;
@property(retain, nonatomic) UIImageView *matchDataNewIcon; // @synthesize matchDataNewIcon=_matchDataNewIcon;
@property(retain, nonatomic) UIButton *matchDataButton; // @synthesize matchDataButton=_matchDataButton;
@property(retain, nonatomic) UIButton *barrageButton; // @synthesize barrageButton=_barrageButton;
@property(retain, nonatomic) UIButton *propsListButton; // @synthesize propsListButton=_propsListButton;
@property(nonatomic) _Bool isGettingSeeBackPreviewData; // @synthesize isGettingSeeBackPreviewData=_isGettingSeeBackPreviewData;
@property(retain, nonatomic) QSMPSeeBackPreviewData *seeBackPreviewData; // @synthesize seeBackPreviewData=_seeBackPreviewData;
@property(retain, nonatomic) UIButton *restoreLiveButton; // @synthesize restoreLiveButton=_restoreLiveButton;
@property(retain, nonatomic) QSMPSeeBackPreviewView *seeBackPreviewView; // @synthesize seeBackPreviewView=_seeBackPreviewView;
@property(retain, nonatomic) UIImageView *vrImageView; // @synthesize vrImageView=_vrImageView;
@property(retain, nonatomic) UIButton *viewAngleButton; // @synthesize viewAngleButton=_viewAngleButton;
@property(retain, nonatomic) UIButton *definitionButton; // @synthesize definitionButton=_definitionButton;
@property(retain, nonatomic) QSAvatarView *avatarView; // @synthesize avatarView=_avatarView;
@property(retain, nonatomic) UILabel *tipLabel; // @synthesize tipLabel=_tipLabel;
@property(retain, nonatomic) UIButton *tipBgButton; // @synthesize tipBgButton=_tipBgButton;
@property(retain, nonatomic) UILabel *totalTimeLabel; // @synthesize totalTimeLabel=_totalTimeLabel;
@property(retain, nonatomic) QSVideoPlayerProgressView *progressView; // @synthesize progressView=_progressView;
@property(retain, nonatomic) UILabel *playTimeLabel; // @synthesize playTimeLabel=_playTimeLabel;
@property(retain, nonatomic) UIButton *pauseButton; // @synthesize pauseButton=_pauseButton;
@property(retain, nonatomic) UIButton *playButton; // @synthesize playButton=_playButton;
@property(retain, nonatomic) UIButton *engButton; // @synthesize engButton=_engButton;
@property(retain, nonatomic) UIButton *shareButton; // @synthesize shareButton=_shareButton;
@property(retain, nonatomic) UIButton *projectionButton; // @synthesize projectionButton=_projectionButton;
@property(retain, nonatomic) UIButton *unicomButton; // @synthesize unicomButton=_unicomButton;
@property(retain, nonatomic) UIImageView *arrowImageView; // @synthesize arrowImageView=_arrowImageView;
@property(retain, nonatomic) UIButton *matchListTapButton; // @synthesize matchListTapButton=_matchListTapButton;
@property(retain, nonatomic) UIButton *matchListButton; // @synthesize matchListButton=_matchListButton;
@property(retain, nonatomic) UIImageView *vipImageView; // @synthesize vipImageView=_vipImageView;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UIImageView *dotImageView; // @synthesize dotImageView=_dotImageView;
@property(retain, nonatomic) UIImageView *liveImageView; // @synthesize liveImageView=_liveImageView;
@property(retain, nonatomic) UIButton *backButton; // @synthesize backButton=_backButton;
- (void).cxx_destruct;
- (void)postBarrageButtonDidTap:(id)arg1;
- (void)propsListButtonDidTap:(id)arg1;
- (void)barrageButtonDidTap:(id)arg1;
- (void)matchDataButtonDidTap:(id)arg1;
- (void)matchListButtonDidTap:(id)arg1;
- (void)restoreLiveButtonDidTap:(id)arg1;
- (void)viewAngleButtonDidTap:(id)arg1;
- (void)definitionButtonDidTap:(id)arg1;
- (void)tipBgButtonDidTap:(id)arg1;
- (void)avatarViewDidTap:(id)arg1;
- (void)pauseButtonDidTap:(id)arg1;
- (void)playButtonDidTap:(id)arg1;
- (void)engButtonDidTap:(id)arg1;
- (void)shareButtonDidTap:(id)arg1;
- (id)infoWillBeReportedToBoss;
- (id)infoWillBeShared;
- (void)projectionButtonDidTap:(id)arg1;
- (void)unicomButtonDidTap:(id)arg1;
- (void)backButtonDidTap:(id)arg1;
- (void)data:(id)arg1 didFinishLoadWithError:(id)arg2;
- (void)dataWillStartLoad:(id)arg1;
- (void)restoreToLiveFromSeeBack;
- (void)changeToSeeBackWithSeekTime:(long long)arg1;
- (void)videoPlayerProgressView:(id)arg1 didEndPressPannedAtCursorPositionPoint:(struct CGPoint)arg2 withCursorValue:(double)arg3 inMarkPositionBounds:(_Bool)arg4 withMarkValue:(double)arg5 andMarkPositionPoint:(struct CGPoint)arg6;
- (void)videoPlayerProgressView:(id)arg1 didPressPannedLeaveMarkPositionBoundsAtCursorPositionPoint:(struct CGPoint)arg2 withMarkValue:(double)arg3 andMarkPositionPoint:(struct CGPoint)arg4;
- (void)videoPlayerProgressView:(id)arg1 didPressPannedEnterMarkPositionBoundsAtCursorPositionPoint:(struct CGPoint)arg2 withMarkValue:(double)arg3 andMarkPositionPoint:(struct CGPoint)arg4;
- (void)videoPlayerProgressView:(id)arg1 didBeginPressPannedAtCursorPositionPoint:(struct CGPoint)arg2 withCursorValue:(double)arg3 inMarkPositionBounds:(_Bool)arg4 withMarkValue:(double)arg5 andMarkPositionPoint:(struct CGPoint)arg6;
- (void)videoPlayerProgressView:(id)arg1 isPressPanningwithChangingCursorValue:(double)arg2 AtCursorPositionPoint:(struct CGPoint)arg3;
- (void)videoPlayerProgressView:(id)arg1 didTappedAtPoint:(struct CGPoint)arg2 withCursorValue:(double)arg3;
- (void)updateInputButton:(_Bool)arg1;
- (void)updateUI;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)removeObserver;
- (void)addObserver;
- (void)didConsumeEventFromBus:(id)arg1;
- (void)setMediaPlayerBusSystem:(id)arg1;
- (void)setSharedItem:(id)arg1;
- (void)makeSeeBackRequestWithLiveId:(id)arg1 seeBackTime:(double)arg2;
- (void)dealloc;
- (void)didReceiveMemoryWarning;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)viewWillLayoutSubviews;
- (void)controlUIDidDismiss;
- (void)controlUIWillDismiss;
- (void)controlUIWillShow;
- (void)hideControlUI;
- (void)showControlUI;
- (_Bool)isSmallScreen;
- (long long)preferredStatusBarUpdateAnimation;
- (long long)preferredStatusBarStyle;
- (_Bool)prefersStatusBarHidden;
- (_Bool)prefersHomeIndicatorAutoHidden;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
