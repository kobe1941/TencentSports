//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "QLSeeBackState.h"

@interface QLStartSupportSeeBackState : QLSeeBackState
{
}

- (void)seeBackToEnded:(id)arg1;
- (void)pollingLiveEnded:(id)arg1;
- (void)pause:(id)arg1;
- (void)play:(id)arg1;
- (void)liveChangeToSeeBack:(id)arg1;
- (void)seeBackChangeToLive:(id)arg1;
- (void)startSupportSeeBack:(id)arg1;
- (void)startPlayLive:(id)arg1;
- (long long)currentLiveState;
- (_Bool)isSeeBackState;

@end

