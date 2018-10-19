//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSData, NSHTTPURLResponse, NSMutableData, NSMutableURLRequest, NSString, NSURLConnection, RqdHttpRequest, RqdReqDataPackage;

@interface RqdNetRequest : NSObject
{
    _Bool _checkNetStatus;
    _Bool _uploadingCrash;
    int _priority;
    id _delegate;
    NSString *_serverUrl;
    NSURLConnection *_urlConnection;
    NSMutableData *_rspData;
    NSData *_retryPostData;
    NSMutableURLRequest *_request;
    NSHTTPURLResponse *_response;
    RqdReqDataPackage *_reqDataPkg;
    unsigned long long _networkType;
    RqdHttpRequest *_httpRequest;
}

@property(retain, nonatomic) RqdHttpRequest *httpRequest; // @synthesize httpRequest=_httpRequest;
@property(nonatomic) _Bool uploadingCrash; // @synthesize uploadingCrash=_uploadingCrash;
@property(nonatomic) unsigned long long networkType; // @synthesize networkType=_networkType;
@property(nonatomic) _Bool checkNetStatus; // @synthesize checkNetStatus=_checkNetStatus;
@property(retain, nonatomic) RqdReqDataPackage *reqDataPkg; // @synthesize reqDataPkg=_reqDataPkg;
@property(retain, nonatomic) NSHTTPURLResponse *response; // @synthesize response=_response;
@property(retain, nonatomic) NSMutableURLRequest *request; // @synthesize request=_request;
@property(retain, nonatomic) NSData *retryPostData; // @synthesize retryPostData=_retryPostData;
@property(retain, nonatomic) NSMutableData *rspData; // @synthesize rspData=_rspData;
@property(retain, nonatomic) NSURLConnection *urlConnection; // @synthesize urlConnection=_urlConnection;
@property(copy, nonatomic) NSString *serverUrl; // @synthesize serverUrl=_serverUrl;
@property(nonatomic) int priority; // @synthesize priority=_priority;
@property(retain, nonatomic) id delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)startAsync;
- (void)doSuccessOperation:(id)arg1;
- (void)doFailOperation:(id)arg1;
- (id)initWithUrl:(id)arg1 requestPkg:(id)arg2 delegate:(id)arg3;

@end
