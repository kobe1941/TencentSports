//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "LOTNumberValueDelegate-Protocol.h"

@class NSString;

__attribute__((visibility("hidden")))
@interface LOTFloatInterpolatorCallback : NSObject <LOTNumberValueDelegate>
{
    double _fromFloat;
    double _toFloat;
    double _currentProgress;
}

+ (id)withFromFloat:(double)arg1 toFloat:(double)arg2;
@property(nonatomic) double currentProgress; // @synthesize currentProgress=_currentProgress;
@property(nonatomic) double toFloat; // @synthesize toFloat=_toFloat;
@property(nonatomic) double fromFloat; // @synthesize fromFloat=_fromFloat;
- (double)floatValueForFrame:(double)arg1 startKeyframe:(double)arg2 endKeyframe:(double)arg3 interpolatedProgress:(double)arg4 startValue:(double)arg5 endValue:(double)arg6 currentValue:(double)arg7;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

