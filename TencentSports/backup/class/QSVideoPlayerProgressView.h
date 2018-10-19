//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSArray, UIColor;
@protocol QSVideoPlayerProgressViewDelegate;

__attribute__((visibility("hidden")))
@interface QSVideoPlayerProgressView : UIView
{
    _Bool _userDragCursor;
    _Bool _userLongPressInMarkPoisition;
    _Bool _userLongPressMovedAwayFromMarkPoisition;
    _Bool _shouldPreventTapGestureRecognizer;
    id <QSVideoPlayerProgressViewDelegate> _delegate;
    double _minValue;
    double _maxValue;
    double _cursorValue;
    NSArray *_markPositions;
    unsigned long long _style;
    UIColor *_minTrackTintColor;
    UIColor *_maxTrackTintColor;
    UIColor *_cursorColor;
    UIColor *_cursorDragColor;
    double _markValueWhenUserDragCursor;
    double _markValueWhenUserBeginLongPress;
    struct CGPoint _touchPointWhenUserDragCursor;
    struct CGPoint _touchStartPoint;
}

@property(nonatomic) struct CGPoint touchStartPoint; // @synthesize touchStartPoint=_touchStartPoint;
@property(nonatomic) _Bool shouldPreventTapGestureRecognizer; // @synthesize shouldPreventTapGestureRecognizer=_shouldPreventTapGestureRecognizer;
@property(nonatomic) _Bool userLongPressMovedAwayFromMarkPoisition; // @synthesize userLongPressMovedAwayFromMarkPoisition=_userLongPressMovedAwayFromMarkPoisition;
@property(nonatomic) double markValueWhenUserBeginLongPress; // @synthesize markValueWhenUserBeginLongPress=_markValueWhenUserBeginLongPress;
@property(nonatomic) _Bool userLongPressInMarkPoisition; // @synthesize userLongPressInMarkPoisition=_userLongPressInMarkPoisition;
@property(nonatomic) double markValueWhenUserDragCursor; // @synthesize markValueWhenUserDragCursor=_markValueWhenUserDragCursor;
@property(nonatomic) struct CGPoint touchPointWhenUserDragCursor; // @synthesize touchPointWhenUserDragCursor=_touchPointWhenUserDragCursor;
@property(nonatomic) _Bool userDragCursor; // @synthesize userDragCursor=_userDragCursor;
@property(retain, nonatomic) UIColor *cursorDragColor; // @synthesize cursorDragColor=_cursorDragColor;
@property(retain, nonatomic) UIColor *cursorColor; // @synthesize cursorColor=_cursorColor;
@property(retain, nonatomic) UIColor *maxTrackTintColor; // @synthesize maxTrackTintColor=_maxTrackTintColor;
@property(retain, nonatomic) UIColor *minTrackTintColor; // @synthesize minTrackTintColor=_minTrackTintColor;
@property(nonatomic) unsigned long long style; // @synthesize style=_style;
@property(retain, nonatomic) NSArray *markPositions; // @synthesize markPositions=_markPositions;
@property(nonatomic) double cursorValue; // @synthesize cursorValue=_cursorValue;
@property(nonatomic) double maxValue; // @synthesize maxValue=_maxValue;
@property(nonatomic) double minValue; // @synthesize minValue=_minValue;
@property(nonatomic) __weak id <QSVideoPlayerProgressViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)userDidLongPress:(id)arg1;
- (void)userDidPressPan:(id)arg1;
- (void)userDidTap:(id)arg1;
- (double)markValueWithTouchPoint:(struct CGPoint)arg1;
- (void)drawInitProgressViewWithContext:(struct CGContext *)arg1;
- (void)drawCursorValueWithContext:(struct CGContext *)arg1;
- (void)drawMarkValueInMarkPositions:(id)arg1;
- (void)drawRectFromCursorValueToMaxValue;
- (void)drawRectFromMinValueToCursorValue;
- (void)checkCursorValue;
- (void)updateCursorValueWhenUserDragCursor;
- (void)update;
- (void)drawRect:(struct CGRect)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)init;

@end
