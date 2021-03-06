//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "QSViewController.h"

#import "QSBaseDataDelegate-Protocol.h"
#import "QSPresentedNavigationBarDataSource-Protocol.h"
#import "QSTableViewDelegate-Protocol.h"
#import "UITableViewDataSource-Protocol.h"

@class NSString, QSMatchItem, QSPropsRanklistData, QSTableView;

__attribute__((visibility("hidden")))
@interface QSPropsRanklistViewController : QSViewController <QSTableViewDelegate, UITableViewDataSource, QSBaseDataDelegate, QSPresentedNavigationBarDataSource>
{
    QSMatchItem *_matchItem;
    QSTableView *_tableView;
    QSPropsRanklistData *_propsRanklistData;
}

@property(retain, nonatomic) QSPropsRanklistData *propsRanklistData; // @synthesize propsRanklistData=_propsRanklistData;
@property(retain, nonatomic) QSTableView *tableView; // @synthesize tableView=_tableView;
@property(retain, nonatomic) QSMatchItem *matchItem; // @synthesize matchItem=_matchItem;
- (void).cxx_destruct;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (id)tableView:(id)arg1 viewForFooterInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;
- (void)showViewController:(id)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableViewDataLastUpdateTime:(id)arg1;
- (_Bool)tableViewHasMoreData:(id)arg1;
- (_Bool)tableViewDataIsLoading:(id)arg1;
- (void)tableViewShouldLoadMoreData:(id)arg1;
- (void)tableViewShouldRefreshData:(id)arg1;
- (void)scrollViewDidEndScrollingAnimation:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (void)scrollViewDidScroll:(id)arg1;
- (void)data:(id)arg1 didFinishLoadWithError:(id)arg2;
- (void)dataWillStartLoad:(id)arg1;
- (id)middleBarButtonItemForPresentedNavigationBar;
- (id)titleForPresentedNavigationBar;
- (void)backButtonDidTap:(id)arg1;
- (id)createEmptyView;
- (_Bool)isEmpty;
- (void)viewDidLoad;
- (void)shouldReloadSinceErrorPressed;
- (_Bool)shouldShowSelfDefinedNavigationBar;
- (id)externInfoForBossReporter;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

