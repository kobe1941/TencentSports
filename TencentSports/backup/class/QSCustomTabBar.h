//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "UICollectionViewDataSource-Protocol.h"
#import "UICollectionViewDelegateFlowLayout-Protocol.h"

@class NSString, UICollectionView;
@protocol QSCustomTabBarDelegate;

__attribute__((visibility("hidden")))
@interface QSCustomTabBar : UIView <UICollectionViewDelegateFlowLayout, UICollectionViewDataSource>
{
    _Bool _isBtnLineHidden;
    id <QSCustomTabBarDelegate> _delegate;
    double _itemSpacing;
    unsigned long long _currentIndex;
    UICollectionView *_collectionView;
    Class _cellClass;
    double _percent;
    UIView *_leftEdgeView;
    UIView *_rightEdgeView;
    UIView *_lineView;
    struct UIEdgeInsets _contentEdgeInsets;
}

+ (Class)cellClass;
@property(retain, nonatomic) UIView *lineView; // @synthesize lineView=_lineView;
@property(retain, nonatomic) UIView *rightEdgeView; // @synthesize rightEdgeView=_rightEdgeView;
@property(retain, nonatomic) UIView *leftEdgeView; // @synthesize leftEdgeView=_leftEdgeView;
@property(nonatomic) double percent; // @synthesize percent=_percent;
@property(retain, nonatomic) Class cellClass; // @synthesize cellClass=_cellClass;
@property(retain, nonatomic) UICollectionView *collectionView; // @synthesize collectionView=_collectionView;
@property(nonatomic) unsigned long long currentIndex; // @synthesize currentIndex=_currentIndex;
@property(nonatomic) double itemSpacing; // @synthesize itemSpacing=_itemSpacing;
@property(nonatomic) _Bool isBtnLineHidden; // @synthesize isBtnLineHidden=_isBtnLineHidden;
@property(nonatomic) __weak id <QSCustomTabBarDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) struct UIEdgeInsets contentEdgeInsets; // @synthesize contentEdgeInsets=_contentEdgeInsets;
- (void).cxx_destruct;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (double)widthForItemAtIndex:(unsigned long long)arg1;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (void)setSelectedIndex:(unsigned long long)arg1;
- (void)makeCurrentSelectdVisibleWithAnimted:(_Bool)arg1;
- (void)setCurrentPercentWithScrollView:(double)arg1;
- (void)reloadDataWithSelectedIndex:(long long)arg1;
- (void)reloadDataAndMakeSelectedVisible;
- (void)reloadData;
- (id)cellWithIndex:(long long)arg1;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)newRightEdgeView;
- (id)newLeftEdgeView;
- (id)initWithFrame:(struct CGRect)arg1 itemSpacing:(double)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

