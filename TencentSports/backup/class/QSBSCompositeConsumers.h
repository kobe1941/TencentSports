//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "QSSynchronousBusEventConsumerDelegate-Protocol.h"

@class NSString, QSLinkedList;

@interface QSBSCompositeConsumers : NSObject <QSSynchronousBusEventConsumerDelegate>
{
    _Bool _eventHasBeenFinished;
    QSLinkedList *_consumers;
}

@property(nonatomic) _Bool eventHasBeenFinished; // @synthesize eventHasBeenFinished=_eventHasBeenFinished;
@property(retain, nonatomic) QSLinkedList *consumers; // @synthesize consumers=_consumers;
- (void).cxx_destruct;
- (void)markCurrentExcuteAsFinished;
- (_Bool)canContinueDeliveringEventFromBus:(id)arg1;
- (_Bool)eventHasBeenFinished:(id)arg1;
- (void)didConsumeEventFromBus:(id)arg1;
- (void)excuteEvent:(id)arg1 onConsumer:(id)arg2 withCompletion:(CDUnknownBlockType)arg3;
- (void)addConsumer:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

