//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSString, QSScheduleCircleProgressView, UILabel;

__attribute__((visibility("hidden")))
@interface QSScheduleMatchProgressView : UIView
{
    long long _progress;
    NSString *_period;
    QSScheduleCircleProgressView *_circleProgressView;
    UILabel *_textLabel;
}

@property(retain, nonatomic) UILabel *textLabel; // @synthesize textLabel=_textLabel;
@property(retain, nonatomic) QSScheduleCircleProgressView *circleProgressView; // @synthesize circleProgressView=_circleProgressView;
@property(retain, nonatomic) NSString *period; // @synthesize period=_period;
@property(nonatomic) long long progress; // @synthesize progress=_progress;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect)arg1;

@end
