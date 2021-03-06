//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSError, QSCombiningData, QSStatedData;

@protocol QSCombiningDataDelegate <NSObject>
- (void)combiningData:(QSCombiningData *)arg1 didFinishLoadWithData:(QSStatedData *)arg2 error:(NSError *)arg3;
- (void)combiningData:(QSCombiningData *)arg1 willStartLoadWithData:(QSStatedData *)arg2;
- (void)combiningDataDidReadCacheSucceed:(QSCombiningData *)arg1;

@optional
- (void)combiningDataDidAllDataIsReady:(QSCombiningData *)arg1;
- (void)combiningDataDidUpdateDataSucceed:(QSCombiningData *)arg1;
@end

