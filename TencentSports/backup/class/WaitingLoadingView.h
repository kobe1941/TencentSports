//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "NetworkCheckerDelegate-Protocol.h"

@class KKMediaRootViewController, NSArray, NSDate, NSString, NSTimer, QLActivityLabel, QLSImageView, UIImageView;

@interface WaitingLoadingView : UIView <NetworkCheckerDelegate>
{
    unsigned long long lastMesureBytes;
    float currentMesureSpeed;
    _Bool _isFirstLoad;
    UIImageView *_imgViewLogo;
    _Bool _isCachingPrompt;
    _Bool _isShow;
    _Bool _shouldShowLoadingTip;
    _Bool _startedPlay;
    int _displayModel;
    QLActivityLabel *_loadingView;
    QLSImageView *_imageview;
    NSDate *_lastMesureDate;
    NSTimer *checkInterfaceResTimer;
    long long slowSpeedNums;
    NSString *_loadingBGImgURL;
    KKMediaRootViewController *_mainCtrl;
    NSArray *_aryMiniAnimationImages;
    NSArray *_aryAnimationImages;
    NSString *_displayingTips;
}

@property(copy) NSString *displayingTips; // @synthesize displayingTips=_displayingTips;
@property int displayModel; // @synthesize displayModel=_displayModel;
@property _Bool startedPlay; // @synthesize startedPlay=_startedPlay;
@property(readonly) NSArray *aryAnimationImages; // @synthesize aryAnimationImages=_aryAnimationImages;
@property(readonly) NSArray *aryMiniAnimationImages; // @synthesize aryMiniAnimationImages=_aryMiniAnimationImages;
@property(nonatomic) KKMediaRootViewController *mainCtrl; // @synthesize mainCtrl=_mainCtrl;
@property _Bool shouldShowLoadingTip; // @synthesize shouldShowLoadingTip=_shouldShowLoadingTip;
@property(nonatomic) long long slowSpeedNums; // @synthesize slowSpeedNums;
@property(retain, nonatomic) NSTimer *checkInterfaceResTimer; // @synthesize checkInterfaceResTimer;
@property(retain, nonatomic) NSDate *lastMesureDate; // @synthesize lastMesureDate=_lastMesureDate;
@property(retain, nonatomic) QLSImageView *imageview; // @synthesize imageview=_imageview;
@property(retain, nonatomic) QLActivityLabel *loadingView; // @synthesize loadingView=_loadingView;
- (_Bool)isShowing;
- (void)networkCheckerUpdateFinish;
@property(retain, nonatomic) NSString *loadingBGImgURL; // @synthesize loadingBGImgURL=_loadingBGImgURL;
- (void)setModel:(int)arg1;
- (void)refreshLoadingModel;
- (void)layoutSubviews;
- (void)showSpeed:(_Bool)arg1;
- (void)updateSpeed;
- (void)clearBackgroundImageView;
- (void)changePromptText:(id)arg1 firstLoad:(_Bool)arg2 cachingPrompt:(_Bool)arg3;
- (void)checkSpeed;
- (void)resetTextAndImage:(_Bool)arg1 withImageIsHide:(_Bool)arg2;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)clearResources;
- (void)cancelNetworkMonitor;
- (void)hideSelf:(_Bool)arg1;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

