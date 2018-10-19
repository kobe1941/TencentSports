//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "QSBusEventConsumerDelegate-Protocol.h"
#import "UICollectionViewDataSource-Protocol.h"
#import "UICollectionViewDelegate-Protocol.h"

@class NSArray, NSString, QSAutoBusEvent, QSPageControl, UICollectionView, UIImageView, UILabel;

__attribute__((visibility("hidden")))
@interface QSHomeHotTopicsHeaderView : UIView <UICollectionViewDataSource, UICollectionViewDelegate, QSBusEventConsumerDelegate>
{
    _Bool _userDragging;
    UICollectionView *_mainCollectionView;
    NSArray *_modelList;
    QSPageControl *_imagePageControl;
    UIImageView *_titleLabBGImgV;
    UILabel *_titleLab;
    QSAutoBusEvent *_topScrollEvent;
}

+ (double)topImageHeight;
@property(nonatomic) _Bool userDragging; // @synthesize userDragging=_userDragging;
@property(retain, nonatomic) QSAutoBusEvent *topScrollEvent; // @synthesize topScrollEvent=_topScrollEvent;
@property(retain, nonatomic) UILabel *titleLab; // @synthesize titleLab=_titleLab;
@property(retain, nonatomic) UIImageView *titleLabBGImgV; // @synthesize titleLabBGImgV=_titleLabBGImgV;
@property(retain, nonatomic) QSPageControl *imagePageControl; // @synthesize imagePageControl=_imagePageControl;
@property(retain, nonatomic) NSArray *modelList; // @synthesize modelList=_modelList;
@property(retain, nonatomic) UICollectionView *mainCollectionView; // @synthesize mainCollectionView=_mainCollectionView;
- (void).cxx_destruct;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (void)didMoveToWindow;
- (void)updateTitleLab;
- (void)updateImagePageControl;
- (void)updateWithModel:(id)arg1;
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
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 referenceSizeForHeaderInSection:(long long)arg3;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (double)collectionView:(id)arg1 layout:(id)arg2 minimumInteritemSpacingForSectionAtIndex:(long long)arg3;
- (double)collectionView:(id)arg1 layout:(id)arg2 minimumLineSpacingForSectionAtIndex:(long long)arg3;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (void)didMoveToSuperview;
- (void)dealloc;
- (void)headerImageChange;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
