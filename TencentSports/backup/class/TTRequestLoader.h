//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSHTTPURLResponse, NSMutableArray, NSMutableData, NSString, NSURLConnection, TTURLRequestQueue;

@interface TTRequestLoader : NSObject
{
    NSString *_urlPath;
    TTURLRequestQueue *_queue;
    NSString *_cacheKey;
    int _cachePolicy;
    double _cacheExpirationAge;
    NSMutableArray *_requests;
    NSURLConnection *_connection;
    NSHTTPURLResponse *_response;
    NSMutableData *_responseData;
    int _retriesLeft;
    struct timeval startTime;
}

@property(readonly, nonatomic) double cacheExpirationAge; // @synthesize cacheExpirationAge=_cacheExpirationAge;
@property(readonly, nonatomic) int cachePolicy; // @synthesize cachePolicy=_cachePolicy;
@property(readonly, nonatomic) NSString *cacheKey; // @synthesize cacheKey=_cacheKey;
@property(readonly, nonatomic) NSArray *requests; // @synthesize requests=_requests;
@property(readonly, nonatomic) NSString *urlPath; // @synthesize urlPath=_urlPath;
@property(readonly, nonatomic) NSString *URL;
@property(readonly, nonatomic) _Bool isLoading;
- (void)connection:(id)arg1 didFailWithError:(id)arg2;
- (void)connection:(id)arg1 didReceiveAuthenticationChallenge:(id)arg2;
- (void)connectionDidFinishLoading:(id)arg1;
- (void)connection:(id)arg1 didSendBodyData:(long long)arg2 totalBytesWritten:(long long)arg3 totalBytesExpectedToWrite:(long long)arg4;
- (id)connection:(id)arg1 willCacheResponse:(id)arg2;
- (void)connection:(id)arg1 didReceiveData:(id)arg2;
- (void)connection:(id)arg1 didReceiveResponse:(id)arg2;
- (long long)getTimeLengthWithStartTime:(struct timeval)arg1 endTime:(struct timeval)arg2;
- (void)cancel;
- (void)dispatchAuthenticationChallenge:(id)arg1;
- (void)dispatchLoaded:(id)arg1;
- (void)dispatchError:(id)arg1;
- (id)processResponse:(id)arg1 data:(id)arg2;
- (_Bool)cancel:(id)arg1;
- (void)loadSynchronously:(id)arg1;
- (void)load:(id)arg1;
- (void)removeRequest:(id)arg1;
- (void)addRequest:(id)arg1;
- (void)dispatchLoadedBytes:(long long)arg1 expected:(long long)arg2;
- (void)connectToURL:(id)arg1;
- (void)deliverDataResponse:(id)arg1;
- (void)dealloc;
- (id)initForRequest:(id)arg1 queue:(id)arg2;

@end

