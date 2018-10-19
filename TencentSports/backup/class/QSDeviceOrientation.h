//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class CMMotionManager, NSLock, NSMutableSet;

__attribute__((visibility("hidden")))
@interface QSDeviceOrientation : NSObject
{
    CMMotionManager *_motionManager;
    long long _currentDeviceOrientation;
    NSMutableSet *_objectSet;
    NSLock *_lock;
}

+ (id)sharedInstance;
@property(retain, nonatomic) NSLock *lock; // @synthesize lock=_lock;
@property(retain, nonatomic) NSMutableSet *objectSet; // @synthesize objectSet=_objectSet;
@property(nonatomic) long long currentDeviceOrientation; // @synthesize currentDeviceOrientation=_currentDeviceOrientation;
@property(retain, nonatomic) CMMotionManager *motionManager; // @synthesize motionManager=_motionManager;
- (void).cxx_destruct;
- (void)handleDeviceMotion:(id)arg1;
- (void)stopMotionManager;
- (void)startMotionManager;
- (void)removeObjectIdentifier:(id)arg1;
- (long long)getCurrentDeviceOrientationInContext:(id)arg1;

@end

