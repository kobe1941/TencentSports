//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "QSWindowController.h"

#import "QSBusEventConsumerDelegate-Protocol.h"
#import "QSObservedObjectDelegate-Protocol.h"

@class NSDictionary, NSIndexPath, NSString, QSBusSystem, QSFullScreenMediaPlayerViewController, QSMPSharedItem, QSSourceMediaItem, QSVIPInfo, UIButton, UIViewController;
@protocol QSMediaPlayerRootViewControllerDelegate, QSMediaPlayerViewControllerDelegate;

__attribute__((visibility("hidden")))
@interface QSMediaPlayerViewController : QSWindowController <QSBusEventConsumerDelegate, QSObservedObjectDelegate>
{
    _Bool _isFullScreenDirectly;
    _Bool _hideAd;
    _Bool _autoPlayWhenSettingMediaItem;
    _Bool _canPlayBackground;
    _Bool _viewAppearDoNothing;
    _Bool _needSyncProgress;
    _Bool _forbiddenRotate;
    _Bool _isReturnFromFullScreen;
    _Bool _isNotFirstIn;
    _Bool _needsResetMediaPlayer;
    QSSourceMediaItem *_sourceMediaItem;
    NSString *_chatRoomId;
    long long _muteType;
    NSString *_scene;
    NSDictionary *_reportInfo;
    id <QSMediaPlayerViewControllerDelegate> _delegate;
    QSBusSystem *_mediaPlayerBusSystem;
    long long _playerState;
    CDUnknownBlockType _finishBlock;
    QSFullScreenMediaPlayerViewController *_fullScreenViewController;
    QSMPSharedItem *_sharedItem;
    UIButton *_lockButton;
    QSVIPInfo *_lastVipInfo;
}

@property(copy, nonatomic) QSVIPInfo *lastVipInfo; // @synthesize lastVipInfo=_lastVipInfo;
@property(nonatomic) _Bool needsResetMediaPlayer; // @synthesize needsResetMediaPlayer=_needsResetMediaPlayer;
@property(retain, nonatomic) UIButton *lockButton; // @synthesize lockButton=_lockButton;
@property(nonatomic) _Bool isNotFirstIn; // @synthesize isNotFirstIn=_isNotFirstIn;
@property(nonatomic) _Bool isReturnFromFullScreen; // @synthesize isReturnFromFullScreen=_isReturnFromFullScreen;
@property(nonatomic) _Bool forbiddenRotate; // @synthesize forbiddenRotate=_forbiddenRotate;
@property(retain, nonatomic) QSMPSharedItem *sharedItem; // @synthesize sharedItem=_sharedItem;
@property(retain, nonatomic) QSFullScreenMediaPlayerViewController *fullScreenViewController; // @synthesize fullScreenViewController=_fullScreenViewController;
@property(copy, nonatomic) CDUnknownBlockType finishBlock; // @synthesize finishBlock=_finishBlock;
@property(nonatomic) long long playerState; // @synthesize playerState=_playerState;
@property(retain, nonatomic) QSBusSystem *mediaPlayerBusSystem; // @synthesize mediaPlayerBusSystem=_mediaPlayerBusSystem;
@property(nonatomic) __weak id <QSMediaPlayerViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(copy, nonatomic) NSDictionary *reportInfo; // @synthesize reportInfo=_reportInfo;
@property(copy, nonatomic) NSString *scene; // @synthesize scene=_scene;
@property(nonatomic) _Bool needSyncProgress; // @synthesize needSyncProgress=_needSyncProgress;
@property(nonatomic) long long muteType; // @synthesize muteType=_muteType;
@property(nonatomic) _Bool viewAppearDoNothing; // @synthesize viewAppearDoNothing=_viewAppearDoNothing;
@property(nonatomic) _Bool canPlayBackground; // @synthesize canPlayBackground=_canPlayBackground;
@property(nonatomic) _Bool autoPlayWhenSettingMediaItem; // @synthesize autoPlayWhenSettingMediaItem=_autoPlayWhenSettingMediaItem;
@property(nonatomic) _Bool hideAd; // @synthesize hideAd=_hideAd;
@property(copy, nonatomic) NSString *chatRoomId; // @synthesize chatRoomId=_chatRoomId;
@property(retain, nonatomic) QSSourceMediaItem *sourceMediaItem; // @synthesize sourceMediaItem=_sourceMediaItem;
@property(nonatomic) _Bool isFullScreenDirectly; // @synthesize isFullScreenDirectly=_isFullScreenDirectly;
- (void).cxx_destruct;
- (void)needsUserConfirmWWAN;
- (void)continueAfterWWANConfirm;
- (_Bool)needsShowWWANConfirmWithTargetPlayerState:(long long)arg1;
- (void)logSelfImmediatelyWhenAppear;
- (void)logSelfImmediately;
- (void)showControlUI:(_Bool)arg1 animate:(_Bool)arg2;
- (void)didConsumeEventFromBus:(id)arg1;
- (void)reloadMediaPlayState;
@property(readonly, nonatomic) _Bool mediaPlayerInternalError;
- (void)continuePlay;
- (_Bool)isPlayerActive;
- (_Bool)isUserPaused;
- (_Bool)isFullScreen;
- (void)resumePlayer;
- (void)pause;
- (void)play;
- (void)stopWithCompletion:(CDUnknownBlockType)arg1;
- (void)forceStartWithSourceMediaItem:(id)arg1;
- (void)start;
- (void)needPauseMediaPlayer;
- (void)needContinueMediaPlayer;
- (void)needInitMediaPlayer;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)deviceOrientationDidChanged:(id)arg1;
- (void)switchToSmallScreenWithCompletion:(CDUnknownBlockType)arg1;
- (void)switchToSmallScreen;
- (void)switchToFullScreen;
- (void)lockBtnPress:(id)arg1;
- (void)hideScreenLockButton;
- (void)showScreenLockButton:(_Bool)arg1;
- (void)setPlayerMuted:(_Bool)arg1;
- (void)forceResetPlayerMuted:(_Bool)arg1;
- (void)forceCancelPlayerMuted;
- (_Bool)isPlayerMuted;
- (void)observedObjectDidUpdate:(id)arg1;
- (void)playerNeedNotMute;
- (void)playerNeedMute;
- (_Bool)isTopMediaPlayer;
- (void)setRootViewController:(id)arg1 animated:(_Bool)arg2;
- (void)setRootViewController:(id)arg1 animationType:(long long)arg2;
- (void)pausedByAnotherVideoPlay;
- (void)willBePlayed;
- (void)applicationWillResignActive;
- (void)applicationDidBecomeActive;
- (void)resetForbiddenRotate;
- (_Bool)hasForbiddenRotate;
- (void)dealloc;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)windowDidResignKey:(id)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)userLoginStateChanged;
- (void)resetNextPreControl;
- (void)viewDidLoad;
- (unsigned long long)supportedInterfaceOrientations;
@property(nonatomic) double customTitleHeight; // @dynamic customTitleHeight;
@property(nonatomic) _Bool disableSmallScreenGesture; // @dynamic disableSmallScreenGesture;
- (_Bool)isCurrentPlayingItem:(id)arg1;
- (id)playerViewControllerWithCurrentPlayerMode;
@property(retain, nonatomic) NSIndexPath *indexPath; // @dynamic indexPath;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(retain, nonatomic) UIViewController<QSMediaPlayerRootViewControllerDelegate> *rootViewController; // @dynamic rootViewController;
@property(readonly) Class superclass;

@end
