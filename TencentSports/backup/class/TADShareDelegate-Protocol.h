//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class TADShareItem, UIViewController;

@protocol TADShareDelegate <NSObject>
- (void)shareTo:(unsigned long long)arg1 with:(TADShareItem *)arg2 inContentController:(UIViewController *)arg3 completion:(void (^)(_Bool, long long, id))arg4;
@end

