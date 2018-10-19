//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class QSPlayerBarrageInfo;
@protocol QSPlayerBarrageCellDelegate;

__attribute__((visibility("hidden")))
@interface QSPlayerBarrageCell : UIView
{
    _Bool _isPaused;
    QSPlayerBarrageInfo *_barrageInfo;
    id <QSPlayerBarrageCellDelegate> _delegate;
    double _beginTimestamp;
    double _velocity;
}

+ (double)widthForBarrageInfo:(id)arg1;
+ (double)defaultHeight;
+ (id)reuseIdentifierFromBarrageInfo;
@property(readonly, nonatomic) _Bool isPaused; // @synthesize isPaused=_isPaused;
@property(nonatomic) double velocity; // @synthesize velocity=_velocity;
@property(nonatomic) double beginTimestamp; // @synthesize beginTimestamp=_beginTimestamp;
@property(nonatomic) __weak id <QSPlayerBarrageCellDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) QSPlayerBarrageInfo *barrageInfo; // @synthesize barrageInfo=_barrageInfo;
- (void).cxx_destruct;
- (void)pause;
- (void)updateWithTimestamp:(double)arg1 duration:(double)arg2;
- (void)didMoveToWindow;
- (void)updateUI;
- (void)setFrame:(struct CGRect)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

