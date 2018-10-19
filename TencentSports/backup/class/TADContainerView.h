//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "NSURLConnectionDataDelegate-Protocol.h"
#import "NSURLConnectionDelegate-Protocol.h"
#import "RichViewDelegate-Protocol.h"
#import "TADLandingViewControllerDelegate-Protocol.h"
#import "TADMediaConnectionDelegate-Protocol.h"
#import "UIGestureRecognizerDelegate-Protocol.h"

@class NSMutableData, NSString, NSURLConnection, TADBlurImageView, TADBlurView, TADIconLabel, TADLandingControlManager, TADLandingViewController, TADMediaConnection, TADMediaItem, TADMediaLog, TADQLFileLoader, TADReportDP3, TADReportMediaItemList, TADReportSingleMediaItem, TADRichView, TADVisualEffectView, UIButton, UIImageView, UILabel, UINavigationController, UIViewController;
@protocol TADContainerViewDelegate;

@interface TADContainerView : UIView <TADMediaConnectionDelegate, NSURLConnectionDelegate, NSURLConnectionDataDelegate, TADLandingViewControllerDelegate, UIGestureRecognizerDelegate, RichViewDelegate>
{
    _Bool _requestInProgress;
    _Bool _landingViewBeingPresented;
    _Bool _isVideoPaused;
    id <TADContainerViewDelegate> _delegate;
    UIViewController *_clientViewController;
    UINavigationController *_clientNavigationController;
    double _timeoutInterval;
    TADMediaConnection *_adConnection;
    NSURLConnection *_imageConnection;
    TADQLFileLoader *_imageLoader;
    TADMediaItem *_currentMediaItem;
    NSMutableData *_imageData;
    UIImageView *_imageView;
    UIButton *_closeButton;
    UILabel *_adLabel;
    TADIconLabel *_downloadLabel;
    TADLandingViewController *_landingViewController;
    TADLandingControlManager *_landingControlManager;
    TADRichView *_richAdView;
    TADBlurView *_blurView;
    TADBlurImageView *_blurImageView;
    TADVisualEffectView *_blurEffectView;
    TADReportDP3 *_dp3Reporter;
    TADMediaLog *_mediaLog;
    TADReportSingleMediaItem *_mediaViewStat;
    TADReportMediaItemList *_mediaItemListReport;
    double _timeOfImageStartToLoad;
    double _timeOfLandingViewLastOpened;
    double _durationOfLandingViewPresented;
    double _timeOfLandingViewStartLoad;
    double _durationOfLandingViewLoading;
}

