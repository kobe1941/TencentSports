//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface MidUtils : NSObject
{
}

+ (id)processSpecialCharacters:(id)arg1;
+ (void)saveServerRandom:(id)arg1;
+ (id)getServerRandom;
+ (id)getUUID;
+ (id)getSign;
+ (_Bool)needRefreshMID;
+ (id)getBundleSeedID;
+ (void)saveHeartBeatDate:(id)arg1;
+ (id)getLastHeartBeatDate;
+ (id)getAppVersion;
+ (id)getNetWorkError:(int)arg1 customMsg:(id)arg2;
+ (double)getCurrentTimeInterval;
+ (id)getLocalDate;
+ (id)cpuUsage;
+ (unsigned long long)cpuCount;
+ (long long)totalDiskSpaceBytes;
+ (long long)freeDiskSpaceBytes;
+ (unsigned long long)getSysInfo:(unsigned int)arg1;
+ (long long)freeMemoryBytes;
+ (unsigned long long)totalMemoryBytes;
+ (_Bool)pingReachabilityInternal;
+ (_Bool)networkAvailable;
+ (id)fetchSSIDInfo;
+ (_Bool)isWifiConnected;
+ (id)getIDFV;
+ (id)getIDFA;
+ (id)getDefaultTimeZone;
+ (id)getLanguage;
+ (id)getOperator;
+ (id)getDeviceModel;
+ (id)getDeviceOSVersion;
+ (id)getDeviceResolution;
+ (id)getTodayBeginTime;

@end

