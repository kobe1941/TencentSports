//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface ODKAppMonitorStat : NSObject
{
    unsigned int _requestPackageSize;
    unsigned int _responsePackageSize;
    int _returnCode;
    int _resultType;
    unsigned int _sampling;
    NSString *_interface;
    unsigned long long _consumedMilliseconds;
}

@property unsigned int sampling; // @synthesize sampling=_sampling;
@property int resultType; // @synthesize resultType=_resultType;
@property int returnCode; // @synthesize returnCode=_returnCode;
@property unsigned long long consumedMilliseconds; // @synthesize consumedMilliseconds=_consumedMilliseconds;
@property unsigned int responsePackageSize; // @synthesize responsePackageSize=_responsePackageSize;
@property unsigned int requestPackageSize; // @synthesize requestPackageSize=_requestPackageSize;
@property(retain, nonatomic) NSString *interface; // @synthesize interface=_interface;
- (void).cxx_destruct;

@end

