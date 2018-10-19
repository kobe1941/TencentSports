//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSOperation.h>

#import "QLHttpRequestDelegate-Protocol.h"

@class NSDate, NSMutableArray, NSString, QLHttpRequest;
@protocol NSObject, QLImageRequestDelegate;

@interface QLImageRequestOperation : NSOperation <QLHttpRequestDelegate>
{
    NSMutableArray *_taskIDs;
    _Bool _executingFlag;
    _Bool _cancelledFlag;
    _Bool _finishedFlag;
    NSString *_imageURL;
    QLHttpRequest *_httpRequest;
    id <QLImageRequestDelegate> _delegate;
    id <NSObject> _userInfo;
    NSDate *_startLoadTime;
    NSDate *_receiveResponseTime;
    long long _imageSize;
    _Bool _isGif;
    int _xErrorRetryTime;
    _Bool _willCancelFlag;
    _Bool _networkBusy;
    _Bool _ignoreServerDefaultImage;
    int _serverDefaultImageRetryCount;
    int _imageRequestWifiTimeout;
    int _imageRequest3GTimeout;
}

+ (void)runRequests;
+ (id)threadForImageRequest;
@property int imageRequest3GTimeout; // @synthesize imageRequest3GTimeout=_imageRequest3GTimeout;
@property int imageRequestWifiTimeout; // @synthesize imageRequestWifiTimeout=_imageRequestWifiTimeout;
@property int serverDefaultImageRetryCount; // @synthesize serverDefaultImageRetryCount=_serverDefaultImageRetryCount;
@property _Bool ignoreServerDefaultImage; // @synthesize ignoreServerDefaultImage=_ignoreServerDefaultImage;
@property(retain) NSDate *receiveResponseTime; // @synthesize receiveResponseTime=_receiveResponseTime;
@property _Bool willCancelFlag; // @synthesize willCancelFlag=_willCancelFlag;
@property _Bool isGif; // @synthesize isGif=_isGif;
@property _Bool networkBusy; // @synthesize networkBusy=_networkBusy;
@property long long imageSize; // @synthesize imageSize=_imageSize;
@property(retain) NSDate *startLoadTime; // @synthesize startLoadTime=_startLoadTime;
@property(retain) id <NSObject> userInfo; // @synthesize userInfo=_userInfo;
@property(retain) NSString *imageURL; // @synthesize imageURL=_imageURL;
@property _Bool finishedFlag; // @synthesize finishedFlag=_finishedFlag;
@property _Bool cancelledFlag; // @synthesize cancelledFlag=_cancelledFlag;
@property _Bool executingFlag; // @synthesize executingFlag=_executingFlag;
@property(retain) NSMutableArray *taskIDs; // @synthesize taskIDs=_taskIDs;
- (void)request:(id)arg1 didReceiveData:(id)arg2;
- (void)requestFailed:(id)arg1;
- (void)requestFinished:(id)arg1;
- (void)request:(id)arg1 didReceiveResponse:(id)arg2;
- (void)requestStarted:(id)arg1;
- (void)clearRequest;
- (void)startRequest;
- (void)cancelOnRequestThread;
- (void)markAsFinished;
- (_Bool)isFinished;
- (_Bool)isCancelled;
- (_Bool)isExecuting;
- (_Bool)isConcurrent;
- (void)cancel;
- (void)main;
- (void)start;
- (void)didFailLoadWithError:(id)arg1;
- (void)didLoadImage:(id)arg1;
- (void)didStartLoad;
- (void)dealloc;
- (id)initWithTaskID:(long long)arg1 imageURL:(id)arg2 delegate:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

