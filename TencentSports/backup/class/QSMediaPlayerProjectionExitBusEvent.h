//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "QSMediaPlayerCommandBusEvent.h"

@class QSProjectedMediaItem;

__attribute__((visibility("hidden")))
@interface QSMediaPlayerProjectionExitBusEvent : QSMediaPlayerCommandBusEvent
{
    QSProjectedMediaItem *_curProjectedMediaItem;
}

@property(retain, nonatomic) QSProjectedMediaItem *curProjectedMediaItem; // @synthesize curProjectedMediaItem=_curProjectedMediaItem;
- (void).cxx_destruct;

@end
