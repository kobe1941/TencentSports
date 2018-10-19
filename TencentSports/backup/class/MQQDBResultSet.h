//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class MQQDBStatement, MQQDatabase, NSError, NSMutableDictionary;

@interface MQQDBResultSet : NSObject
{
    MQQDBStatement *_statement;
    MQQDatabase *_mDB;
    NSError *_error;
    NSMutableDictionary *_columnNameToIndexMap;
}

+ (id)resultSetWithStatement:(id)arg1 database:(id)arg2;
@property(retain, nonatomic) NSError *error; // @synthesize error=_error;
@property(retain, nonatomic) MQQDBStatement *statement; // @synthesize statement=_statement;
@property(nonatomic) MQQDatabase *mDB; // @synthesize mDB=_mDB;
- (id)objectForColumnName:(id)arg1;
- (id)stringForColumnName:(id)arg1;
- (id)dataForColumnName:(id)arg1;
- (_Bool)boolForColumnName:(id)arg1;
- (double)doubleForColumnName:(id)arg1;
- (long long)longLongForColumnName:(id)arg1;
- (int)intForColumnName:(id)arg1;
- (id)objectForColumnIndex:(int)arg1 type:(int)arg2;
- (id)objectForColumnIndex:(int)arg1;
- (id)stringForColumnIndex:(int)arg1;
- (id)dataForColumnIndex:(int)arg1;
- (_Bool)boolForColumnIndex:(int)arg1;
- (double)doubleForColumnIndex:(int)arg1;
- (long long)longLongForColumnIndex:(int)arg1;
- (int)intForColumnIndex:(int)arg1;
- (int)columnIndexForName:(id)arg1;
- (id)columnNameToIndexMap;
- (id)resultArray;
- (id)resultRowDictionary;
- (_Bool)next;
- (id)lastError;
- (void)close;
- (void)dealloc;
- (id)initWithStatement:(id)arg1 database:(id)arg2;

@end

