//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray;

@interface TADBlurScheduler : NSObject
{
    _Bool _blurEnabled;
    _Bool _updating;
    NSMutableArray *_views;
    unsigned long long _viewIndex;
    unsigned long long _updatesEnabled;
}

+ (id)sharedInstance;
@property(nonatomic) _Bool updating; // @synthesize updating=_updating;
@property(nonatomic) _Bool blurEnabled; // @synthesize blurEnabled=_blurEnabled;
@property(nonatomic) unsigned long long updatesEnabled; // @synthesize updatesEnabled=_updatesEnabled;
@property(nonatomic) unsigned long long viewIndex; // @synthesize viewIndex=_viewIndex;
@property(retain, nonatomic) NSMutableArray *views; // @synthesize views=_views;
- (void).cxx_destruct;
- (void)updateAsynchronously;
- (void)removeView:(id)arg1;
- (void)addView:(id)arg1;
- (void)setUpdatesDisabled;
- (void)setUpdatesEnabled;
- (id)init;

@end

