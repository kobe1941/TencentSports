//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface QBBeaconBundleUtil : NSObject
{
}

+ (_Bool)deleteItemForUsername:(id)arg1 andServiceName:(id)arg2 error:(id *)arg3;
+ (_Bool)storeUsername:(id)arg1 andPassword:(id)arg2 forServiceName:(id)arg3 updateExisting:(_Bool)arg4 error:(id *)arg5;
+ (id)getPasswordForUsername:(id)arg1 andServiceName:(id)arg2 error:(id *)arg3;
+ (id)getBundleShortVer;
+ (id)getBundleVersion;
+ (id)getBundleId;
+ (id)getQimei;
+ (_Bool)saveQimei:(id)arg1;
+ (id)initWithCoder:(id)arg1 forObject:(id)arg2;
+ (void)encodeWithCoder:(id)arg1 forObject:(id)arg2;

@end

