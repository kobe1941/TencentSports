//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

#import "QSHomeRecommendCellProtocol-Protocol.h"
#import "QSWebImageViewDelegate-Protocol.h"
#import "UICollectionViewDataSource-Protocol.h"
#import "UICollectionViewDelegateFlowLayout-Protocol.h"

@class NSString, QSGradientView, QSHomePageFeedNavigator, QSHomeRecommendWordCupInfo, QSWebImageView, QSWorldCupEntanceTabView, QSWorldCupNewsEntranceView, UICollectionView, UIImageView, UILabel;

__attribute__((visibility("hidden")))
@interface QSWorldCupEntranceCell : UITableViewCell <UICollectionViewDelegateFlowLayout, UICollectionViewDataSource, QSWebImageViewDelegate, QSHomeRecommendCellProtocol>
{
    QSGradientView *_gradientBackgroundView;
    UILabel *_dateLabel;
    UIImageView *_roundSeparatorView;
    UIImageView *_lineBackgroudView;
    UILabel *_scheduleLabel;
    QSWebImageView *_adLogoView;
    UICollectionView *_scheduleContainerView;
    QSWorldCupEntanceTabView *_entranceTabView;
    QSWorldCupNewsEntranceView *_newsEntranceView;
    QSHomeRecommendWordCupInfo *_info;
    QSHomePageFeedNavigator *_navigator;
}

+ (double)cellHeightWithInfo:(id)arg1;
@property(nonatomic) __weak QSHomePageFeedNavigator *navigator; // @synthesize navigator=_navigator;
@property(retain, nonatomic) QSHomeRecommendWordCupInfo *info; // @synthesize info=_info;
@property(retain, nonatomic) QSWorldCupNewsEntranceView *newsEntranceView; // @synthesize newsEntranceView=_newsEntranceView;
@property(retain, nonatomic) QSWorldCupEntanceTabView *entranceTabView; // @synthesize entranceTabView=_entranceTabView;
@property(retain, nonatomic) UICollectionView *scheduleContainerView; // @synthesize scheduleContainerView=_scheduleContainerView;
@property(retain, nonatomic) QSWebImageView *adLogoView; // @synthesize adLogoView=_adLogoView;
@property(retain, nonatomic) UILabel *scheduleLabel; // @synthesize scheduleLabel=_scheduleLabel;
@property(retain, nonatomic) UIImageView *lineBackgroudView; // @synthesize lineBackgroudView=_lineBackgroudView;
@property(retain, nonatomic) UIImageView *roundSeparatorView; // @synthesize roundSeparatorView=_roundSeparatorView;
@property(retain, nonatomic) UILabel *dateLabel; // @synthesize dateLabel=_dateLabel;
@property(retain, nonatomic) QSGradientView *gradientBackgroundView; // @synthesize gradientBackgroundView=_gradientBackgroundView;
- (void).cxx_destruct;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (void)scrollViewDidEndScrollingAnimation:(id)arg1;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (void)webImageViewDidFinishLoading:(id)arg1;
- (void)makeBossReportForVisibleCells;
- (void)updateWithInfo:(id)arg1;
- (void)layoutSubviews;
- (id)perferredGesture;
- (void)dealloc;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
