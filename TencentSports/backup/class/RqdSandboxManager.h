//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface RqdSandboxManager : NSObject
{
}

+ (id)dataWithContentsOfFile:(id)arg1;
+ (id)dictionaryWithContentsOfFile:(id)arg1;
+ (id)arrayWithContentsOfFile:(id)arg1;
+ (id)applicationSupportDirectory;
+ (id)sharedManager;
- (id)filePathOfTodayConfig;
- (id)deleteBlockData;
- (id)searchBlockDumpDataFile;
- (id)directoryBlockData;
- (void)saveBlockDumpData:(id)arg1;
- (void)removeFiles:(id)arg1;
- (id)createFile:(id)arg1 directory:(id)arg2;
- (_Bool)createDirectoryAtPathIfNeeded:(id)arg1;
- (id)directoryForPathComponent:(id)arg1;
- (id)rootDirectory;
- (void)createApplicationSupportDirectoryIfNeeded;
- (id)init;

@end

