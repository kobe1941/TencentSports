//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSURLRequest, SPDYProtocolContext, SPDYStream;
@protocol CocoaSPDYDelegate;

__attribute__((visibility("hidden")))
@interface SPDYProtocol : NSObject
{
    SPDYStream *_stream;
    SPDYProtocolContext *_context;
    _Bool _isCanceled;
    NSURLRequest *_request;
    long long _resourceType;
    id <CocoaSPDYDelegate> _del;
}

+ (_Bool)isUniqueHeaderName:(id)arg1;
+ (id)urlWithString:(id)arg1 withOriginURL:(id)arg2;
+ (id)urlWithAbsoultURLString:(id)arg1;
+ (id)jsEscapeString:(id)arg1 isJsEscapeString:(_Bool *)arg2;
+ (id)netTh;
+ (void)entry:(id)arg1;
+ (void)_preConn;
+ (void)doSpdyPreConnect;
+ (_Bool)hadSetSPDYProxy;
+ (void)setHadSystemProxy:(_Bool)arg1;
+ (void)_setSPDYProxy:(id)arg1;
+ (void)setSPDYProxy:(id)arg1;
@property(nonatomic) __weak id <CocoaSPDYDelegate> del; // @synthesize del=_del;
@property _Bool isCanceled; // @synthesize isCanceled=_isCanceled;
@property(readonly, nonatomic) long long resourceType; // @synthesize resourceType=_resourceType;
@property(retain, nonatomic) NSURLRequest *request; // @synthesize request=_request;
- (void).cxx_destruct;
- (void)_cancel;
- (void)cancel;
- (void)_start:(id)arg1;
- (void)start;
- (id)initWithRequest:(id)arg1 extraHeaders:(id)arg2 delegate:(id)arg3 resourceType:(long long)arg4;

@end

