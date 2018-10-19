//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "QSViewController.h"

#import "QSContainerViewControllerContainedVCProtocol-Protocol.h"
#import "QSHeadImageTitleViewDelegate-Protocol.h"
#import "QSHomePageFeedCellMediaPlayerDelegate-Protocol.h"
#import "QSHomeRecommendDataDelegate-Protocol.h"
#import "QSMediaPlayerViewControllerDelegate-Protocol.h"
#import "QSNewMessageManagerDelegate-Protocol.h"
#import "QSTableViewDelegate-Protocol.h"
#import "UITableViewDataSource-Protocol.h"

@class NSDictionary, NSString, QSHeadImageTitleView, QSHomeFeedSaveStateInfo, QSHomePageFeedNavigator, QSHomeRecommendData, QSMediaPlayerViewController, QSNewMessageManager, QSTableView, UITableViewCell;
@protocol QSHomeRecommendCellProtocol;

__attribute__((visibility("hidden")))
@interface QSHomeRecommendViewController : QSViewController <QSHomeRecommendDataDelegate, QSMediaPlayerViewControllerDelegate, QSHeadImageTitleViewDelegate, QSHomePageFeedCellMediaPlayerDelegate, QSNewMessageManagerDelegate, QSContainerViewControllerContainedVCProtocol, QSTableViewDelegate, UITableViewDataSource>
{
    _Bool _shouldReloadCurrentPageContent;
    _Bool _shouldRefreshMediaPlayer;
    NSString *_columnId;
    QSTableView *_tableView;
    NSDictionary *_sectionsInfo;
    UITableViewCell<QSHomeRecommendCellProtocol> *_fixedCell;
    UITableViewCell *_originalFiexedCell;
    QSHomeRecommendData *_homeRecommendData;
    QSHomePageFeedNavigator *_navigator;
    double _lastContentOffsetY;
    QSHomeFeedSaveStateInfo *_saveStateInfo;
    QSNewMessageManager *_newMessageManager;
    QSMediaPlayerViewController *_mediaPlayerViewController;
    QSHeadImageTitleView *_headImageTitleView;
    long long _minusIndex;
}

+ (double)topBarHeight;
@property(nonatomic) long long minusIndex; // @synthesize minusIndex=_minusIndex;
@property(nonatomic) _Bool shouldRefreshMediaPlayer; // @synthesize shouldRefreshMediaPlayer=_shouldRefreshMediaPlayer;
@property(retain, nonatomic) QSHeadImageTitleView *headImageTitleView; // @synthesize headImageTitleView=_headImageTitleView;
@property(retain, nonatomic) QSMediaPlayerViewController *mediaPlayerViewController; // @synthesize mediaPlayerViewController=_mediaPlayerViewController;
@property(retain, nonatomic) QSNewMessageManager *newMessageManager; // @synthesize newMessageManager=_newMessageManager;
@property(retain, nonatomic) QSHomeFeedSaveStateInfo *saveStateInfo; // @synthesize saveStateInfo=_saveStateInfo;
@property(nonatomic) double lastContentOffsetY; // @synthesize lastContentOffsetY=_lastContentOffsetY;
@property(nonatomic) _Bool shouldReloadCurrentPageContent; // @synthesize shouldReloadCurrentPageContent=_shouldReloadCurrentPageContent;
@property(retain, nonatomic) QSHomePageFeedNavigator *navigator; // @synthesize navigator=_navigator;
@property(retain, nonatomic) QSHomeRecommendData *homeRecommendData; // @synthesize homeRecommendData=_homeRecommendData;
@property(retain, nonatomic) UITableViewCell *originalFiexedCell; // @synthesize originalFiexedCell=_originalFiexedCell;
@property(retain, nonatomic) UITableViewCell<QSHomeRecommendCellProtocol> *fixedCell; // @synthesize fixedCell=_fixedCell;
@property(retain, nonatomic) NSDictionary *sectionsInfo; // @synthesize sectionsInfo=_sectionsInfo;
@property(retain, nonatomic) QSTableView *tableView; // @synthesize tableView=_tableView;
@property(copy, nonatomic) NSString *columnId; // @synthesize columnId=_columnId;
- (void).cxx_destruct;
- (id)groupTypeForIndexPath:(id)arg1;
- (void)makeBossReportWhenUserSelectCellAtIndexPath:(id)arg1;
- (void)makeBossReportWhenScrollDidEnd;
- (id)locationIdWithIndexPath:(id)arg1;
- (void)newMessageDidTap;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableViewDataLastUpdateTime:(id)arg1;
- (_Bool)tableViewHasMoreData:(id)arg1;
- (_Bool)tableViewDataIsLoading:(id)arg1;
- (void)tableViewShouldLoadMoreData:(id)arg1;
- (void)tableViewShouldRefreshData:(id)arg1;
- (void)scrollViewDidEndScrollingAnimation:(id)arg1;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (void)scrollViewDidScroll:(id)arg1;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)scrollViewDidScrollToTop:(id)arg1;
- (void)homeRecommendData:(id)arg1 hasNewDataWithPrompt:(id)arg2;
- (_Bool)needsContinueRefreshing:(id)arg1 sinceCacheHasExpiredWithTimeOut:(double)arg2;
- (void)data:(id)arg1 didFinishLoadWithError:(id)arg2;
- (void)dataWillStartLoad:(id)arg1;
- (id)eventForBossReportWhenUserDidSelectCell:(id)arg1;
- (id)sceneForBossReportForCell:(id)arg1;
- (void)titleDidTapInHeadImageTitleView:(id)arg1;
- (void)playMediaInCell:(id)arg1;
- (void)mediaPlayerViewController:(id)arg1 willShowUI:(_Bool)arg2;
- (void)mediaPlayerViewControllerDidChangeMediaPlayerState:(id)arg1;
- (void)makeFeedVideoPlayBossReportWithVid:(id)arg1 groupType:(id)arg2;
- (void)mediaPlayerViewControllerDidLeaveScreen:(id)arg1;
- (void)mediaPlayerViewControllerDidEnterScreenInCell:(id)arg1;
- (void)checkAutoStartMediaPlayer;
- (void)closeInvalidMediaPlayer;
- (void)refreshMediaPlayer;
- (void)autoPlayMediaWithMediaItem:(id)arg1 atFrame:(struct CGRect)arg2 withMediaPlayerViewController:(id)arg3;
- (void)playMediaWithMediaItem:(id)arg1 atFrame:(struct CGRect)arg2 withMediaPlayerViewController:(id)arg3;
- (void)updateFiexedCellHiddenStatus;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)splashDidDisappear;
- (void)splashWillDisappear;
- (void)needReload;
- (void)viewWillLayoutSubviews;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)dealloc;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (id)feedTypesToExcludeWhenReportingLocationId;
- (id)sceneForMediaPlayer;
- (id)sceneForBossReport;
- (id)sectionsAfterMergingAdsForSections:(id)arg1;
- (Class)fixedCellClass;
- (Class)tableViewClass;
- (Class)cellManagerClass;
- (void)shouldReloadSinceErrorPressed;
- (id)createEmptyView;
- (_Bool)isEmpty;
- (id)newPageDescription;
- (id)externInfoForBossReporter;
- (void)setupFixedCellForCell:(id)arg1 withInfo:(id)arg2;
- (id)infoForRowAtIndexPath:(id)arg1;
- (void)restoreWithStateInfo:(id)arg1;
- (id)savedStateInfo;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
