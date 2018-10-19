//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "ODKEventProtocol-Protocol.h"

@class NSString;

@interface ODKEvent : NSObject <ODKEventProtocol>
{
    _Bool _isRealTime;
    unsigned int _sessionId;
    unsigned int _sequenceNumber;
    unsigned long long _timeStamp;
    NSString *_appkey;
}

@property(nonatomic) _Bool isRealTime; // @synthesize isRealTime=_isRealTime;
@property(retain, nonatomic) NSString *appkey; // @synthesize appkey=_appkey;
@property(nonatomic) unsigned int sequenceNumber; // @synthesize sequenceNumber=_sequenceNumber;
@property(nonatomic) unsigned int sessionId; // @synthesize sessionId=_sessionId;
@property(nonatomic) unsigned long long timeStamp; // @synthesize timeStamp=_timeStamp;
- (void).cxx_destruct;
- (id)toJsonString;
- (void)encode:(id)arg1;
- (unsigned int)type;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
