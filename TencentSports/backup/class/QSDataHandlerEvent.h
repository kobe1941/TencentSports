//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "QSBusEvent.h"

@class QSDataControllerEvent, QSDataHandler;

@interface QSDataHandlerEvent : QSBusEvent
{
    QSDataControllerEvent *_handleEvent;
    long long _flag;
    QSDataHandler *_dataHandler;
}

+ (id)defaultIdentifier;
@property(nonatomic) __weak QSDataHandler *dataHandler; // @synthesize dataHandler=_dataHandler;
@property(nonatomic) long long flag; // @synthesize flag=_flag;
@property(retain, nonatomic) QSDataControllerEvent *handleEvent; // @synthesize handleEvent=_handleEvent;
- (void).cxx_destruct;

@end

