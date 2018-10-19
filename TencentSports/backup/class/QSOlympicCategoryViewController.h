//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "QSViewController.h"

#import "QSBaseDataDelegate-Protocol.h"
#import "UICollectionViewDataSource-Protocol.h"
#import "UICollectionViewDelegate-Protocol.h"

@class NSString, QSOlympicCategoryData, QSScheduleDetailViewController, UICollectionView;

__attribute__((visibility("hidden")))
@interface QSOlympicCategoryViewController : QSViewController <UICollectionViewDataSource, UICollectionViewDelegate, QSBaseDataDelegate>
{
    QSScheduleDetailViewController *_containerViewController;
    NSString *_columnId;
    UICollectionView *_mainCollectionView;
    QSOlympicCategoryData *_categoryData;
}

@property(retain, nonatomic) QSOlympicCategoryData *categoryData; // @synthesize categoryData=_categoryData;
@property(retain, nonatomic) UICollectionView *mainCollectionView; // @synthesize mainCollectionView=_mainCollectionView;
@property(copy, nonatomic) NSString *columnId; // @synthesize columnId=_columnId;
@property(nonatomic) __weak QSScheduleDetailViewController *containerViewController; // @synthesize containerViewController=_containerViewController;
- (void).cxx_destruct;
- (void)reloadData;
- (void)refreshContentView;
- (void)data:(id)arg1 didFinishFinallyWithError:(id)arg2;
- (void)data:(id)arg1 didFinishLoadWithError:(id)arg2;
- (void)dataWillStartLoad:(id)arg1;
- (_Bool)isEmpty;
- (struct CGSize)sizeForItemAtIndexPath:(id)arg1;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

