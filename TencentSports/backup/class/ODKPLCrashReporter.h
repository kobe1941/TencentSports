//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, ODKPLCrashMachExceptionPortSet, ODKPLCrashMachExceptionServer, ODKPLCrashReporterConfig;

@interface ODKPLCrashReporter : NSObject
{
    ODKPLCrashReporterConfig *_config;
    _Bool _enabled;
    ODKPLCrashMachExceptionServer *_machServer;
    ODKPLCrashMachExceptionPortSet *_previousMachPorts;
    NSString *_applicationIdentifier;
    NSString *_applicationVersion;
    NSString *_crashReportDirectory;
}

+ (id)sharedReporter;
+ (void)initialize;
- (void)setCrashCallbacks:(struct ODKPLCrashReporterCallbacks *)arg1;
- (id)generateLiveReportAndReturnError:(id *)arg1;
- (id)generateLiveReport;
- (id)generateLiveReportWithThread:(unsigned int)arg1 error:(id *)arg2;
- (id)generateLiveReportWithThread:(unsigned int)arg1;
- (_Bool)enableCrashReporterAndReturnError:(id *)arg1;
- (_Bool)enableCrashReporter;
- (_Bool)purgePendingCrashReportAndReturnError:(id *)arg1;
- (_Bool)purgePendingCrashReport;
- (id)loadPendingCrashReportDataAndReturnError:(id *)arg1;
- (id)loadPendingCrashReportData;
- (_Bool)hasPendingCrashReport;
- (id)initWithConfiguration:(id)arg1;
- (id)init;
- (id)crashReportPath;
- (id)queuedCrashReportDirectory;
- (id)crashReportDirectory;
- (_Bool)populateCrashReportDirectoryAndReturnError:(id *)arg1;
- (int)mapToAsyncSymbolicationStrategy:(unsigned long long)arg1;
- (void)dealloc;
- (id)enableMachExceptionServerWithPreviousPortSet:(id *)arg1 callback:(CDUnknownFunctionPointerType)arg2 context:(void *)arg3 error:(id *)arg4;
- (id)initWithBundle:(id)arg1 configuration:(id)arg2;
- (id)initWithApplicationIdentifier:(id)arg1 appVersion:(id)arg2 configuration:(id)arg3;

@end

