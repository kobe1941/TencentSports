//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

#import "QSBusEventConsumerDelegate-Protocol.h"
#import "QSMyProfileTableCellBossProtocol-Protocol.h"
#import "UICollectionViewDataSource-Protocol.h"
#import "UICollectionViewDelegate-Protocol.h"

@class NSArray, NSString, QSAutoBusEvent, QSPageControl, UICollectionView;

__attribute__((visibility("hidden")))
@interface QSMyMainMarqueeCell : UITableViewCell <UICollectionViewDataSource, UICollectionViewDelegate, QSBusEventConsumerDelegate, QSMyProfileTableCellBossProtocol>
{
    _Bool _userDragging;
    UICollectionView *_collectionView;
    NSArray *_modelList;
    QSPageControl *_pageControl;
    QSAutoBusEvent *_topScrollEvent;
}

+ (double)heightWithModel:(id)arg1;
@property(nonatomic) _Bool userDragging; // @synthesize userDragging=_userDragging;
@property(retain, nonatomic) QSAutoBusEvent *topScrollEvent; // @synthesize topScrollEvent=_topScrollEvent;
@property(retain, nonatomic) QSPageControl *pageControl; // @synthesize pageControl=_pageControl;
@property(retain, nonatomic) NSArray *modelList; // @synthesize modelList=_modelList;
@property(retain, nonatomic) UICollectionView *collectionView; // @synthesize collectionView=_collectionView;
- (void).cxx_destruct;
- (void)reportVisibleItemAtIndex:(unsigned long long)arg1;
- (void)reportVisibleItem;
- (void)didMoveToSuperview;
- (void)dealloc;
- (void)didMoveToWindow;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)collectionView:(id)arg1 didUnhighlightItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 didHighlightItemAtIndexPath:(id)arg2;
- (void)scrollViewDidScroll:(id)arg1;
- (void)didConsumeEventFromBus:(id)arg1;
- (void)stopTimer;
- (void)bindAutoBusEventWithBusSystem;
- (void)startTimer;
- (void)rotateImage;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (void)updateWithModel:(id)arg1;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

