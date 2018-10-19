//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSString;

@protocol KKMediaControllPlayerProtocol <NSObject>

@optional
- (void)disablePlayerControlUI;
- (void)enablePlayerControlUI;
- (void)setMediaPlayMode:(_Bool)arg1;
- (void)setMediaPlayVolume:(float)arg1;
- (void)setSeekPlayTime:(double)arg1;
- (void)startPlayNextVideo;
- (void)changeMediaFormat:(NSString *)arg1;
- (void)showAllControlViews;
- (void)hidAllControlViews;
- (void)seekTo:(double)arg1;
- (void)continueMediaPlay:(_Bool)arg1;
- (void)pauseMediaPlayWithPauseAd;
- (void)pauseMediaPlay;
@end

