//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "MQQSharkNetworkRequestDelegate-Protocol.h"

@class MQQSharkNetworkRequest, NSString;
@protocol MQQSharkRSACertifierDelegate;

@interface MQQSharkRSACertifier : NSObject <MQQSharkNetworkRequestDelegate>
{
    NSString *_encodeKey;
    NSString *_sessionId;
    id <MQQSharkRSACertifierDelegate> _delegate;
    NSString *_privacyPath;
    MQQSharkNetworkRequest *_request;
}

+ (id)shareRSACertifier;
@property(retain, nonatomic) MQQSharkNetworkRequest *request; // @synthesize request=_request;
@property(copy, nonatomic) NSString *privacyPath; // @synthesize privacyPath=_privacyPath;
@property(copy, nonatomic) NSString *sessionId; // @synthesize sessionId=_sessionId;
@property(copy, nonatomic) NSString *encodeKey; // @synthesize encodeKey=_encodeKey;
@property(nonatomic) id <MQQSharkRSACertifierDelegate> delegate; // @synthesize delegate=_delegate;
- (void)didVerifyWithError:(id)arg1;
- (void)sharkNetworkRequestFailed:(id)arg1;
- (void)sharkNetworkRequestFinished:(id)arg1;
- (struct SCRSA)serverRSAWithData:(id)arg1 error:(id *)arg2;
- (id)dataForRequest:(id *)arg1;
- (_Bool)getClientRSA:(struct CSRSA *)arg1 error:(id *)arg2;
- (id)randomEncodeKeyWithLength:(unsigned long long)arg1;
- (void)verifyRSA;
- (void)clearRSA;
- (void)clearDelegateAndCancel;
@property(readonly, nonatomic) _Bool isRsaVerified;
- (void)synchronizePrivacyToPath:(id)arg1;
- (void)loadPrivacyFromPath:(id)arg1;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

