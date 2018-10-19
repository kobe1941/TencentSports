//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "QSHomeAdCell.h"

#import "QNTKVPlayerViewDelegate-Protocol.h"
#import "TADTKVPlayerDelegate-Protocol.h"
#import "TADTKVProgressControlDelegate-Protocol.h"

@class NSString, QSWebImageView, TADCSelectButton, TADTKVPlayerControlView, TADVideoItemInfo, TADVideoStreamViewController, UILabel, UIView;

__attribute__((visibility("hidden")))
@interface QSHomeBannerAdCell : QSHomeAdCell <TADTKVPlayerDelegate, QNTKVPlayerViewDelegate, TADTKVProgressControlDelegate>
{
    _Bool _isExpanded;
    _Bool _isCloseAnimated;
    CDUnknownBlockType _bannerCellGotoLandingView;
    CDUnknownBlockType _bannerCellExpanded;
    TADCSelectButton *_expandButton;
    UIView *_videoBottomView;
    UILabel *_videoDecriptionLabel;
    TADCSelectButton *_landingViewBtn;
    UILabel *_videoCloseLabel;
    QSWebImageView *_playerBgView;
    UIView *_bannerVideoView;
    TADVideoStreamViewController *_tadPlayer;
    TADTKVPlayerControlView *_controlView;
    TADCSelectButton *_playButton;
    TADVideoItemInfo *_videoInfo;
}

+ (id)adIcon;
+ (double)videoHeightWithAdItem:(id)arg1;
+ (double)cellHeightWithAdItem:(id)arg1 expanded:(_Bool)arg2 adCellStyle:(unsigned long long)arg3;
@property(nonatomic) _Bool isCloseAnimated; // @synthesize isCloseAnimated=_isCloseAnimated;
@property(retain, nonatomic) TADVideoItemInfo *videoInfo; // @synthesize videoInfo=_videoInfo;
@property(retain, nonatomic) TADCSelectButton *playButton; // @synthesize playButton=_playButton;
@property(retain, nonatomic) TADTKVPlayerControlView *controlView; // @synthesize controlView=_controlView;
@property(retain, nonatomic) TADVideoStreamViewController *tadPlayer; // @synthesize tadPlayer=_tadPlayer;
@property(retain, nonatomic) UIView *bannerVideoView; // @synthesize bannerVideoView=_bannerVideoView;
@property(retain, nonatomic) QSWebImageView *playerBgView; // @synthesize playerBgView=_playerBgView;
@property(retain, nonatomic) UILabel *videoCloseLabel; // @synthesize videoCloseLabel=_videoCloseLabel;
@property(retain, nonatomic) TADCSelectButton *landingViewBtn; // @synthesize landingViewBtn=_landingViewBtn;
@property(retain, nonatomic) UILabel *videoDecriptionLabel; // @synthesize videoDecriptionLabel=_videoDecriptionLabel;
@property(retain, nonatomic) UIView *videoBottomView; // @synthesize videoBottomView=_videoBottomView;
@property(retain, nonatomic) TADCSelectButton *expandButton; // @synthesize expandButton=_expandButton;
@property(nonatomic) _Bool isExpanded; // @synthesize isExpanded=_isExpanded;
@property(copy) CDUnknownBlockType bannerCellExpanded; // @synthesize bannerCellExpanded=_bannerCellExpanded;
@property(copy) CDUnknownBlockType bannerCellGotoLandingView; // @synthesize bannerCellGotoLandingView=_bannerCellGotoLandingView;
- (void).cxx_destruct;
- (void)playButtonClicked;
- (void)updateProgress:(double)arg1 bufferTime:(double)arg2 duration:(double)arg3;
- (void)playerDidStop;
- (void)progressControlUnMute;
- (void)progressControlMute;
- (void)progressControlProgress:(double)arg1;
- (void)updateToolBar;
- (void)reset;
- (void)pauseAd;
- (void)playAd;
- (void)leavePage;
- (void)gotoLandingView;
- (void)closeLabelClicked;
- (void)expandBtnClicked;
- (void)closeVideoViewAnimated;
- (void)showVideoViewAnimated;
- (_Bool)shouldAutoPlay;
- (void)updateExpandButton:(_Bool)arg1;
- (void)layoutSubviews;
- (void)updateWithVideoInfo:(id)arg1;
- (void)updateWithAdItem:(id)arg1;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
