//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "AFURLConnectionOperation.h"

@class NSError, NSHTTPURLResponse, NSObject, NSRecursiveLock, NSURLRequest;
@protocol OS_dispatch_queue;

@interface AFHTTPRequestOperation : AFURLConnectionOperation
{
    NSError *_HTTPError;
    NSObject<OS_dispatch_queue> *_successCallbackQueue;
    NSObject<OS_dispatch_queue> *_failureCallbackQueue;
}

+ (_Bool)canProcessRequest:(id)arg1;
+ (void)addAcceptableContentTypes:(id)arg1;
+ (id)acceptableContentTypes;
+ (void)addAcceptableStatusCodes:(id)arg1;
+ (id)acceptableStatusCodes;
@property(nonatomic) NSObject<OS_dispatch_queue> *failureCallbackQueue; // @synthesize failureCallbackQueue=_failureCallbackQueue;
@property(nonatomic) NSObject<OS_dispatch_queue> *successCallbackQueue; // @synthesize successCallbackQueue=_successCallbackQueue;
@property(retain, nonatomic) NSError *HTTPError; // @synthesize HTTPError=_HTTPError;
- (void).cxx_destruct;
- (void)setCompletionBlockWithSuccess:(CDUnknownBlockType)arg1 failure:(CDUnknownBlockType)arg2;
@property(readonly, nonatomic) _Bool hasAcceptableContentType;
@property(readonly, nonatomic) _Bool hasAcceptableStatusCode;
- (void)pause;
- (unsigned long long)responseStringEncoding;
- (id)error;
- (void)dealloc;
- (void)restart;

// Remaining properties
@property(retain, nonatomic) NSRecursiveLock *lock; // @dynamic lock;
@property(retain, nonatomic) NSURLRequest *request; // @dynamic request;
@property(retain, nonatomic) NSHTTPURLResponse *response; // @dynamic response;

@end

