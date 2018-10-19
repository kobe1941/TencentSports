//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@protocol OS_dispatch_queue;

@interface TSASplashAsyncLoader : NSObject
{
    double _timeout;
    NSObject<OS_dispatch_queue> *_timeoutOperationQueue;
    CDUnknownBlockType _completionBlock;
    long long _status;
}

@property(nonatomic) long long status; // @synthesize status=_status;
@property(copy, nonatomic) CDUnknownBlockType completionBlock; // @synthesize completionBlock=_completionBlock;
@property(nonatomic) NSObject<OS_dispatch_queue> *timeoutOperationQueue; // @synthesize timeoutOperationQueue=_timeoutOperationQueue;
@property(nonatomic) double timeout; // @synthesize timeout=_timeout;
- (void).cxx_destruct;
- (void)dealloc;
- (void)requestTimeoutHandle:(id)arg1;
- (id)parseRequestHandle:(id)arg1;
- (void)realTimeSelectOrderWithCompletion:(CDUnknownBlockType)arg1;
- (id)init;

@end
