//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDateFormatter, NSMutableDictionary, NSMutableSet, NSString, NSURL;

@interface FMDatabase : NSObject
{
    void *_db;
    _Bool _isExecutingStatement;
    double _startBusyRetryTime;
    NSMutableSet *_openResultSets;
    NSMutableSet *_openFunctions;
    NSDateFormatter *_dateFormat;
    _Bool _shouldCacheStatements;
    _Bool _traceExecution;
    _Bool _checkedOut;
    _Bool _crashOnErrors;
    _Bool _logsErrors;
    _Bool _isInTransaction;
    double _maxBusyRetryTimeInterval;
    NSMutableDictionary *_cachedStatements;
    NSString *_databasePath;
}

+ (id)storeableDateFormat:(id)arg1;
+ (_Bool)isSQLiteThreadSafe;
+ (id)sqliteLibVersion;
+ (int)FMDBVersion;
+ (id)FMDBUserVersion;
+ (id)databaseWithURL:(id)arg1;
+ (id)databaseWithPath:(id)arg1;
@property(readonly, nonatomic) NSString *databasePath; // @synthesize databasePath=_databasePath;
@property(readonly, nonatomic) _Bool isInTransaction; // @synthesize isInTransaction=_isInTransaction;
@property(retain) NSMutableDictionary *cachedStatements; // @synthesize cachedStatements=_cachedStatements;
@property _Bool logsErrors; // @synthesize logsErrors=_logsErrors;
@property _Bool crashOnErrors; // @synthesize crashOnErrors=_crashOnErrors;
@property _Bool checkedOut; // @synthesize checkedOut=_checkedOut;
@property _Bool traceExecution; // @synthesize traceExecution=_traceExecution;
- (void).cxx_destruct;
- (void)resultErrorTooBigInContext:(void *)arg1;
- (void)resultErrorNoMemoryInContext:(void *)arg1;
- (void)resultErrorCode:(int)arg1 context:(void *)arg2;
- (void)resultError:(id)arg1 context:(void *)arg2;
- (void)resultString:(id)arg1 context:(void *)arg2;
- (void)resultData:(id)arg1 context:(void *)arg2;
- (void)resultDouble:(double)arg1 context:(void *)arg2;
- (void)resultLong:(long long)arg1 context:(void *)arg2;
- (void)resultInt:(int)arg1 context:(void *)arg2;
- (void)resultNullInContext:(void *)arg1;
- (id)valueString:(void *)arg1;
- (id)valueData:(void *)arg1;
- (double)valueDouble:(void *)arg1;
- (long long)valueLong:(void *)arg1;
- (int)valueInt:(void *)arg1;
- (int)valueType:(void *)arg1;
- (void)makeFunctionNamed:(id)arg1 arguments:(int)arg2 block:(CDUnknownBlockType)arg3;
- (void)makeFunctionNamed:(id)arg1 maximumArguments:(int)arg2 withBlock:(CDUnknownBlockType)arg3;
@property(nonatomic) _Bool shouldCacheStatements; // @synthesize shouldCacheStatements=_shouldCacheStatements;
- (id)inSavePoint:(CDUnknownBlockType)arg1;
- (_Bool)rollbackToSavePointWithName:(id)arg1 error:(id *)arg2;
- (_Bool)releaseSavePointWithName:(id)arg1 error:(id *)arg2;
- (_Bool)startSavePointWithName:(id)arg1 error:(id *)arg2;
- (_Bool)interrupt;
- (_Bool)inTransaction;
- (_Bool)beginTransaction;
- (_Bool)beginDeferredTransaction;
- (_Bool)commit;
- (_Bool)rollback;
- (_Bool)update:(id)arg1 withErrorAndBindings:(id *)arg2;
- (_Bool)executeUpdate:(id)arg1 withErrorAndBindings:(id *)arg2;
- (_Bool)executeStatements:(id)arg1 withResultBlock:(CDUnknownBlockType)arg2;
- (_Bool)executeStatements:(id)arg1;
- (_Bool)executeUpdateWithFormat:(id)arg1;
- (_Bool)executeUpdate:(id)arg1 withVAList:(char *)arg2;
- (_Bool)executeUpdate:(id)arg1 withParameterDictionary:(id)arg2;
- (_Bool)executeUpdate:(id)arg1 values:(id)arg2 error:(id *)arg3;
- (_Bool)executeUpdate:(id)arg1 withArgumentsInArray:(id)arg2;
- (_Bool)executeUpdate:(id)arg1;
- (_Bool)executeUpdate:(id)arg1 error:(id *)arg2 withArgumentsInArray:(id)arg3 orDictionary:(id)arg4 orVAList:(char *)arg5;
- (id)executeQuery:(id)arg1 withVAList:(char *)arg2;
- (id)executeQuery:(id)arg1 values:(id)arg2 error:(id *)arg3;
- (id)executeQuery:(id)arg1 withArgumentsInArray:(id)arg2;
- (id)executeQueryWithFormat:(id)arg1;
- (id)executeQuery:(id)arg1;
- (id)executeQuery:(id)arg1 withArgumentsInArray:(id)arg2 orDictionary:(id)arg3 orVAList:(char *)arg4;
- (id)executeQuery:(id)arg1 withParameterDictionary:(id)arg2;
- (void)extractSQL:(id)arg1 argumentsList:(char *)arg2 intoString:(id)arg3 arguments:(id)arg4;
- (void)bindObject:(id)arg1 toColumn:(int)arg2 inStatement:(struct sqlite3_stmt *)arg3;
@property(readonly, nonatomic) int changes;
@property(readonly, nonatomic) long long lastInsertRowId;
- (id)lastError;
- (id)errorWithMessage:(id)arg1;
- (int)lastExtendedErrorCode;
- (int)lastErrorCode;
- (_Bool)hadError;
- (id)lastErrorMessage;
- (_Bool)databaseExists;
- (void)warnInUse;
@property(readonly, nonatomic) _Bool goodConnection;
- (id)stringFromDate:(id)arg1;
- (id)dateFromString:(id)arg1;
- (void)setDateFormat:(id)arg1;
- (_Bool)hasDateFormatter;
- (_Bool)setKeyWithData:(id)arg1;
- (_Bool)setKey:(id)arg1;
- (_Bool)rekeyWithData:(id)arg1;
- (_Bool)rekey:(id)arg1;
- (void)setCachedStatement:(id)arg1 forQuery:(id)arg2;
- (id)cachedStatementForQuery:(id)arg1;
- (void)clearCachedStatements;
- (void)resultSetDidClose:(id)arg1;
- (void)closeOpenResultSets;
@property(readonly, nonatomic) _Bool hasOpenResultSets;
- (void)setBusyRetryTimeout:(int)arg1;
- (int)busyRetryTimeout;
@property(nonatomic) double maxBusyRetryTimeInterval; // @synthesize maxBusyRetryTimeInterval=_maxBusyRetryTimeInterval;
- (_Bool)close;
- (_Bool)openWithFlags:(int)arg1 vfs:(id)arg2;
- (_Bool)openWithFlags:(int)arg1;
- (_Bool)open;
- (const char *)sqlitePath;
@property(readonly, nonatomic) void *sqliteHandle;
@property(readonly, nonatomic) NSURL *databaseURL;
- (void)dealloc;
- (id)initWithPath:(id)arg1;
- (id)initWithURL:(id)arg1;
- (id)init;

@end

