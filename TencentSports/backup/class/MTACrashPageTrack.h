//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray;
@protocol OS_dispatch_queue;

@interface MTACrashPageTrack : NSObject
{
    NSMutableArray *_tpg;
    NSObject<OS_dispatch_queue> *_taskQueue;
}

+ (id)sharedInstance;
+ (void)load;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *taskQueue; // @synthesize taskQueue=_taskQueue;
@property(retain, nonatomic) NSMutableArray *tpg; // @synthesize tpg=_tpg;
- (void).cxx_destruct;
- (void)onApplicationDidFinishLaunch:(id)arg1;
- (void)onApplicationDidBecomeActive:(id)arg1;
- (void)onApplicationWillResignActive:(id)arg1;
- (void)registerObserver;
- (void)pageTrack:(id)arg1;
- (void)asyncInQueue:(CDUnknownBlockType)arg1;
- (id)init;

@end
