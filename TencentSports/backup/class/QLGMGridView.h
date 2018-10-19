//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIScrollView.h>

#import "UIGestureRecognizerDelegate-Protocol.h"
#import "UIScrollViewDelegate-Protocol.h"

@class NSArray, NSMutableSet, NSObject, NSString, QLGMGridViewCell, UILongPressGestureRecognizer, UIPanGestureRecognizer, UIPinchGestureRecognizer, UIRotationGestureRecognizer, UITapGestureRecognizer, UIView;
@protocol QLGMGridViewActionDelegate, QLGMGridViewDataSource, QLGMGridViewLayoutStrategy, QLGMGridViewSortingDelegate, QLGMGridViewTransformationDelegate;

@interface QLGMGridView : UIScrollView <UIGestureRecognizerDelegate, UIScrollViewDelegate>
{
    UIPanGestureRecognizer *_sortingPanGesture;
    UILongPressGestureRecognizer *_longPressGesture;
    UIPinchGestureRecognizer *_pinchGesture;
    UITapGestureRecognizer *_tapGesture;
    UIRotationGestureRecognizer *_rotationGesture;
    UIPanGestureRecognizer *_panGesture;
    long long _numberTotalItems;
    struct CGSize _itemSize;
    NSMutableSet *_reusableCells;
    QLGMGridViewCell *_sortMovingItem;
    long long _sortFuturePosition;
    _Bool _autoScrollActive;
    struct CGPoint _minPossibleContentOffset;
    struct CGPoint _maxPossibleContentOffset;
    QLGMGridViewCell *_transformingItem;
    double _lastRotation;
    double _lastScale;
    _Bool _inFullSizeMode;
    _Bool _inTransformingState;
    _Bool _rotationActive;
    _Bool _centerGrid;
    _Bool showFullSizeViewWithAlphaWhenTransforming;
    _Bool _editing;
    _Bool enableEditOnLongPress;
    _Bool disableEditOnEmptySpaceTap;
    _Bool superViewScrolling;
    _Bool _itemsSubviewsCacheIsValid;
    int _style;
    NSObject<QLGMGridViewSortingDelegate> *_sortingDelegate;
    NSObject<QLGMGridViewDataSource> *_dataSource;
    NSObject<QLGMGridViewTransformationDelegate> *_transformDelegate;
    NSObject<QLGMGridViewActionDelegate> *_actionDelegate;
    UIView *_mainSuperView;
    id <QLGMGridViewLayoutStrategy> _layoutStrategy;
    long long _horizontalItemSpacing;
    long long _verticalItemSpacing;
    NSArray *itemSubviewsCache;
    long long _firstPositionLoaded;
    long long _lastPositionLoaded;
    struct UIEdgeInsets _minEdgeInsets;
}

