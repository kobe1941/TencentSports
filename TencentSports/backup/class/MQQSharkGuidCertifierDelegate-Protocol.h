//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class MQQSharkGuidCertifier, NSError;

@protocol MQQSharkGuidCertifierDelegate <NSObject>
- (void)guidCertifierDidFailInRSAVerification:(MQQSharkGuidCertifier *)arg1;
- (void)guidCertifier:(MQQSharkGuidCertifier *)arg1 didRegistWithError:(NSError *)arg2;
@end
