//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "QSDataHandler.h"

@class NSTimer;

@interface QSAutoUpdateHandler : QSDataHandler
{
    long long _updateEventName;
    NSTimer *_timer;
}

@property(retain, nonatomic) NSTimer *timer; // @synthesize timer=_timer;
@property(nonatomic) long long updateEventName; // @synthesize updateEventName=_updateEventName;
- (void).cxx_destruct;
- (void)autoUpdate;
- (void)handleData;

@end

