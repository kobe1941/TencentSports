//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class TADProfilerStage;

@interface TADProfiler : NSObject
{
    double _applicationLaunchTime;
    TADProfilerStage *_currentStage;
}

+ (id)sharedInstance;
@property(retain, nonatomic) TADProfilerStage *currentStage; // @synthesize currentStage=_currentStage;
@property(nonatomic) double applicationLaunchTime; // @synthesize applicationLaunchTime=_applicationLaunchTime;
- (void)checkpoint:(id)arg1 file:(const char *)arg2 line:(int)arg3;
- (void)enterStage:(id)arg1;
- (void)dealloc;
- (id)init;

@end
