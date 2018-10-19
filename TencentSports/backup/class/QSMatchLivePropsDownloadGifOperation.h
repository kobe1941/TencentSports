//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSOperation.h>

@class NSRecursiveLock, NSString;

__attribute__((visibility("hidden")))
@interface QSMatchLivePropsDownloadGifOperation : NSOperation
{
    _Bool _executing;
    _Bool _finished;
    NSString *_gifURL;
    NSRecursiveLock *_lock;
}

@property(retain, nonatomic) NSRecursiveLock *lock; // @synthesize lock=_lock;
@property(copy, nonatomic) NSString *gifURL; // @synthesize gifURL=_gifURL;
- (void).cxx_destruct;
- (id)downloadIdentifier;
- (_Bool)isFinished;
- (_Bool)isExecuting;
- (_Bool)isConcurrent;
- (void)cancel;
- (void)completeOperation;
- (void)main;
- (void)start;
- (void)dealloc;
- (id)init;

@end
