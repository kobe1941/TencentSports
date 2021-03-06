//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class CADisplayLink;
@protocol QSComPublishTakeVideoProgressViewDelegate;

__attribute__((visibility("hidden")))
@interface QSComPublishTakeVideoProgressView : UIView
{
    _Bool _isTakePhotoMode;
    id <QSComPublishTakeVideoProgressViewDelegate> _delegate;
    double _maximumDuration;
    unsigned long long _frameIntervalCount;
    CADisplayLink *_displayLink;
    double _takeVideoBeginTime;
    double _currentDuration;
}

@property(nonatomic) double currentDuration; // @synthesize currentDuration=_currentDuration;
@property(nonatomic) double takeVideoBeginTime; // @synthesize takeVideoBeginTime=_takeVideoBeginTime;
@property(retain, nonatomic) CADisplayLink *displayLink; // @synthesize displayLink=_displayLink;
@property(nonatomic) unsigned long long frameIntervalCount; // @synthesize frameIntervalCount=_frameIntervalCount;
@property(nonatomic) _Bool isTakePhotoMode; // @synthesize isTakePhotoMode=_isTakePhotoMode;
@property(nonatomic) double maximumDuration; // @synthesize maximumDuration=_maximumDuration;
@property(nonatomic) __weak id <QSComPublishTakeVideoProgressViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)userDidTap:(id)arg1;
- (void)userDidLongPress:(id)arg1;
- (void)stopAnimation;
- (void)updateAnimation;
- (void)startAnimation;
- (void)drawRect:(struct CGRect)arg1;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

@end

