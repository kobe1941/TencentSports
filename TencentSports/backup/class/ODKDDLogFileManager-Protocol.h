//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSArray, NSString;

@protocol ODKDDLogFileManager <NSObject>
@property unsigned long long logFilesDiskQuota;
@property unsigned long long maximumNumberOfLogFiles;
- (NSString *)createNewLogFile;
- (NSArray *)sortedLogFileInfos;
- (NSArray *)sortedLogFileNames;
- (NSArray *)sortedLogFilePaths;
- (NSArray *)unsortedLogFileInfos;
- (NSArray *)unsortedLogFileNames;
- (NSArray *)unsortedLogFilePaths;
- (NSString *)logsDirectory;

@optional
- (void)didRollAndArchiveLogFile:(NSString *)arg1;
- (void)didArchiveLogFile:(NSString *)arg1;
@end

