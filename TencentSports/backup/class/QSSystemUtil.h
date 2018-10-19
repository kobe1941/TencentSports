//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface QSSystemUtil : NSObject
{
}

+ (id)currentWifiSSID;
+ (void)blockCurrentRunloopWithMinTimeInterval:(double)arg1 operation:(CDUnknownBlockType)arg2;
+ (void)performBlockOnMainThread:(CDUnknownBlockType)arg1;
+ (void)performBlock:(CDUnknownBlockType)arg1 onRunLoop:(struct __CFRunLoop *)arg2;
+ (CDUnknownBlockType)setWatchDogForTimeOut:(double)arg1 queue:(id)arg2 completion:(CDUnknownBlockType)arg3;
+ (int)compareVersion:(id)arg1 version2:(id)arg2;
+ (id)deviceModelDescription;
+ (id)currentNetworkDescription;
+ (struct CGSize)screenSize;
+ (id)getAppVersion;
+ (id)appBundleID;
+ (id)appBuild;
+ (id)appVersion;
+ (id)appChannel;
+ (id)getVersion;
+ (_Bool)isRdmVersion;
+ (float)currentIOSVersion;
+ (id)currentIOSVersionDescription;
+ (long long)indexForPagingScrollView:(id)arg1;
+ (float)currentfreeSpaceSize;
+ (id)pathForResourceBundleWithName:(id)arg1 type:(id)arg2 directory:(id)arg3;
+ (id)pathForMainBundleResource:(id)arg1;
+ (void)copyFileFrom:(id)arg1 to:(id)arg2;
+ (void)moveFileFrom:(id)arg1 to:(id)arg2;
+ (void)deleteItem:(id)arg1;
+ (_Bool)directoryExist:(id)arg1;
+ (_Bool)fileExist:(id)arg1;
+ (unsigned long long)getFileSize:(id)arg1;
+ (void)setItemModifed:(id)arg1;
+ (id)getItemModifiedTime:(id)arg1;
+ (id)getItemCreatedTime:(id)arg1;
+ (void)checkDirectoryPath:(id)arg1;
+ (id)getDirectoryInCacheWithName:(id)arg1;
+ (id)getAllDirectoriesInCache;
+ (id)getDirectoryInDocumentWithName:(id)arg1;
+ (id)getCacheDirectory;
+ (id)getDocumentDirectory;
+ (id)newGUIDEx;
+ (id)newGUID;
+ (double)statusBarHeight;
+ (long long)currentDeviceType;
+ (struct CGSize)deviceSize;

@end
