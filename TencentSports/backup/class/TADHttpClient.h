//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray, NSTimer;

@interface TADHttpClient : NSObject
{
    NSMutableArray *_unsendRequestList;
    NSMutableArray *_retryRequestList;
    NSTimer *_retryTimer;
    unsigned long long _backgroundTask;
}

+ (id)sharedInstance;
@property(nonatomic) unsigned long long backgroundTask; // @synthesize backgroundTask=_backgroundTask;
@property(retain, nonatomic) NSTimer *retryTimer; // @synthesize retryTimer=_retryTimer;
@property(retain, nonatomic) NSMutableArray *retryRequestList; // @synthesize retryRequestList=_retryRequestList;
@property(retain, nonatomic) NSMutableArray *unsendRequestList; // @synthesize unsendRequestList=_unsendRequestList;
- (void).cxx_destruct;
- (id)urlWithClientRetryCount:(id)arg1 retryCount:(long long)arg2;
- (void)stopBackgroundTask;
- (void)startBackgroundTask;
- (void)applicationWillTerminate;
- (void)applicationDidEnterBackground;
- (void)applicationWillEnterForeground;
- (void)retryAllFailedRequests;
- (void)createRetryRequestQueue;
- (void)createUnsendRequestQueue;
- (void)didNetworkStatusChanged;
- (_Bool)checkNetworkStatus;
- (id)urlEncode:(id)arg1;
- (void)requestFailed:(id)arg1 withError:(id)arg2;
- (void)requestFinished:(id)arg1;
- (void)requestStarted:(id)arg1;
- (void)pingRequestWithURL:(id)arg1 postData:(id)arg2 userInfo:(id)arg3;
- (id)createRequestWithURL:(id)arg1 postData:(id)arg2 timeoutSeconds:(double)arg3 numberOfTimesToTimeoutRetry:(int)arg4 failedTimes:(long long)arg5 shouldAddRetryCode:(_Bool)arg6 cookies:(id)arg7 headers:(id)arg8;
- (void)internalRequestWithURL:(id)arg1 postData:(id)arg2 shouldAddRetryCode:(_Bool)arg3 cookies:(id)arg4 headers:(id)arg5 failedTimes:(long long)arg6;
- (void)requestWithURL:(id)arg1 postData:(id)arg2 shouldAddRetryCode:(_Bool)arg3 cookies:(id)arg4 headers:(id)arg5 failedTimes:(long long)arg6;
- (void)requestWithURL:(id)arg1 postData:(id)arg2 shouldAddRetryCode:(_Bool)arg3 cookies:(id)arg4 failedTimes:(long long)arg5;
- (void)requestWithURL:(id)arg1 postData:(id)arg2 shouldAddRetryCode:(_Bool)arg3 cookies:(id)arg4;
- (void)requestWithURL:(id)arg1 postData:(id)arg2 cookies:(id)arg3;
- (void)requestWithURL:(id)arg1 cookies:(id)arg2;
- (void)dealloc;
- (id)init;
- (id)tadCacheDir;
- (id)cacheFilePath;
- (void)cacheAllRequests;
- (void)clearCachedRequests;
- (void)loadCachedRequests;

@end
