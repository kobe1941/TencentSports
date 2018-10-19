//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "QSViewController.h"

#import "QSBaseDataDelegate-Protocol.h"
#import "QSRecordPositionViewControllerProtocol-Protocol.h"
#import "QSSignedInCardDelegate-Protocol.h"
#import "QSTableViewDelegate-Protocol.h"
#import "UITableViewDataSource-Protocol.h"

@class NSString, QSMatchDetailInfo, QSMatchGuessAllRankData, QSTableViewEx;

__attribute__((visibility("hidden")))
@interface QSGuessAfterMatchController : QSViewController <QSTableViewDelegate, UITableViewDataSource, QSBaseDataDelegate, QSSignedInCardDelegate, QSRecordPositionViewControllerProtocol>
{
    _Bool _needScrollToTop;
    QSMatchDetailInfo *_detailInfo;
    QSTableViewEx *_tableView;
    QSMatchGuessAllRankData *_allRankData;
}

@property(nonatomic) _Bool needScrollToTop; // @synthesize needScrollToTop=_needScrollToTop;
@property(retain, nonatomic) QSMatchGuessAllRankData *allRankData; // @synthesize allRankData=_allRankData;
@property(retain, nonatomic) QSTableViewEx *tableView; // @synthesize tableView=_tableView;
@property(retain, nonatomic) QSMatchDetailInfo *detailInfo; // @synthesize detailInfo=_detailInfo;
- (void).cxx_destruct;
- (void)jumpToGuessRank;
- (void)jumpToMyGuessList;
- (void)jumpToAnchorRank;
- (void)setSignedInState:(long long)arg1;
- (long long)livePeriod;
- (long long)signedInState;
- (id)signedInCardDisplayInfo;
- (void)scrollViewDidEndScrollingAnimation:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (void)scrollViewDidScroll:(id)arg1;
- (id)tableViewDataLastUpdateTime:(id)arg1;
- (_Bool)tableViewHasMoreData:(id)arg1;
- (_Bool)tableViewDataIsLoading:(id)arg1;
- (void)tableViewShouldLoadMoreData:(id)arg1;
- (void)tableViewShouldRefreshData:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 viewForFooterInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (id)createEmptyView;
- (void)shouldReloadSinceErrorPressed;
- (_Bool)isEmpty;
- (void)data:(id)arg1 didFinishLoadWithError:(id)arg2;
- (void)dataWillStartLoad:(id)arg1;
- (void)dealloc;
- (void)didReceiveMemoryWarning;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)initData;
- (void)reloadData;
- (id)externInfoForBossReporter;
- (id)newPageDescription;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

