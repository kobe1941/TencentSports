//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface TADQNNSCodingHelper : NSObject
{
}

+ (id)unarchiveObjectWithFile:(id)arg1 srcFilename:(const char *)arg2 lineNumber:(int)arg3;
+ (id)unarchiveObjectWithData:(id)arg1 srcFilename:(const char *)arg2 lineNumber:(int)arg3;
+ (id)archivedDataWithRootObject:(id)arg1 srcFilename:(const char *)arg2 lineNumber:(int)arg3;
+ (_Bool)saveArchivedDataWithRootObject:(id)arg1 saveFilePath:(id)arg2 srcFilename:(const char *)arg3 lineNumber:(int)arg4;
+ (id)p_lockForFilePath:(id)arg1;
+ (void)initialize;

@end

