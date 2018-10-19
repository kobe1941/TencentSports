//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "QSViewController.h"

#import "QSInMatchBasketballPlayerCellDelegate-Protocol.h"
#import "QSMatchDetailContentViewControllerProtocol-Protocol.h"
#import "QSMatchTeamPlayersCellDelegate-Protocol.h"
#import "QSStatedDataDelegate-Protocol.h"
#import "QSTableViewDelegate-Protocol.h"
#import "UITableViewDataSource-Protocol.h"

@class NSString, QSInMatchDataData, QSMatchDetailDataPool, QSMatchDetailInfo, QSTableView;

__attribute__((visibility("hidden")))
@interface QSInMatchDataLiveViewController : QSViewController <QSInMatchBasketballPlayerCellDelegate, QSTableViewDelegate, UITableViewDataSource, QSStatedDataDelegate, QSMatchTeamPlayersCellDelegate, QSMatchDetailContentViewControllerProtocol>
{
    NSString *_mid;
    QSMatchDetailInfo *_detailInfo;
    QSMatchDetailDataPool *_dataPool;
    QSTableView *_tableView;
    QSInMatchDataData *_stateData;
    struct CGPoint _basketballPlayerScrollContentOffset;
}

@property(nonatomic) struct CGPoint basketballPlayerScrollContentOffset; // @synthesize basketballPlayerScrollContentOffset=_basketballPlayerScrollContentOffset;
@property(retain, nonatomic) QSInMatchDataData *stateData; // @synthesize stateData=_stateData;
@property(retain, nonatomic) QSTableView *tableView; // @synthesize tableView=_tableView;
@property(retain, nonatomic) QSMatchDetailDataPool *dataPool; // @synthesize dataPool=_dataPool;
@property(retain, nonatomic) QSMatchDetailInfo *detailInfo; // @synthesize detailInfo=_detailInfo;
@property(copy, nonatomic) NSString *mid; // @synthesize mid=_mid;
- (void).cxx_destruct;
- (void)inMatchBasketballPlayerCellNeedShowPlayerInfo:(id)arg1;
- (void)inMatchBasketballPlayerCellDidEndScrolling:(id)arg1;
- (void)inMatchBasketballPlayerCell:(id)arg1 contentOffsetChanged:(struct CGPoint)arg2;
- (void)scrollViewDidEndScrollingAnimation:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (void)scrollViewDidScroll:(id)arg1;
- (id)tableViewDataLastUpdateTime:(id)arg1;
- (_Bool)tableViewHasMoreData:(id)arg1;
- (_Bool)tableViewDataIsLoading:(id)arg1;
- (void)tableViewShouldLoadMoreData:(id)arg1;
- (void)tableViewShouldRefreshData:(id)arg1;
- (void)showMorePlayersStats:(id)arg1;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
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
- (_Bool)needHeadCell;
- (id)externInfoForBossReporter;
- (id)newPageDescription;
- (void)dataPool:(id)arg1 dataDidUpdateWithType:(long long)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

