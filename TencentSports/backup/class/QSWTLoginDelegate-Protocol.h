//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSError, QSWTLogin;

@protocol QSWTLoginDelegate <NSObject>
- (void)wtLoginDidFailed:(QSWTLogin *)arg1 didFailedWithError:(NSError *)arg2;
- (void)wtLoginDidSucceed:(QSWTLogin *)arg1;
@end
