//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray;

@interface KKMediaPlayerEventSender : NSObject
{
    NSMutableArray *_delegates;
    _Bool _adPlaying;
    _Bool _playing;
    _Bool _seeking;
    int _mediaPlayerState;
    double _currentTime;
    double _playableDuration;
    double _duration;
}

@property(nonatomic) _Bool seeking; // @synthesize seeking=_seeking;
@property(nonatomic) _Bool playing; // @synthesize playing=_playing;
@property(nonatomic) _Bool adPlaying; // @synthesize adPlaying=_adPlaying;
@property(nonatomic) double duration; // @synthesize duration=_duration;
@property(nonatomic) double playableDuration; // @synthesize playableDuration=_playableDuration;
@property(nonatomic) double currentTime; // @synthesize currentTime=_currentTime;
@property(nonatomic) int mediaPlayerState; // @synthesize mediaPlayerState=_mediaPlayerState;
- (void)changeMediaPlayerState:(int)arg1 error:(id)arg2;
- (void)changeMediaPlayerState:(int)arg1;
- (id)findValueWithObserver:(id)arg1;
- (void)banabaModelDidFinishBanabaTargetID:(id)arg1;
- (void)banabaFinishPostBanabaWithErrorCode:(int)arg1 Content:(id)arg2;
- (void)banabaComes:(id)arg1 ContentKey:(id)arg2 isLive:(_Bool)arg3;
- (void)resetEventSender;
- (void)notifyMediaPlayerEventOccur:(int)arg1 userInfo:(id)arg2;
- (void)notifySeekingEnd;
- (void)notifySeekingBegin;
- (void)notifyMediaPlayerGetNaturalSize:(struct CGSize)arg1;
- (void)notifyMediaPlayerScreenChanged:(_Bool)arg1;
- (void)notifyMediaPlayerProgressUpdated:(double)arg1 playableDuration:(double)arg2 duration:(double)arg3;
- (void)notifyMediaPlayerError:(id)arg1;
- (void)notifyMediaPlayerStateChanged:(int)arg1;
- (void)removeEventObserver:(id)arg1;
- (void)addEventObserver:(id)arg1;
- (void)dealloc;
- (id)init;

@end

