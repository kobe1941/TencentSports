//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "QLRequestModelDelegate-Protocol.h"
#import "UIScrollViewDelegate-Protocol.h"

@class KKMediaRootViewController, NSMutableArray, NSString, QLActivityLabel, QLCoverRelatedModel, UIButton, UIImage, UIImageView, UILabel, UIPageControl, recommendScrollView;

@interface QLRecommendPannelView : UIView <QLRequestModelDelegate, UIScrollViewDelegate>
{
    _Bool _isShowing;
    _Bool _shouldShowRecommendPannel;
    _Bool _isFullScreenRecommendPannel;
    _Bool _alreadyLayoutBtn;
    KKMediaRootViewController *_mainCtl;
    QLActivityLabel *_loadingView;
    UIView *_bottomBackgroundView;
    UIButton *_jumpButton;
    UIButton *_replayButton;
    UIImageView *_lineView;
    UIImageView *_lineViewAsist;
    UIImage *_lineImage;
    double _lineImageWidth;
    double _lineImageHeight;
    UIImage *_jumpButtonBackground;
    UIImageView *_jumpButtonIcon;
    recommendScrollView *_recommendScrollView;
    UIPageControl *_pageControl;
    QLCoverRelatedModel *_model;
    NSMutableArray *_arayPhotoUrl;
    NSMutableArray *_arayTitle;
    NSMutableArray *_arayVideoID;
    NSMutableArray *_arayRlist;
    NSMutableArray *_arayRlistReportTag;
    NSString *_rType;
    UILabel *_errorText;
}

@property(retain, nonatomic) UILabel *errorText; // @synthesize errorText=_errorText;
@property(nonatomic) NSString *rType; // @synthesize rType=_rType;
@property(retain, nonatomic) NSMutableArray *arayRlistReportTag; // @synthesize arayRlistReportTag=_arayRlistReportTag;
@property(retain, nonatomic) NSMutableArray *arayRlist; // @synthesize arayRlist=_arayRlist;
@property(retain, nonatomic) NSMutableArray *arayVideoID; // @synthesize arayVideoID=_arayVideoID;
@property(retain, nonatomic) NSMutableArray *arayTitle; // @synthesize arayTitle=_arayTitle;
@property(retain, nonatomic) NSMutableArray *arayPhotoUrl; // @synthesize arayPhotoUrl=_arayPhotoUrl;
@property(retain, nonatomic) QLCoverRelatedModel *model; // @synthesize model=_model;
@property(retain, nonatomic) UIPageControl *pageControl; // @synthesize pageControl=_pageControl;
@property(retain, nonatomic) recommendScrollView *recommendScrollView; // @synthesize recommendScrollView=_recommendScrollView;
@property(retain, nonatomic) UIImageView *jumpButtonIcon; // @synthesize jumpButtonIcon=_jumpButtonIcon;
@property(retain, nonatomic) UIImage *jumpButtonBackground; // @synthesize jumpButtonBackground=_jumpButtonBackground;
@property(nonatomic) double lineImageHeight; // @synthesize lineImageHeight=_lineImageHeight;
@property(nonatomic) double lineImageWidth; // @synthesize lineImageWidth=_lineImageWidth;
@property(retain, nonatomic) UIImage *lineImage; // @synthesize lineImage=_lineImage;
@property(retain, nonatomic) UIImageView *lineViewAsist; // @synthesize lineViewAsist=_lineViewAsist;
@property(retain, nonatomic) UIImageView *lineView; // @synthesize lineView=_lineView;
@property(retain, nonatomic) UIButton *replayButton; // @synthesize replayButton=_replayButton;
@property(retain, nonatomic) UIButton *jumpButton; // @synthesize jumpButton=_jumpButton;
@property(retain, nonatomic) UIView *bottomBackgroundView; // @synthesize bottomBackgroundView=_bottomBackgroundView;
@property(retain, nonatomic) QLActivityLabel *loadingView; // @synthesize loadingView=_loadingView;
@property(nonatomic) _Bool alreadyLayoutBtn; // @synthesize alreadyLayoutBtn=_alreadyLayoutBtn;
@property(nonatomic) _Bool isFullScreenRecommendPannel; // @synthesize isFullScreenRecommendPannel=_isFullScreenRecommendPannel;
@property(nonatomic) _Bool shouldShowRecommendPannel; // @synthesize shouldShowRecommendPannel=_shouldShowRecommendPannel;
@property(nonatomic) _Bool isShowing; // @synthesize isShowing=_isShowing;
@property(nonatomic) KKMediaRootViewController *mainCtl; // @synthesize mainCtl=_mainCtl;
- (void)dealloc;
- (id)getSystemVersion;
- (id)getBindingQQ;
- (id)getDeviceID;
- (void)reportShowUp;
- (void)showRecommendPannel:(_Bool)arg1;
- (void)clearArray:(id)arg1;
- (void)requestModel:(id)arg1 didFailedLoadWithError:(id)arg2;
- (void)requestModelDidFinishLoad:(id)arg1;
- (void)loadRelatedModel;
- (void)setButtonLableForRecommendPannel:(id)arg1;
- (void)layoutButtons;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)replay;
- (int)playWithVideoID:(id)arg1 andTitle:(id)arg2;
- (void)methodToRedirectToURL:(id)arg1;
- (void)clickRecommendPlayButton:(id)arg1;
- (void)clickReplayButton:(id)arg1;
- (void)clickJumpButton:(id)arg1;
- (void)flushRecommendPannelInSmallScreenWithFrame:(struct CGRect)arg1;
- (void)flushRecommendPannelInSmallScreen;
- (void)flushRecommendPannelInFullScreenWithFrame:(struct CGRect)arg1;
- (void)flushRecommendPannelInFullScreen;
- (void)flushRecommendPannelWithFrame:(struct CGRect)arg1 isFullScreen:(_Bool)arg2;
- (void)flushRecommendPannel;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

