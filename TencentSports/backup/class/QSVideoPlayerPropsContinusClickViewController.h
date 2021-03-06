//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "QSViewController.h"

#import "QSMPVideoPlayerLayerViewControllerDelegate-Protocol.h"
#import "QSMatchLivePropsContinusClickViewDelegate-Protocol.h"
#import "QSMediaHitTestViewDelegate-Protocol.h"

@class NSString, QSBusSystem, QSMPLayersViewController, QSMPSharedItem, QSMatchLivePropsContinusClickView, QSVideoPlayerPropsSharedData;

__attribute__((visibility("hidden")))
@interface QSVideoPlayerPropsContinusClickViewController : QSViewController <QSMediaHitTestViewDelegate, QSMatchLivePropsContinusClickViewDelegate, QSMPVideoPlayerLayerViewControllerDelegate>
{
    QSMPSharedItem *_sharedItem;
    QSBusSystem *_mediaPlayerBusSystem;
    QSMPLayersViewController *_videoPlayerViewController;
    QSVideoPlayerPropsSharedData *_propsSharedData;
    QSMatchLivePropsContinusClickView *_continusClickView;
}

@property(retain, nonatomic) QSMatchLivePropsContinusClickView *continusClickView; // @synthesize continusClickView=_continusClickView;
@property(retain, nonatomic) QSVideoPlayerPropsSharedData *propsSharedData; // @synthesize propsSharedData=_propsSharedData;
@property(nonatomic) __weak QSMPLayersViewController *videoPlayerViewController; // @synthesize videoPlayerViewController=_videoPlayerViewController;
@property(retain, nonatomic) QSBusSystem *mediaPlayerBusSystem; // @synthesize mediaPlayerBusSystem=_mediaPlayerBusSystem;
@property(retain, nonatomic) QSMPSharedItem *sharedItem; // @synthesize sharedItem=_sharedItem;
- (void).cxx_destruct;
- (void)goToBuyKb;
- (_Bool)shouldReceiveTouchEventsWithPoint:(struct CGPoint)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)setSharedData:(id)arg1;
- (void)continusClickview:(id)arg1 didInterruptWithReason:(long long)arg2;
- (void)continusClickViewTimeUp:(id)arg1;
- (void)didReceiveMemoryWarning;
- (void)dealloc;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)loadView;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(nonatomic, getter=isPlayerMuted) _Bool playerMuted;
@property(readonly) Class superclass;

@end

