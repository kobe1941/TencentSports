//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "WXVoiceConnectionDelegate-Protocol.h"

@class NSData, NSMutableData, NSString, WXVoiceConnection, WXVoiceCountDictionary;
@protocol WXSpeechSynthesizerConnectionDelegate;

@interface WXSpeechSynthesizerConnection : NSObject <WXVoiceConnectionDelegate>
{
    long long _state;
    WXVoiceConnection *_connection;
    long long _timestampErrorCount;
    _Bool _isConnected;
    long long _timeOffset;
    _Bool _needSendCount;
    _Bool _isSendingCount;
    NSMutableData *_receiveData;
    float _sendingVolumn;
    id <WXSpeechSynthesizerConnectionDelegate> _delegate;
    long long _netType;
    NSString *_appID;
    NSData *_key;
    NSString *_speechID;
    NSString *_sendingText;
    long long _sendingFormat;
    long long _sendingOffset;
    NSString *_deviceInfo;
    NSString *_guid;
    NSString *_systemVersion;
    NSString *_siginfo;
    WXVoiceCountDictionary *_countDictionary;
}

@property(retain, nonatomic) WXVoiceCountDictionary *countDictionary; // @synthesize countDictionary=_countDictionary;
@property(retain, nonatomic) NSString *siginfo; // @synthesize siginfo=_siginfo;
@property(retain, nonatomic) NSString *systemVersion; // @synthesize systemVersion=_systemVersion;
@property(retain, nonatomic) NSString *guid; // @synthesize guid=_guid;
@property(retain, nonatomic) NSString *deviceInfo; // @synthesize deviceInfo=_deviceInfo;
@property(nonatomic) float sendingVolumn; // @synthesize sendingVolumn=_sendingVolumn;
@property(nonatomic) long long sendingOffset; // @synthesize sendingOffset=_sendingOffset;
@property(nonatomic) long long sendingFormat; // @synthesize sendingFormat=_sendingFormat;
@property(retain, nonatomic) NSString *sendingText; // @synthesize sendingText=_sendingText;
@property(retain, nonatomic) NSString *speechID; // @synthesize speechID=_speechID;
@property(retain, nonatomic) NSData *key; // @synthesize key=_key;
@property(retain, nonatomic) NSString *appID; // @synthesize appID=_appID;
@property(nonatomic) long long netType; // @synthesize netType=_netType;
@property(nonatomic) id <WXSpeechSynthesizerConnectionDelegate> delegate; // @synthesize delegate=_delegate;
- (_Bool)shouldSendData:(id)arg1 withUrlArgs:(id)arg2 delegate:(id)arg3;
- (_Bool)loadTimeOffset;
- (void)saveTimeOffset;
- (void)voiceConnectionDidCancel;
- (void)voiceConnectionError:(long long)arg1 andHttpStatus:(long long)arg2;
- (void)voiceConnectionReceiveBytes:(char *)arg1 length:(long long)arg2;
- (id)makeSendDataForText:(id)arg1 andFormat:(long long)arg2;
- (id)urlAppendOther;
- (id)makeUrlOfSendData;
- (void)connection;
- (void)sendNext;
- (void)changeCountDictionaryWithResultKind:(_Bool)arg1;
- (void)cancel;
- (_Bool)sendText:(id)arg1 withFormat:(int)arg2 andVolumn:(float)arg3;
- (void)setAppID:(id)arg1 andKey:(id)arg2;
- (id)init;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

