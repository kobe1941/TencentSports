//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "QSSynchronousBusEvent.h"

@interface QSDataControllerEvent : QSSynchronousBusEvent
{
    _Bool _isCanceled;
    _Bool _isUpdated;
    long long _eventName;
    id _modelData;
}

@property(nonatomic) _Bool isUpdated; // @synthesize isUpdated=_isUpdated;
@property(nonatomic) _Bool isCanceled; // @synthesize isCanceled=_isCanceled;
@property(retain, nonatomic) id modelData; // @synthesize modelData=_modelData;
@property(nonatomic) long long eventName; // @synthesize eventName=_eventName;
- (void).cxx_destruct;

@end

