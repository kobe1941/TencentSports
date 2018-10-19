//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface AppUtils : NSObject
{
    NSString *_deviceToken;
    NSString *_vipTips;
}

+ (id)IPV6Prefx;
+ (_Bool)isNeedToChangeIpv4ToIpv6;
+ (_Bool)isPushEnabled;
+ (void)updateLocalGUID:(id)arg1;
+ (id)userDefaultUUIDKey;
+ (id)resetLocalGUID;
+ (id)getGUIDFromKeychain;
+ (id)getLocalGUID;
+ (id)getKeyChainServiceName;
+ (id)getKeyChainUserName;
+ (id)fullBundleDisplayName;
+ (id)bundleID;
+ (id)getAppBuildNumber;
+ (id)getAppBuildVersion;
+ (id)getAppVersion;
+ (id)bundleSeedID;
+ (id)getGUID;
+ (id)getAppBuildVersionFull;
+ (id)sharedInstance;
+ (int)JCE_getMarkId;
+ (id)JCE_getPlatformVersion;
+ (int)JCE_getPlatform;
+ (int)JCE_getScreenHeightOfPortrait;
+ (int)JCE_getScreenWidthOfPortrait;
+ (id)JCE_getVersionCode;
+ (id)JCE_getVersionName;
@property(copy, nonatomic) NSString *vipTips; // @synthesize vipTips=_vipTips;
@property(copy, nonatomic) NSString *deviceToken; // @synthesize deviceToken=_deviceToken;
- (void)updateVipTips:(id)arg1;
- (id)getVipTips;
- (void)dealloc;

@end

