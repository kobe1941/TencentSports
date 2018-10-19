//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class FMDatabase;

@interface QLAppErrorCodeManager : NSObject
{
    FMDatabase *_db;
    _Bool _requestingConfig;
}

+ (id)sharedInstance;
- (void)request:(id)arg1 didFailLoadWithError:(id)arg2;
- (void)requestDidFinishLoad:(id)arg1;
- (void)updateDBWithCodeList:(id)arg1;
- (void)updateErrorCodeConfig;
- (id)getErrorCodeText:(long long)arg1 modelId:(int)arg2 errorType:(int)arg3 defaultText:(id)arg4 plusErrorCode:(_Bool)arg5;
- (void)closeDatabase;
- (id)database;
- (id)getDefaultDatabasePath;
- (id)getDatabasePath;
- (void)dealloc;
- (id)init;

@end

