//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSString;

@protocol IRMonitorDelegate <NSObject>
- (void)sendFailsHandle:(long long)arg1;
- (void)sendCallback:(_Bool)arg1;
- (void)beginSendDataCallbackWithAppkey:(NSString *)arg1 andUid:(NSString *)arg2;
@end

