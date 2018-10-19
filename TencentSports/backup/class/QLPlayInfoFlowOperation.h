//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSOperation.h>

#import "QLHttpRequestDelegate-Protocol.h"

@class NSDictionary, NSString, QLHttpRequest;
@protocol QLPlayInfoFlowOperationDelegate;

@interface QLPlayInfoFlowOperation : NSOperation <QLHttpRequestDelegate>
{
    _Bool _executingFlag;
    _Bool _cancelledFlag;
    _Bool _finishedFlag;
    int _requestWifiTimeout;
    int _request3GTimeout;
    id <QLPlayInfoFlowOperationDelegate> _delegate;
    NSDictionary *_infoDic;
    NSString *_uploadUrl;
    QLHttpRequest *_httpRequest;
}

+ (void)runRequests;
+ (id)threadForImageRequest;
@property _Bool finishedFlag; // @synthesize finishedFlag=_finishedFlag;
@property _Bool cancelledFlag; // @synthesize cancelledFlag=_cancelledFlag;
@property _Bool executingFlag; // @synthesize executingFlag=_executingFlag;
@property(retain) QLHttpRequest *httpRequest; // @synthesize httpRequest=_httpRequest;
@property(retain) NSString *uploadUrl; // @synthesize uploadUrl=_uploadUrl;
@property(retain) NSDictionary *infoDic; // @synthesize infoDic=_infoDic;
@property int request3GTimeout; // @synthesize request3GTimeout=_request3GTimeout;
@property int requestWifiTimeout; // @synthesize requestWifiTimeout=_requestWifiTimeout;
@property id <QLPlayInfoFlowOperationDelegate> delegate; // @synthesize delegate=_delegate;
- (id)getFailedReportDataIfErrorOccurred:(id)arg1;
- (void)requestFailed:(id)arg1;
- (void)requestFinished:(id)arg1;
- (void)request:(id)arg1 didReceiveResponse:(id)arg2;
- (void)didFailLoadWithError:(id)arg1;
- (id)makeUploadInfo;
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
- (void)dealloc;
- (id)initWithInfoDic:(id)arg1 uploadUrl:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

