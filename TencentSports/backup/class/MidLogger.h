//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSHashTable;

@interface MidLogger : NSObject
{
    NSHashTable *_mDelegateTables;
}

+ (id)getFormatDateString;
+ (id)getFormatLogLevel:(unsigned long long)arg1;
+ (void)logSync:(id)arg1;
+ (id)formatLog:(unsigned long long)arg1 function:(const char *)arg2 line:(unsigned long long)arg3 message:(id)arg4;
+ (void)log:(unsigned long long)arg1 function:(const char *)arg2 line:(unsigned long long)arg3 format:(id)arg4;
+ (id)shareInstance;
@property(retain) NSHashTable *mDelegateTables; // @synthesize mDelegateTables=_mDelegateTables;
- (void).cxx_destruct;
- (void)setLogCallback:(id)arg1;
- (id)init;

@end