@property(nonatomic) double durationOfLandingViewLoading; // @synthesize durationOfLandingViewLoading=_durationOfLandingViewLoading;
@property(nonatomic) double timeOfLandingViewStartLoad; // @synthesize timeOfLandingViewStartLoad=_timeOfLandingViewStartLoad;
@property(nonatomic) double durationOfLandingViewPresented; // @synthesize durationOfLandingViewPresented=_durationOfLandingViewPresented;
@property(nonatomic) double timeOfLandingViewLastOpened; // @synthesize timeOfLandingViewLastOpened=_timeOfLandingViewLastOpened;
@property(nonatomic) double timeOfImageStartToLoad; // @synthesize timeOfImageStartToLoad=_timeOfImageStartToLoad;
@property(retain, nonatomic) TADReportMediaItemList *mediaItemListReport; // @synthesize mediaItemListReport=_mediaItemListReport;
@property(retain, nonatomic) TADReportSingleMediaItem *mediaViewStat; // @synthesize mediaViewStat=_mediaViewStat;
@property(retain, nonatomic) TADMediaLog *mediaLog; // @synthesize mediaLog=_mediaLog;
@property(retain, nonatomic) TADReportDP3 *dp3Reporter; // @synthesize dp3Reporter=_dp3Reporter;
@property(retain, nonatomic) TADVisualEffectView *blurEffectView; // @synthesize blurEffectView=_blurEffectView;
@property(retain, nonatomic) TADBlurImageView *blurImageView; // @synthesize blurImageView=_blurImageView;
@property(retain, nonatomic) TADBlurView *blurView; // @synthesize blurView=_blurView;
@property(nonatomic) _Bool isVideoPaused; // @synthesize isVideoPaused=_isVideoPaused;
@property(retain, nonatomic) TADRichView *richAdView; // @synthesize richAdView=_richAdView;
@property(nonatomic) _Bool landingViewBeingPresented; // @synthesize landingViewBeingPresented=_landingViewBeingPresented;
@property(retain, nonatomic) TADLandingControlManager *landingControlManager; // @synthesize landingControlManager=_landingControlManager;
@property(retain, nonatomic) TADLandingViewController *landingViewController; // @synthesize landingViewController=_landingViewController;
@property(retain, nonatomic) TADIconLabel *downloadLabel; // @synthesize downloadLabel=_downloadLabel;
@property(retain, nonatomic) UILabel *adLabel; // @synthesize adLabel=_adLabel;
@property(retain, nonatomic) UIButton *closeButton; // @synthesize closeButton=_closeButton;
@property(retain, nonatomic) UIImageView *imageView; // @synthesize imageView=_imageView;
@property(retain, nonatomic) NSMutableData *imageData; // @synthesize imageData=_imageData;
@property(retain, nonatomic) TADMediaItem *currentMediaItem; // @synthesize currentMediaItem=_currentMediaItem;
@property(retain, nonatomic) TADQLFileLoader *imageLoader; // @synthesize imageLoader=_imageLoader;
@property(retain, nonatomic) NSURLConnection *imageConnection; // @synthesize imageConnection=_imageConnection;
@property(retain, nonatomic) TADMediaConnection *adConnection; // @synthesize adConnection=_adConnection;
@property(nonatomic) double timeoutInterval; // @synthesize timeoutInterval=_timeoutInterval;
@property _Bool requestInProgress; // @synthesize requestInProgress=_requestInProgress;
@property(retain, nonatomic) UINavigationController *clientNavigationController; // @synthesize clientNavigationController=_clientNavigationController;
@property(retain, nonatomic) UIViewController *clientViewController; // @synthesize clientViewController=_clientViewController;
@property(nonatomic) __weak id <TADContainerViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (_Bool)parseRequest:(id)arg1 withWebView:(id)arg2;
- (void)MASTAdView:(id)arg1 mainAdSetObjectViewable:(id)arg2;
- (void)MASTAdView:(id)arg1 mainAdGetUrlsForVids:(id)arg2;
- (void)MASTAdView:(id)arg1 mainAdGetParams:(id)arg2;
- (void)MASTAdView:(id)arg1 mainAdViewMore:(id)arg2;
- (void)MASTAdViewMainAdRemoveRichAd:(id)arg1;
- (void)MASTAdViewResumeMainVideo:(id)arg1;
- (void)MASTAdViewPauseMainVideo:(id)arg1;
- (void)MASTAdViewStageReady:(id)arg1;
- (void)MASTAdViewWillExpandView:(id)arg1 size:(struct CGSize)arg2;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)imageViewTapped:(id)arg1;
- (void)setBlurViewAutoLayout:(id)arg1;
- (void)attachBlur;
- (void)setBlurSnapshot:(id)arg1;
- (_Bool)needsBlurSnapshot;
- (_Bool)needsBlur;
- (void)detachRichAdView;
- (void)attachRichAdView;
- (_Bool)needsRichAdView;
- (void)invokeDelegateBlock:(CDUnknownBlockType)arg1;
- (void)connetionDidFailedWithError:(id)arg1;
- (void)connetionDidReceiveMedias:(id)arg1;
- (void)connection:(id)arg1 didFailWithError:(id)arg2;
- (void)connectionDidFinishLoading:(id)arg1;
- (void)connection:(id)arg1 didReceiveData:(id)arg2;
- (void)connection:(id)arg1 didReceiveResponse:(id)arg2;
- (id)connection:(id)arg1 willSendRequest:(id)arg2 redirectResponse:(id)arg3;
- (void)onImageLoaded:(id)arg1;
- (void)downloadImageFailed;
- (void)downloadImageFinished:(id)arg1;
- (void)loadImageAd:(id)arg1;
- (void)showDownloadLabel;
- (void)showAdLabel;
- (double)calculateLabelTextWidth:(id)arg1;
- (void)showCloseButton;
- (void)addCloseButton;
- (void)renderImage:(id)arg1;
- (void)renderRichAd:(id)arg1;
- (void)adLandingViewMindLinkClicked:(long long)arg1;
- (void)adLandingViewRefreshUrl:(id)arg1;
- (void)adLandingViewDidFinishLoadingUrl:(id)arg1;
- (void)adLandingViewStartLoadingUrl:(id)arg1;
- (void)adLandingViewDidFinishLoad;
- (void)adLandingViewDidStartLoad;
- (void)adLandingViewDidDismiss;
- (void)adLandingViewWillDismiss;
- (void)adLandingViewDidAppear;
- (void)closeADLandingViewController:(_Bool)arg1;
- (void)closeADLandingViewController;
- (void)resizeLandingViewController;
- (void)animationDidStop:(id)arg1 finished:(_Bool)arg2;
- (void)animationDidStart:(id)arg1;
- (void)removeLandingViewController;
- (void)addLandingViewController;
- (void)presentLandingViewController;
- (_Bool)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (id)clickURLString;
- (void)openLandingViewController:(id)arg1;
- (void)openLandingPageWithURL:(id)arg1;
- (void)containerViewTapped:(id)arg1;
- (void)closeButtonPressed;
- (void)performAdTracking;
- (void)resetRequest;
- (void)requestTimeout;
- (void)requestFailedWithError:(id)arg1;
- (void)requestFinished;
- (void)cancelRequest;
- (void)requestWithVideoInfo:(id)arg1 userInfo:(id)arg2 timeoutInterval:(double)arg3;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)didMoveToSuperview;
- (_Bool)pointInside:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)clearAdOnVideoPlayed;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

