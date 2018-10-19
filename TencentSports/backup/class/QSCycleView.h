//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSMutableArray, NSTimer, UISwipeGestureRecognizer, UITapGestureRecognizer;
@protocol QSCycleViewDelegate;

__attribute__((visibility("hidden")))
@interface QSCycleView : UIView
{
    _Bool _isAnimating;
    _Bool _needsReloadAfterAnimating;
    id <QSCycleViewDelegate> _delegate;
    UISwipeGestureRecognizer *_swipeDownGesture;
    UISwipeGestureRecognizer *_swipeUpGesture;
    NSMutableArray *_reusedCells;
    long long _count;
    long long _curIndex;
    UIView *_currentCell;
    UITapGestureRecognizer *_tapGesture;
    NSTimer *_timer;
}

@property(nonatomic) _Bool needsReloadAfterAnimating; // @synthesize needsReloadAfterAnimating=_needsReloadAfterAnimating;
@property(nonatomic) _Bool isAnimating; // @synthesize isAnimating=_isAnimating;
@property(retain, nonatomic) NSTimer *timer; // @synthesize timer=_timer;
@property(retain, nonatomic) UITapGestureRecognizer *tapGesture; // @synthesize tapGesture=_tapGesture;
@property(retain, nonatomic) UIView *currentCell; // @synthesize currentCell=_currentCell;
@property(nonatomic) long long curIndex; // @synthesize curIndex=_curIndex;
@property(nonatomic) long long count; // @synthesize count=_count;
@property(retain, nonatomic) NSMutableArray *reusedCells; // @synthesize reusedCells=_reusedCells;
@property(retain, nonatomic) UISwipeGestureRecognizer *swipeUpGesture; // @synthesize swipeUpGesture=_swipeUpGesture;
@property(retain, nonatomic) UISwipeGestureRecognizer *swipeDownGesture; // @synthesize swipeDownGesture=_swipeDownGesture;
@property(nonatomic) __weak id <QSCycleViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (_Bool)cellShouldBeAddedToReusedCells:(id)arg1;
- (void)cycleLast;
- (void)cycleNext;
- (void)tapGestureDidTrigger:(id)arg1;
- (void)swipeUpGestureDidTrigger:(id)arg1;
- (void)swipeDownGestureDidTrigger:(id)arg1;
- (void)timerFired:(id)arg1;
- (void)updateTimer;
- (void)updateBaseCells;
- (void)updateGestures;
- (id)dequeueReusedCellWithCellClass:(Class)arg1;
- (void)reloadData;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)didMoveToWindow;

@end

