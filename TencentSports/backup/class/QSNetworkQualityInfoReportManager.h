//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray, NSNumber, QSHTTPRequestOperation;

__attribute__((visibility("hidden")))
@interface QSNetworkQualityInfoReportManager : NSObject
{
    QSHTTPRequestOperation *_pingTestRequest;
    NSMutableArray *_pendingQualityInfos;
    NSMutableArray *_pendingBlocks;
    NSNumber *_reportFlag;
    double _reportFlagUpdateTime;
}

+ (id)sharedInstance;
@property(nonatomic) double reportFlagUpdateTime; // @synthesize reportFlagUpdateTime=_reportFlagUpdateTime;
@property(copy, nonatomic) NSNumber *reportFlag; // @synthesize reportFlag=_reportFlag;
@property(retain, nonatomic) NSMutableArray *pendingBlocks; // @synthesize pendingBlocks=_pendingBlocks;
@property(retain, nonatomic) NSMutableArray *pendingQualityInfos; // @synthesize pendingQualityInfos=_pendingQualityInfos;
@property(retain, nonatomic) QSHTTPRequestOperation *pingTestRequest; // @synthesize pingTestRequest=_pingTestRequest;
- (void).cxx_destruct;
- (_Bool)reportFlagIsValidWithCurrentTime:(double)arg1;
- (void)startPingTestWithCurrentTime:(double)arg1;
- (void)getPingTestValueWithBlock:(CDUnknownBlockType)arg1;
- (void)reportNetworkQualityInfo:(id)arg1 needPingTest:(_Bool)arg2;
- (id)init;

@end
