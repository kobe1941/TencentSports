//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSMutableArray, NSRecursiveLock, NSString, UploadLogFile, WloginTranSdk;

@interface ProcessLogReport : NSObject
{
    NSString *filePath;
    NSMutableArray *loginArray;
    NSArray *loginArrayForSend;
    WloginTranSdk *transportSdk;
    NSRecursiveLock *locker;
    UploadLogFile *uploadTool;
}

- (int)reportErrorLog:(id)arg1 andAccount:(id)arg2 andAppid:(unsigned int)arg3;
- (void)reportLog:(id)arg1 andAccount:(id)arg2 andAppid:(unsigned int)arg3;
- (void)tranFailed:(int)arg1 withMsg:(id)arg2;
- (void)tranSuccessWithData:(id)arg1;
- (void)reportFailed;
- (void)reportSucc;
- (id)jsonLoginString;
- (id)jsonLoginData;
- (void)writeDictTofile:(id)arg1;
- (void)dealloc;
- (id)init;

@end

