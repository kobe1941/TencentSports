//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "QSWindowController.h"

#import "QSCleanCacheProtocol-Protocol.h"
#import "QSMediaPlayerRootViewControllerDelegate-Protocol.h"
#import "TADVideoViewControllerDelegate-Protocol.h"

@class LOTAnimationView, NSString, QSADViewController, QSBusSystem, QSMPSharedItem;

__attribute__((visibility("hidden")))
@interface QSMPADViewController : QSWindowController <TADVideoViewControllerDelegate, QSMediaPlayerRootViewControllerDelegate, QSCleanCacheProtocol>
{
    _Bool _isNotFirstIn;
    QSBusSystem *_mediaPlayerBusSystem;
    QSMPSharedItem *_sharedItem;
    LOTAnimationView *_loadingAnimationView;
    QSADViewController *_tadVideoViewController;
}

+ (void)cleanCache;
@property(nonatomic) _Bool isNotFirstIn; // @synthesize isNotFirstIn=_isNotFirstIn;
@property(retain, nonatomic) QSADViewController *tadVideoViewController; // @synthesize tadVideoViewController=_tadVideoViewController;
@property(retain, nonatomic) LOTAnimationView *loadingAnimationView; // @synthesize loadingAnimationView=_loadingAnimationView;
@property(retain, nonatomic) QSMPSharedItem *sharedItem; // @synthesize sharedItem=_sharedItem;
@property(retain, nonatomic) QSBusSystem *mediaPlayerBusSystem; // @synthesize mediaPlayerBusSystem=_mediaPlayerBusSystem;
- (void).cxx_destruct;
- (void)logSelfImmediatelyWhenAppear;
- (void)logSelfImmediately;
- (_Bool)adPlayViewisRotating:(id)arg1;
- (void)adPlayVipClick:(id)arg1;
- (void)adPlayExpand:(id)arg1 fullScreen:(_Bool)arg2;
- (void)adPlayFailed:(id)arg1 error:(id)arg2;
- (void)adPlayDidFinish:(id)arg1;
- (void)adPlayWillFinish:(id)arg1;
- (void)adPlayReady:(id)arg1;
- (_Bool)isPlayerActive;
- (void)setPlayerMuted:(_Bool)arg1;
- (void)rotate2FullScreen;
- (void)want2FullScreen;
- (void)willEnterFullScreen;
- (void)rotate2SmallScreenFromOrientation:(long long)arg1;
- (void)want2SmallScreen;
- (void)willEnterSmallScreen;
- (_Bool)canRotate;
- (_Bool)checkSkipAd;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)networkStatusDidChange;
- (void)dealloc;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (struct CGPoint)centerOfLoadingView;
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