@property long long lastPositionLoaded; // @synthesize lastPositionLoaded=_lastPositionLoaded;
@property long long firstPositionLoaded; // @synthesize firstPositionLoaded=_firstPositionLoaded;
@property(retain, nonatomic) NSArray *itemSubviewsCache; // @synthesize itemSubviewsCache;
@property(readonly, nonatomic) _Bool itemsSubviewsCacheIsValid; // @synthesize itemsSubviewsCacheIsValid=_itemsSubviewsCacheIsValid;
@property(nonatomic) _Bool superViewScrolling; // @synthesize superViewScrolling;
@property(nonatomic) _Bool disableEditOnEmptySpaceTap; // @synthesize disableEditOnEmptySpaceTap;
@property(nonatomic) _Bool enableEditOnLongPress; // @synthesize enableEditOnLongPress;
@property(nonatomic, getter=isEditing) _Bool editing; // @synthesize editing=_editing;
@property(nonatomic) _Bool showFullSizeViewWithAlphaWhenTransforming; // @synthesize showFullSizeViewWithAlphaWhenTransforming;
@property(nonatomic) struct UIEdgeInsets minEdgeInsets; // @synthesize minEdgeInsets=_minEdgeInsets;
@property(nonatomic) _Bool centerGrid; // @synthesize centerGrid=_centerGrid;
@property(nonatomic) int style; // @synthesize style=_style;
@property(nonatomic) long long verticalItemSpacing; // @synthesize verticalItemSpacing=_verticalItemSpacing;
@property(nonatomic) long long horizontalItemSpacing; // @synthesize horizontalItemSpacing=_horizontalItemSpacing;
@property(retain, nonatomic) id <QLGMGridViewLayoutStrategy> layoutStrategy; // @synthesize layoutStrategy=_layoutStrategy;
@property(nonatomic) __weak UIView *mainSuperView; // @synthesize mainSuperView=_mainSuperView;
@property(nonatomic) __weak NSObject<QLGMGridViewActionDelegate> *actionDelegate; // @synthesize actionDelegate=_actionDelegate;
@property(nonatomic) __weak NSObject<QLGMGridViewTransformationDelegate> *transformDelegate; // @synthesize transformDelegate=_transformDelegate;
@property(nonatomic) __weak NSObject<QLGMGridViewDataSource> *dataSource; // @synthesize dataSource=_dataSource;
@property(nonatomic) __weak NSObject<QLGMGridViewSortingDelegate> *sortingDelegate; // @synthesize sortingDelegate=_sortingDelegate;
- (void).cxx_destruct;
@property(readonly, nonatomic) UIScrollView *scrollView;
- (void)swapObjectAtIndex:(long long)arg1 withObjectAtIndex:(long long)arg2 withAnimation:(int)arg3;
- (void)swapObjectAtIndex:(long long)arg1 withObjectAtIndex:(long long)arg2 animated:(_Bool)arg3;
- (void)removeObjectAtIndex:(long long)arg1 withAnimation:(int)arg2;
- (void)removeObjectAtIndex:(long long)arg1 animated:(_Bool)arg2;
- (void)insertObjectAtIndex:(long long)arg1 withAnimation:(int)arg2;
- (void)insertObjectAtIndex:(long long)arg1 animated:(_Bool)arg2;
- (void)scrollToObjectAtIndex:(long long)arg1 atScrollPosition:(int)arg2 animated:(_Bool)arg3;
- (void)reloadObjectAtIndex:(long long)arg1 withAnimation:(int)arg2;
- (void)reloadObjectAtIndex:(long long)arg1 animated:(_Bool)arg2;
- (void)reloadData;
- (id)dequeueReusableCellWithIdentifier:(id)arg1;
- (id)dequeueReusableCell;
- (void)queueReusableCell:(id)arg1;
- (void)cleanupUnseenItems;
- (void)loadRequiredItems;
- (struct CGRect)rectForPoint:(struct CGPoint)arg1 inPaggingMode:(_Bool)arg2;
- (void)relayoutItemsAnimated:(_Bool)arg1;
- (void)recomputeSizeAnimated:(_Bool)arg1;
- (long long)positionForItemSubview:(id)arg1;
- (id)cellForItemAtIndex:(long long)arg1;
- (id)itemSubviews;
- (id)newItemSubViewForPosition:(long long)arg1;
- (void)setSubviewsCacheAsInvalid;
- (void)tapGestureUpdated:(id)arg1;
- (_Bool)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (void)transformingGestureDidFinish;
- (_Bool)isInTransformingState;
- (void)transformingGestureDidBeginWithGesture:(id)arg1;
- (void)rotationGestureUpdated:(id)arg1;
- (void)pinchGestureUpdated:(id)arg1;
- (void)panGestureUpdated:(id)arg1;
- (void)sortingMoveDidContinueToPoint:(struct CGPoint)arg1;
- (void)sortingMoveDidStopAtPoint:(struct CGPoint)arg1;
- (void)sortingMoveDidStartAtPoint:(struct CGPoint)arg1;
- (void)sortingAutoScrollMovementCheck;
- (void)sortingPanGestureUpdated:(id)arg1;
- (void)longPressGestureUpdated:(id)arg1;
- (_Bool)gestureRecognizerShouldBegin:(id)arg1;
- (_Bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (void)contentOffset:(struct CGPoint)arg1;
- (void)setEditing:(_Bool)arg1 animated:(_Bool)arg2;
@property(nonatomic) double minimumPressDuration; // @dynamic minimumPressDuration;
- (void)receivedWillRotateNotification:(id)arg1;
- (void)receivedMemoryWarningNotification:(id)arg1;
- (void)layoutSubviews;
- (void)layoutSubviewsWithAnimation:(int)arg1;
- (void)applyWithoutAnimation:(CDUnknownBlockType)arg1;
- (void)dealloc;
- (void)commonInit;
- (_Bool)touchesShouldCancelInContentView:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

