//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "QSHomeRecommendViewController.h"

@class QSRecommendChlAdManager;

__attribute__((visibility("hidden")))
@interface QSRecommendViewController : QSHomeRecommendViewController
{
    QSRecommendChlAdManager *_adManager;
}

@property(retain, nonatomic) QSRecommendChlAdManager *adManager; // @synthesize adManager=_adManager;
- (void).cxx_destruct;
- (void)leavePage;
- (void)enterPage;
- (void)willResignActive:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)tableViewShouldLoadMoreData:(id)arg1;
- (void)tableViewShouldRefreshData:(id)arg1;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (void)makeBossReportWhenUserDidSelectCell:(id)arg1;
- (void)titleDidTapInHeadImageTitleView:(id)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)dealloc;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (id)feedTypesToExcludeWhenReportingLocationId;
- (id)sceneForMediaPlayer;
- (id)sceneForBossReport;
- (id)sectionsAfterMergingAdsForSections:(id)arg1;
- (Class)fixedCellClass;
- (Class)cellManagerClass;

@end

