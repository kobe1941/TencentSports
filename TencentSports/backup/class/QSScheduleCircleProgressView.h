//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class CAShapeLayer, CATextLayer;

__attribute__((visibility("hidden")))
@interface QSScheduleCircleProgressView : UIView
{
    double _progress;
    CAShapeLayer *_progressLayer;
    CATextLayer *_textLayer;
}

+ (Class)layerClass;
@property(retain, nonatomic) CATextLayer *textLayer; // @synthesize textLayer=_textLayer;
@property(retain, nonatomic) CAShapeLayer *progressLayer; // @synthesize progressLayer=_progressLayer;
@property(nonatomic) double progress; // @synthesize progress=_progress;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect)arg1;

@end

