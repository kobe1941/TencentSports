//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSOperation.h>

@class NSDate, QSOperationQueue;

@interface QSOperation : NSOperation
{
    NSDate *_queueInsertedDate;
    QSOperationQueue *_operationQueue;
    long long _queuePriorityEx;
}

@property long long queuePriorityEx; // @synthesize queuePriorityEx=_queuePriorityEx;
@property(retain, nonatomic) QSOperationQueue *operationQueue; // @synthesize operationQueue=_operationQueue;
@property(retain, nonatomic) NSDate *queueInsertedDate; // @synthesize queueInsertedDate=_queueInsertedDate;
- (void).cxx_destruct;
- (void)dealloc;
@property long long queuePriority;

@end

