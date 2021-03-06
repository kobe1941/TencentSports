//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "QSOperation.h"

#import "NSStreamDelegate-Protocol.h"
#import "QSStateMachineDelegate-Protocol.h"

@class NSInputStream, NSMutableData, NSObject, NSOutputStream, NSRecursiveLock, NSString, QSStateMachine;
@protocol OS_dispatch_queue, QSTCPConnectionDelegate;

@interface QSTCPConnection : QSOperation <NSStreamDelegate, QSStateMachineDelegate>
{
    BOOL _openStatus;
    unsigned int _port;
    NSObject<QSTCPConnectionDelegate> *_delegate;
    NSObject<OS_dispatch_queue> *_delegateQueue;
    NSString *_hostName;
    NSInputStream *_inputStream;
    NSOutputStream *_outputStream;
    NSMutableData *_readBuffer;
    NSMutableData *_writeBuffer;
    NSRecursiveLock *_readBufferLock;
    NSRecursiveLock *_writeBufferLock;
    QSStateMachine *_stateMachine;
    double _retryTimeInterval;
}

@property(nonatomic) double retryTimeInterval; // @synthesize retryTimeInterval=_retryTimeInterval;
@property(nonatomic) BOOL openStatus; // @synthesize openStatus=_openStatus;
@property(retain, nonatomic) QSStateMachine *stateMachine; // @synthesize stateMachine=_stateMachine;
@property(retain, nonatomic) NSRecursiveLock *writeBufferLock; // @synthesize writeBufferLock=_writeBufferLock;
@property(retain, nonatomic) NSRecursiveLock *readBufferLock; // @synthesize readBufferLock=_readBufferLock;
@property(retain, nonatomic) NSMutableData *writeBuffer; // @synthesize writeBuffer=_writeBuffer;
@property(retain, nonatomic) NSMutableData *readBuffer; // @synthesize readBuffer=_readBuffer;
@property(retain, nonatomic) NSOutputStream *outputStream; // @synthesize outputStream=_outputStream;
@property(retain, nonatomic) NSInputStream *inputStream; // @synthesize inputStream=_inputStream;
@property(nonatomic) unsigned int port; // @synthesize port=_port;
@property(retain, nonatomic) NSString *hostName; // @synthesize hostName=_hostName;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *delegateQueue; // @synthesize delegateQueue=_delegateQueue;
@property(nonatomic) __weak NSObject<QSTCPConnectionDelegate> *delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)stream:(id)arg1 handleEvent:(unsigned long long)arg2;
- (void)outputStream:(id)arg1 handleEvent:(unsigned long long)arg2;
- (void)inputStream:(id)arg1 handleEvent:(unsigned long long)arg2;
- (void)readData;
- (void)sendData;
- (void)appendSendedData:(id)arg1;
- (void)clearDelegatesAndMarkAsFinished;
- (void)markAsFinished;
- (void)cancel;
- (void)stop;
- (void)restart;
- (void)retry;
- (void)errorHappened:(id)arg1;
- (void)connect;
- (_Bool)isConcurrent;
- (_Bool)isFinished;
- (_Bool)isExecuting;
- (void)start;
- (void)stateMachine:(id)arg1 eventDidHappen:(id)arg2;
- (void)stateMachine:(id)arg1 eventWillHappen:(id)arg2;
- (void)dealloc;
- (void)enterForeground:(id)arg1;
- (void)enterBackground;
- (void)enterBackground:(id)arg1;
- (void)netWorkStatusChanged:(id)arg1;
- (id)initWithHostName:(id)arg1 port:(unsigned int)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

