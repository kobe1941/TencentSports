//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "wwjsReportDataSource-Protocol.h"

@class NSString;

@interface QLReportDataSource : NSObject <wwjsReportDataSource>
{
}

+ (id)sharedInstance;
- (id)IDFA;
- (int)configID;
- (id)distributeID;
- (id)wwjsReportVUserID;
- (id)wwjsReportGUID;
- (_Bool)wwjsNetworkAvailable;
- (_Bool)wwjsWifiAvailable;
- (_Bool)wwjsReportShouldReport;
- (short)wwjsReportCurrentNetworkType;
- (int)wwjsReportProductIdentifying;
- (id)wwjsReportAppName;
- (long long)wwjsReportDeviceType;
- (id)wwjsReportDeviceID;
- (double)wwjsReportUserQQ;
- (id)wwjsReportPlayerVersion;
- (id)wwjsReportAppVersion;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
