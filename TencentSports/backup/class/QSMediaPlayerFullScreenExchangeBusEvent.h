//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "QSBusEvent.h"

__attribute__((visibility("hidden")))
@interface QSMediaPlayerFullScreenExchangeBusEvent : QSBusEvent
{
    _Bool _userTapped;
    _Bool _isFullScreen;
    CDUnknownBlockType _resultBlock;
}

@property(copy, nonatomic) CDUnknownBlockType resultBlock; // @synthesize resultBlock=_resultBlock;
@property(nonatomic) _Bool isFullScreen; // @synthesize isFullScreen=_isFullScreen;
@property(nonatomic) _Bool userTapped; // @synthesize userTapped=_userTapped;
- (void).cxx_destruct;

@end

