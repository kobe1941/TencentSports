//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSDictionary, NSString;

@protocol QLMTADelegate <NSObject>
- (void)trackCustomKeyValueEventEnd:(NSString *)arg1 props:(NSDictionary *)arg2;
- (void)trackCustomKeyValueEventBegin:(NSString *)arg1 props:(NSDictionary *)arg2;
- (void)trackCustomKeyValueEvent:(NSString *)arg1 props:(NSDictionary *)arg2;
- (NSString *)getCustomProperty:(NSString *)arg1 defaultValue:(NSString *)arg2;
- (void)setCustomerUserID:(NSString *)arg1;
- (void)resetMTA;
@end

