//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "QLMovieBaseControlView.h"

@class HVMPFavoritebutton, QLPlayerSliderView, UIButton, UILabel, UIView;

@interface QLHotspotMovieControlView2 : QLMovieBaseControlView
{
    QLPlayerSliderView *_sliderView;
    UIView *_bottomView;
    UILabel *_lblLeftTime;
    UILabel *_lblRightTime;
    UIButton *_btnPlay;
    _Bool _isPlaying;
    _Bool _isCommingLiveModel;
    _Bool _isFavorite;
    HVMPFavoritebutton *_btnFavorite;
    UIButton *_btnFullscreen;
    UIButton *_btnDownload;
    double _jumpEndTime;
}

@property double jumpEndTime; // @synthesize jumpEndTime=_jumpEndTime;
@property(readonly, retain, nonatomic) UIButton *btnDownload; // @synthesize btnDownload=_btnDownload;
@property(readonly, retain, nonatomic) UIButton *btnFullscreen; // @synthesize btnFullscreen=_btnFullscreen;
@property(readonly, retain, nonatomic) HVMPFavoritebutton *btnFavorite; // @synthesize btnFavorite=_btnFavorite;
@property(readonly) _Bool isFavorite; // @synthesize isFavorite=_isFavorite;
@property _Bool isPlaying; // @synthesize isPlaying=_isPlaying;
- (double)screenWidth;
- (void)pushUnicomDetailViewController:(id)arg1;
- (void)showUnicomTips;
- (void)stopHotspotPlay;
- (void)startHotspotPlay;
@property _Bool isCommingLiveModel; // @synthesize isCommingLiveModel=_isCommingLiveModel;
- (void)didSingleTap:(id)arg1;
- (void)disableGesture;
- (void)enableGesture;
- (void)setPanGesture;
- (void)hideAllControlViews;
- (void)showAllControlViews;
- (void)layoutSubviews;
- (void)circleEnd;
- (void)circleMinus:(double)arg1;
- (void)circlePlus:(double)arg1;
- (void)circleBegin:(_Bool)arg1;
- (void)controlEnableState:(_Bool)arg1 withMask:(long long)arg2;
- (void)changePlayButtonImageAndStatus:(_Bool)arg1;
- (void)controlMoviePlayStatusWithUser:(_Bool)arg1;
- (void)controlShowPrompt:(_Bool)arg1 withModifyPlayButton:(_Bool)arg2;
- (void)modifyPlayButtonToPause;
- (void)modifyPlayButtonToPLay;
- (void)performPlayAction;
- (void)setControlsEnabled:(_Bool)arg1;
- (void)showPreloading:(_Bool)arg1 tips:(id)arg2;
- (_Bool)cachingPromptEnabled;
- (void)playerLoadstateChanged:(long long)arg1 videoType:(long long)arg2 firstPlay:(_Bool)arg3;
- (void)flushPlayerProgress;
- (void)setJumpEndTimeLength:(double)arg1;
- (void)playBtnClicked:(id)arg1;
- (void)editFavorite:(id)arg1;
- (void)downloadClicked:(id)arg1;
- (void)fullscreenClicked:(id)arg1;
- (void)backClicked:(id)arg1;
- (void)flushInterfaceWithMainCtl:(id)arg1 withLastCtl:(id)arg2;
- (id)createBtnImgName:(id)arg1 edge:(struct CGSize)arg2;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)pageDescription;
- (id)sliderView;
- (void)clearResources;
- (void)dealloc;

@end

