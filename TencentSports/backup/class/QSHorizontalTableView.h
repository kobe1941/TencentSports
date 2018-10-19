//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIScrollView.h>

@class NSMutableArray, NSMutableDictionary;
@protocol QSHorizontalTableViewDelegate;

__attribute__((visibility("hidden")))
@interface QSHorizontalTableView : UIScrollView
{
    _Bool _reloading;
    double _leftOffset;
    double _rightOffset;
    double _offsetBetweenCells;
    double _extraWidth;
    NSMutableDictionary *_reusedCells;
    NSMutableArray *_visibleCells;
    unsigned long long _count;
    double _lastContentOffsetX;
}

@property(nonatomic) _Bool reloading; // @synthesize reloading=_reloading;
@property(nonatomic) double lastContentOffsetX; // @synthesize lastContentOffsetX=_lastContentOffsetX;
@property(nonatomic) unsigned long long count; // @synthesize count=_count;
@property(retain, nonatomic) NSMutableArray *visibleCells; // @synthesize visibleCells=_visibleCells;
@property(retain, nonatomic) NSMutableDictionary *reusedCells; // @synthesize reusedCells=_reusedCells;
@property(nonatomic) double extraWidth; // @synthesize extraWidth=_extraWidth;
@property(nonatomic) double offsetBetweenCells; // @synthesize offsetBetweenCells=_offsetBetweenCells;
@property(nonatomic) double rightOffset; // @synthesize rightOffset=_rightOffset;
@property(nonatomic) double leftOffset; // @synthesize leftOffset=_leftOffset;
- (void).cxx_destruct;
- (void)scrollToCellWithIndex:(unsigned long long)arg1 animated:(_Bool)arg2;
- (id)dequeueReusableCellWithIdentifier:(id)arg1;
- (id)visableCells;
- (id)cellWithIndex:(unsigned long long)arg1;
- (void)resetCellsWithStartIndex:(unsigned long long)arg1;
- (void)reloadDataWithStartIndex:(unsigned long long)arg1;
- (void)reloadData;
- (void)checkCellsFromRightToLeft;
- (void)checkCellsFromLeftToRight;
- (void)removeAllCells;
- (void)removeCell:(id)arg1;
- (void)setContentOffset:(struct CGPoint)arg1;
- (void)willMoveToWindow:(id)arg1;
- (void)willMoveToSuperview:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(nonatomic) __weak id <QSHorizontalTableViewDelegate> delegate; // @dynamic delegate;

@end

