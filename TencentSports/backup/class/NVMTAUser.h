//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface NVMTAUser : NSObject
{
    int _userType;
    unsigned int _tagTime;
    NSString *_uid;
    NSString *_appVer;
}

@property unsigned int tagTime; // @synthesize tagTime=_tagTime;
@property(retain, nonatomic) NSString *appVer; // @synthesize appVer=_appVer;
@property int userType; // @synthesize userType=_userType;
@property(retain, nonatomic) NSString *uid; // @synthesize uid=_uid;
- (void).cxx_destruct;

@end

