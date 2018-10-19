//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSObject, QSBusSystem, QSMPLayersViewController, QSMPSharedItem;

@protocol QSMPVideoPlayerLayerViewControllerDelegate <NSObject>
- (void)setMediaPlayerBusSystem:(QSBusSystem *)arg1;
- (void)setSharedItem:(QSMPSharedItem *)arg1;

@optional
@property(nonatomic, getter=isPlayerMuted) _Bool playerMuted;
- (void)setSharedData:(NSObject *)arg1;
- (void)setVideoPlayerViewController:(QSMPLayersViewController *)arg1;
@end

