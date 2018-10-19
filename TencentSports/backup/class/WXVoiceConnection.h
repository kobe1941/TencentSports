//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "WXNetDelegate-Protocol.h"

@class NSData, NSString;
@protocol WXVoiceConnectionDelegate;

@interface WXVoiceConnection : NSObject <WXNetDelegate>
{
    id <WXVoiceConnectionDelegate> _delegate;
    struct WXVoiceEngine *_netConnection;
    long long _connectionState;
    long long _receiveErrorCode;
    long long _receiveHttpStatus;
    char *_receiveCStr;
    long long _receiveLength;
    _Bool auth;
    NSData *_key;
    long long _type;
}

+ (void)receiveType:(int)arg1 error:(int)arg2 httpStatus:(int)arg3 cStr:(char *)arg4 length:(int)arg5;
+ (void)deleteConnection:(id)arg1;
+ (id)newConnectWithDelegate:(id)arg1;
@property(nonatomic) _Bool auth; // @synthesize auth;
@property(nonatomic) long long type; // @synthesize type=_type;
@property(nonatomic) id <WXVoiceConnectionDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) NSData *key; // @synthesize key=_key;
- (void)didRecvData:(id)arg1;
- (_Bool)shouldSendData:(id)arg1 toUrl:(id)arg2;
- (void)removeFromConnectionArray;
- (id)init;
- (void)receiveOnMainThread;
- (void)receiveError:(int)arg1 httpStatus:(int)arg2 data:(id)arg3;
- (void)receiveError:(int)arg1 httpStatus:(int)arg2 cStr:(char *)arg3 length:(int)arg4;
- (void)disConnect;
- (void)cancel;
- (void)setHostName:(id)arg1;
- (void)setServer:(id)arg1 port:(long long)arg2;
- (void)sendData:(id)arg1 toUrl:(id)arg2;
- (void)sendQueryArgs:(id)arg1 andData:(id)arg2 toUrl:(id)arg3;
- (void)sendToUrl:(id)arg1;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

