//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSNumber, NSString;

@interface ODKTestSpeedResult : NSObject
{
    NSString *_host;
    NSNumber *_port;
    NSString *_ip;
    NSNumber *_returnCode;
    NSNumber *_timestamp;
    NSNumber *_timeconsuming;
}

@property(retain, nonatomic) NSNumber *timeconsuming; // @synthesize timeconsuming=_timeconsuming;
@property(retain, nonatomic) NSNumber *timestamp; // @synthesize timestamp=_timestamp;
@property(retain, nonatomic) NSNumber *returnCode; // @synthesize returnCode=_returnCode;
@property(retain, nonatomic) NSString *ip; // @synthesize ip=_ip;
@property(retain, nonatomic) NSNumber *port; // @synthesize port=_port;
@property(retain, nonatomic) NSString *host; // @synthesize host=_host;
- (void).cxx_destruct;
- (id)toJsonString;

@end

