//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface PrivacyManager : NSObject
{
}

+ (void)OpenSetting;
+ (void)showAlertViewWithTitle:(id)arg1 message:(id)arg2 sure:(CDUnknownBlockType)arg3;
+ (void)showCameraNotDeterminedAlertView;
+ (void)requestCameraAccesscompletionHandler:(CDUnknownBlockType)arg1;
+ (void)checkCameraAuthorizationStatusAuthorized:(CDUnknownBlockType)arg1 NotDetermined:(CDUnknownBlockType)arg2 Denied:(CDUnknownBlockType)arg3;
+ (void)showPhotosNotDeterminedAlertView;
+ (void)requestPhotosAccesscompletionHandler:(CDUnknownBlockType)arg1;
+ (long long)checkPhotosAuthorizationStatus;

@end

