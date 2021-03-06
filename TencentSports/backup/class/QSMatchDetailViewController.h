//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "QSTopRootController.h"

#import "QSMatchDetailContentViewControllerProtocol-Protocol.h"
#import "QSProjectionEntranceProtocol-Protocol.h"
#import "QSPushViewControllerProtocol-Protocol.h"

@class NSDictionary, NSString, NSTimer, QSMatchDetailDataPool, QSMatchDetailInfo, QSMatchDetailLiveTypeChangeView, QSWebGifImageView, QSWebImageViewEx, UIButton, UIViewController;
@protocol QSMatchDetailRootViewControllerProtocol;

__attribute__((visibility("hidden")))
@interface QSMatchDetailViewController : QSTopRootController <QSProjectionEntranceProtocol, QSPushViewControllerProtocol, QSMatchDetailContentViewControllerProtocol>
{
    _Bool _isInMatch;
    _Bool _showLight;
    _Bool _visable;
    _Bool _userDidCloseAd;
    NSString *_mid;
    NSString *_cid;
    NSString *_vid;
    NSString *_liveId;
    long long _defaultTab;
    long long _commandEvent;
    NSString *_suggestLiveId;
    long long _suggestLiveIdType;
    UIButton *_backBtn;
    QSMatchDetailInfo *_matchDetailInfo;
    QSMatchDetailDataPool *_dataPool;
    NSDictionary *_attendInfo;
    NSTimer *_liveTypeChangeTimer;
    QSMatchDetailLiveTypeChangeView *_changeView;
    QSWebImageViewEx *_adIcon;
    QSWebGifImageView *_adGifIcon;
    UIButton *_adCloseBtn;
}

+ (id)allViewControllerType;
@property(nonatomic) _Bool userDidCloseAd; // @synthesize userDidCloseAd=_userDidCloseAd;
@property(retain, nonatomic) UIButton *adCloseBtn; // @synthesize adCloseBtn=_adCloseBtn;
@property(retain, nonatomic) QSWebGifImageView *adGifIcon; // @synthesize adGifIcon=_adGifIcon;
@property(retain, nonatomic) QSWebImageViewEx *adIcon; // @synthesize adIcon=_adIcon;
@property(nonatomic) _Bool visable; // @synthesize visable=_visable;
@property(nonatomic) _Bool showLight; // @synthesize showLight=_showLight;
@property(nonatomic) _Bool isInMatch; // @synthesize isInMatch=_isInMatch;
@property(retain, nonatomic) QSMatchDetailLiveTypeChangeView *changeView; // @synthesize changeView=_changeView;
@property(retain, nonatomic) NSTimer *liveTypeChangeTimer; // @synthesize liveTypeChangeTimer=_liveTypeChangeTimer;
@property(retain, nonatomic) NSDictionary *attendInfo; // @synthesize attendInfo=_attendInfo;
@property(retain, nonatomic) QSMatchDetailDataPool *dataPool; // @synthesize dataPool=_dataPool;
@property(retain, nonatomic) QSMatchDetailInfo *matchDetailInfo; // @synthesize matchDetailInfo=_matchDetailInfo;
@property(retain, nonatomic) UIButton *backBtn; // @synthesize backBtn=_backBtn;
@property(nonatomic) long long suggestLiveIdType; // @synthesize suggestLiveIdType=_suggestLiveIdType;
@property(retain, nonatomic) NSString *suggestLiveId; // @synthesize suggestLiveId=_suggestLiveId;
@property(nonatomic) long long commandEvent; // @synthesize commandEvent=_commandEvent;
@property(nonatomic) long long defaultTab; // @synthesize defaultTab=_defaultTab;
@property(copy, nonatomic) NSString *liveId; // @synthesize liveId=_liveId;
@property(copy, nonatomic) NSString *vid; // @synthesize vid=_vid;
@property(copy, nonatomic) NSString *cid; // @synthesize cid=_cid;
@property(copy, nonatomic) NSString *mid; // @synthesize mid=_mid;
- (void).cxx_destruct;
- (void)liveTypeChangeTimerFired:(id)arg1;
- (void)dataPool:(id)arg1 dataDidUpdateFailedWithError:(id)arg2 withType:(long long)arg3;
- (void)dataPool:(id)arg1 dataDidUpdateWithType:(long long)arg2;
- (void)adTapped:(id)arg1;
- (void)removeAd;
- (void)adCloseBtnClicked:(id)arg1;
- (void)matchDetailInfoDidUpdate;
- (void)shouldReloadSinceErrorPressed;
- (void)setFocusedProperties:(id)arg1;
@property(retain, nonatomic) UIViewController<QSMatchDetailRootViewControllerProtocol> *rootViewController; // @dynamic rootViewController;
- (void)setTopViewController:(id)arg1;
- (void)updateCurrentContent;
- (void)changeToMatchWithMid:(id)arg1;
- (void)hideContentView;
- (void)showContentView;
- (_Bool)isEmpty;
- (void)realBack:(id)arg1;
- (void)handleBackPress:(id)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)dealloc;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (_Bool)needsHideProjectionEntrance;
- (id)initWithParameters:(id)arg1;
- (id)currentParameters;
- (long long)preferredStatusBarStyle;
- (_Bool)prefersStatusBarHidden;
- (id)childViewControllerForStatusBarStyle;
- (id)childViewControllerForStatusBarHidden;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

