//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray, NSString, NSTimer;

@interface QLLiveV3TitleUpdateOperation : NSObject
{
    NSMutableArray *_delegates;
    NSTimer *_titleUpdateTimer;
    long long _titleUpdateInterval;
    long long _currentTotal;
    long long _showTotal;
    long long _updateTimerCounter;
    NSString *_title;
}

@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(nonatomic) long long updateTimerCounter; // @synthesize updateTimerCounter=_updateTimerCounter;
@property(nonatomic) long long showTotal; // @synthesize showTotal=_showTotal;
@property(nonatomic) long long currentTotal; // @synthesize currentTotal=_currentTotal;
@property(nonatomic) long long titleUpdateInterval; // @synthesize titleUpdateInterval=_titleUpdateInterval;
@property(retain, nonatomic) NSTimer *titleUpdateTimer; // @synthesize titleUpdateTimer=_titleUpdateTimer;
- (void)dealloc;
- (void)updateTitle:(id)arg1 WithCount:(long long)arg2;
- (void)updateTitle:(long long)arg1;
- (void)updateCurrentTotal:(long long)arg1 updateIntervel:(long long)arg2 title:(id)arg3;
- (id)findValueWithObserver:(id)arg1;
- (void)removeTitleObserver:(id)arg1;
- (void)addTitleObserver:(id)arg1;
- (void)updateTitlePerSecond:(id)arg1;
- (void)createTtitleUpdateTimer;
- (void)destroyTitleUpdateTimer;
- (void)resetValue;
- (id)init;

@end
