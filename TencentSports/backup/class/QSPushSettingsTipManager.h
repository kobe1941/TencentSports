//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "UIAlertViewDelegate-Protocol.h"

@class NSString;

__attribute__((visibility("hidden")))
@interface QSPushSettingsTipManager : NSObject <UIAlertViewDelegate>
{
}

+ (id)sharedInstance;
- (void)alertView:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)showAlertForOpenPush;
- (void)showPushTipWhenClosed;
- (void)saveToLocalAfterAlert;
- (_Bool)checkIsFirstForToday;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
