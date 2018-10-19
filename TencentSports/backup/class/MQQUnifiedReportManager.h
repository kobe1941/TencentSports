//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "MQQSharkRequestDelegate-Protocol.h"

@class DBOUnifiedReportOp, MQQReportRequest, NSArray, NSString;

@interface MQQUnifiedReportManager : NSObject <MQQSharkRequestDelegate>
{
    _Bool _isUnifiedReporting;
    unsigned long long _backgroundTaskIdentifier;
    MQQReportRequest *_unifiedReportRequest;
    DBOUnifiedReportOp *_unifiedReportOp;
    NSArray *_reportingArray;
    NSString *_reportingMd5;
}

+ (id)shareUnifiedReporter;
@property(retain, nonatomic) NSString *reportingMd5; // @synthesize reportingMd5=_reportingMd5;
@property(retain, nonatomic) NSArray *reportingArray; // @synthesize reportingArray=_reportingArray;
@property(retain, nonatomic) DBOUnifiedReportOp *unifiedReportOp; // @synthesize unifiedReportOp=_unifiedReportOp;
@property(retain, nonatomic) MQQReportRequest *unifiedReportRequest; // @synthesize unifiedReportRequest=_unifiedReportRequest;
@property(nonatomic) unsigned long long backgroundTaskIdentifier; // @synthesize backgroundTaskIdentifier=_backgroundTaskIdentifier;
- (void)_endBackgroundTaskIfNeeded;
- (void)_beginBackgroundTaskIfNeeded;
- (void)sharkRequestDidFail:(id)arg1;
- (void)sharkRequestDidFinish:(id)arg1 withInfo:(id)arg2;
- (void)UNI_applicationDidEnterBackground:(id)arg1;
- (void)UNI_applicationDidBecomeActive:(id)arg1;
- (void)stopReporting;
- (void)startReportIfNeed;
- (void)insertRecordReportWithID:(int)arg1 items:(id)arg2;
- (void)dealloc;
- (void)unregisterNotification;
- (void)registerNotification;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
