//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class QLSeeBackState;
@protocol QLSeeBackHandlerDelegate;

@interface QLSeeBackHandler : NSObject
{
    id <QLSeeBackHandlerDelegate> _delegate;
    QLSeeBackState *_seeBackState;
}

@property(retain, nonatomic) QLSeeBackState *seeBackState; // @synthesize seeBackState=_seeBackState;
@property(nonatomic) __weak id <QLSeeBackHandlerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)seeBackToEnded;
- (void)pollingLiveEnded;
- (void)endRender;
- (void)startRender;
- (void)pause;
- (void)play;
- (void)liveChangeToSeeBack;
- (void)seeBackChangeToLive;
- (void)startSupportSeeBack;
- (void)startPlayLive;
- (void)onSeekEndTime:(long long)arg1;
- (void)onVideoInfoPrepared:(id)arg1;
- (void)changeSeeBackState:(id)arg1;
- (id)getCurrentSeeBackState;
- (id)init;

@end

