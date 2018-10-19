//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class DDFileLogger, NSString;

@interface TADFileLogger : NSObject
{
    unsigned long long _logLevel;
    NSString *_defaultLogsDirectory;
    DDFileLogger *_fileLogger;
}

+ (id)sharedInstance;
@property(retain, nonatomic) DDFileLogger *fileLogger; // @synthesize fileLogger=_fileLogger;
@property(copy, nonatomic) NSString *defaultLogsDirectory; // @synthesize defaultLogsDirectory=_defaultLogsDirectory;
@property(nonatomic) unsigned long long logLevel; // @synthesize logLevel=_logLevel;
- (void).cxx_destruct;
- (_Bool)isSameDay:(id)arg1 otherDay:(id)arg2;
- (void)rollLogFileEveryDay;
- (id)getLogFileInfos;
- (void)writeLogToFile:(unsigned long long)arg1 domain:(id)arg2 message:(id)arg3;
- (void)log:(unsigned long long)arg1 domain:(id)arg2 file:(const char *)arg3 line:(int)arg4 method:(const char *)arg5 message:(id)arg6;
- (void)log:(unsigned long long)arg1 file:(const char *)arg2 line:(int)arg3 method:(const char *)arg4 message:(id)arg5;
- (void)log:(unsigned long long)arg1 domain:(id)arg2 message:(id)arg3;
- (void)log:(unsigned long long)arg1 message:(id)arg2;
- (id)init;

@end

