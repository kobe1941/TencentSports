//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "QSConcurrentOperation.h"

@class NSArray;

@interface QSBlockOperation : QSConcurrentOperation
{
    NSArray *_executionBlocks;
}

+ (id)blockOperationWithBlock:(CDUnknownBlockType)arg1;
@property(retain) NSArray *executionBlocks; // @synthesize executionBlocks=_executionBlocks;
- (void).cxx_destruct;
- (void)main;
- (void)excuteNextBlock;
- (void)addExecutionBlock:(CDUnknownBlockType)arg1;

@end

