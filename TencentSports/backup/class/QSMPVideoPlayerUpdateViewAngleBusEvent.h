//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "QSBusEvent.h"

@class QSSportsMediaCameraItem;

__attribute__((visibility("hidden")))
@interface QSMPVideoPlayerUpdateViewAngleBusEvent : QSBusEvent
{
    QSSportsMediaCameraItem *_currentViewAngle;
    long long _currentLangType;
}

@property(nonatomic) long long currentLangType; // @synthesize currentLangType=_currentLangType;
@property(retain, nonatomic) QSSportsMediaCameraItem *currentViewAngle; // @synthesize currentViewAngle=_currentViewAngle;
- (void).cxx_destruct;

@end

