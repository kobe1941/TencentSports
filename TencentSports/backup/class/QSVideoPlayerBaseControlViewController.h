//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "QSViewController.h"

#import "QSControlViewControllerProtocol-Protocol.h"
#import "QSMPVideoPlayerLayerViewControllerDelegate-Protocol.h"
#import "QSTouchTapGestureRecognizerDelegate-Protocol.h"

@class NSString, QSBusSystem, QSMPLayersViewController, QSMPSharedItem, QSTouchTapGestureRecognizer, UIPanGestureRecognizer;

__attribute__((visibility("hidden")))
@interface QSVideoPlayerBaseControlViewController : QSViewController <QSTouchTapGestureRecognizerDelegate, QSMPVideoPlayerLayerViewControllerDelegate, QSControlViewControllerProtocol>
{
    _Bool _playerMuted;
    QSMPSharedItem *_sharedItem;
    QSBusSystem *_mediaPlayerBusSystem;
    QSMPLayersViewController *_videoPlayerViewController;
    QSTouchTapGestureRecognizer *_touchGesture;
    UIPanGestureRecognizer *_panGesture;
}

@property(retain, nonatomic) UIPanGestureRecognizer *panGesture; // @synthesize panGesture=_panGesture;
@property(retain, nonatomic) QSTouchTapGestureRecognizer *touchGesture; // @synthesize touchGesture=_touchGesture;
@property(nonatomic, getter=isPlayerMuted) _Bool playerMuted; // @synthesize playerMuted=_playerMuted;
@property(nonatomic) __weak QSMPLayersViewController *videoPlayerViewController; // @synthesize videoPlayerViewController=_videoPlayerViewController;
@property(retain, nonatomic) QSBusSystem *mediaPlayerBusSystem; // @synthesize mediaPlayerBusSystem=_mediaPlayerBusSystem;
@property(retain, nonatomic) QSMPSharedItem *sharedItem; // @synthesize sharedItem=_sharedItem;
- (void).cxx_destruct;
- (void)applicationWillEnterForeground;
- (void)applicationDidEnterBackground;
- (void)playStateDidUpdated;
- (void)cancelAutoHideControlUI;
- (void)autoHideControlUI;
- (void)updateUI;
- (void)hideControlUI;
- (void)showControlUI;
- (_Bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (void)gestureRecognizerDidFinishTouch:(id)arg1;
- (void)gestureRecognizerDidStartTouch:(id)arg1;
- (void)tap:(id)arg1;
- (_Bool)isTryWatchMode;
- (void)controlUIDidDismiss;
- (void)controlUIWillDismiss;
- (void)controlUIDidShow;
- (void)controlUIWillShow;
- (_Bool)isSmallScreen;
- (void)logSelfImmediately;
- (void)dealloc;
- (void)onPan:(id)arg1;
- (void)didReceiveMemoryWarning;
- (_Bool)supportPanSwipeGesture;
- (void)viewDidLoad;
- (void)loadView;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

