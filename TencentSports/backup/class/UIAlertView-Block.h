//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIAlertView.h>

#import "UIAlertViewDelegate-Protocol.h"

@class NSString;

@interface UIAlertView (Block) <UIAlertViewDelegate>
+ (void)alertView:(id)arg1 didDismissWithButtonIndex:(long long)arg2;
+ (id)alertViewWithTitle:(id)arg1 message:(id)arg2 cancelButtonTitle:(id)arg3;
+ (id)alertViewWithTitle:(id)arg1 message:(id)arg2 cancelButtonTitle:(id)arg3 otherButtonTitles:(id)arg4 onDismiss:(CDUnknownBlockType)arg5 onCancel:(CDUnknownBlockType)arg6;
+ (id)alertViewWithTitle:(id)arg1 message:(id)arg2 cancelButtonTitle:(id)arg3 otherButtonTitles:(id)arg4 subViews:(id)arg5 onDismiss:(CDUnknownBlockType)arg6 onCancel:(CDUnknownBlockType)arg7;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@end

