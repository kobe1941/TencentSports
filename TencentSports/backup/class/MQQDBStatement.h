//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface MQQDBStatement : NSObject
{
    struct sqlite3_stmt *_stmt;
    NSString *_sqlString;
}

@property(copy, nonatomic) NSString *sqlString; // @synthesize sqlString=_sqlString;
@property(nonatomic) struct sqlite3_stmt *stmt; // @synthesize stmt=_stmt;
- (void)dealloc;
- (void)finalize;
- (void)_finalize;
- (void)close;
- (void)reset;

@end

