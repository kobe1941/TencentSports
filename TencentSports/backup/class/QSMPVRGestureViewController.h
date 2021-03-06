//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "QSViewController.h"

#import "QSBusEventConsumerDelegate-Protocol.h"
#import "QSMPVideoPlayerLayerViewControllerDelegate-Protocol.h"

@class NSString, QSBusSystem, QSMPLayersViewController, QSMPSharedItem, UIImageView;

__attribute__((visibility("hidden")))
@interface QSMPVRGestureViewController : QSViewController <QSBusEventConsumerDelegate, QSMPVideoPlayerLayerViewControllerDelegate>
{
    QSBusSystem *_mediaPlayerBusSystem;
    QSMPSharedItem *_sharedItem;
    QSMPLayersViewController *_videoPlayerViewController;
    UIImageView *_tipView;
}

@property(retain, nonatomic) UIImageView *tipView; // @synthesize tipView=_tipView;
@property(nonatomic) __weak QSMPLayersViewController *videoPlayerViewController; // @synthesize videoPlayerViewController=_videoPlayerViewController;
@property(retain, nonatomic) QSMPSharedItem *sharedItem; // @synthesize sharedItem=_sharedItem;
@property(retain, nonatomic) QSBusSystem *mediaPlayerBusSystem; // @synthesize mediaPlayerBusSystem=_mediaPlayerBusSystem;
- (void).cxx_destruct;
- (void)hideTip;
- (void)showTip;
- (void)didConsumeEventFromBus:(id)arg1;
- (void)onTapGestureRecognizer:(id)arg1;
- (void)onPanGestureRecognizer:(id)arg1;
- (void)didReceiveMemoryWarning;
- (void)dealloc;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(nonatomic, getter=isPlayerMuted) _Bool playerMuted;
@property(readonly) Class superclass;

@end

