//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSDictionary, NSError, WloginCustomParam;

@protocol PtLoginCallBackProtocol <NSObject>
- (void)webviewLoadFailed:(WloginCustomParam *)arg1 withError:(NSError *)arg2;
- (void)closePtLoginWindow:(WloginCustomParam *)arg1;
- (void)quickLoginFromPtLogin:(WloginCustomParam *)arg1 resultPtDict:(NSDictionary *)arg2;
@end
