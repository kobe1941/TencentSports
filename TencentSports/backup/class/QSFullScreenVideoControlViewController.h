//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "QSVideoPlayerBaseControlViewController.h"

#import "QSVideoPlayerProgressViewDelegate-Protocol.h"

@class NSString, QSVideoPlayerProgressView, UIButton, UILabel;

__attribute__((visibility("hidden")))
@interface QSFullScreenVideoControlViewController : QSVideoPlayerBaseControlViewController <QSVideoPlayerProgressViewDelegate>
{
    _Bool _statusBarHidden;
    UIButton *_unicomButton;
    UIButton *_backButton;
    UILabel *_titleLabel;
    UIButton *_muteButton;
    UIButton *_playButton;
    UIButton *_pauseButton;
    UIButton *_definitionButton;
    UILabel *_playTimeLabel;
    QSVideoPlayerProgressView *_progressView;
    UILabel *_totalTimeLabel;
}

@property(nonatomic) _Bool statusBarHidden; // @synthesize statusBarHidden=_statusBarHidden;
@property(retain, nonatomic) UILabel *totalTimeLabel; // @synthesize totalTimeLabel=_totalTimeLabel;
@property(retain, nonatomic) QSVideoPlayerProgressView *progressView; // @synthesize progressView=_progressView;
@property(retain, nonatomic) UILabel *playTimeLabel; // @synthesize playTimeLabel=_playTimeLabel;
@property(retain, nonatomic) UIButton *definitionButton; // @synthesize definitionButton=_definitionButton;
@property(retain, nonatomic) UIButton *pauseButton; // @synthesize pauseButton=_pauseButton;
@property(retain, nonatomic) UIButton *playButton; // @synthesize playButton=_playButton;
@property(retain, nonatomic) UIButton *muteButton; // @synthesize muteButton=_muteButton;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UIButton *backButton; // @synthesize backButton=_backButton;
@property(retain, nonatomic) UIButton *unicomButton; // @synthesize unicomButton=_unicomButton;
- (void).cxx_destruct;
- (void)videoPlayerProgressView:(id)arg1 didEndPressPannedAtCursorPositionPoint:(struct CGPoint)arg2 withCursorValue:(double)arg3 inMarkPositionBounds:(_Bool)arg4 withMarkValue:(double)arg5 andMarkPositionPoint:(struct CGPoint)arg6;
- (void)definitionButtonDidTap:(id)arg1;
- (void)pauseButtonDidTap:(id)arg1;
- (void)playButtonDidTap:(id)arg1;
- (void)muteButtonDidTap:(id)arg1;
- (void)backButtonDidTap:(id)arg1;
- (void)unicomButtonDidTap:(id)arg1;
- (void)updateUI;
- (void)removeObserver;
- (void)addObserver;
- (void)setPlayerMuted:(_Bool)arg1;
- (void)setSharedItem:(id)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
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

