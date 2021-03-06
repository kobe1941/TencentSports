//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "QSTableViewControllerEx.h"

#import "QSCombiningDataDelegate-Protocol.h"
#import "QSMatchDetailDataConsumerProtocol-Protocol.h"
#import "QSRecordPositionViewControllerProtocol-Protocol.h"

@class NSString, QSMatchDetailDataPool, QSMatchDetailInfo, QSMatchSummaryCombiningData;

__attribute__((visibility("hidden")))
@interface QSMatchSummaryController : QSTableViewControllerEx <QSCombiningDataDelegate, QSMatchDetailDataConsumerProtocol, QSRecordPositionViewControllerProtocol>
{
    QSMatchDetailInfo *_detailInfo;
    QSMatchDetailDataPool *_dataPool;
    QSMatchSummaryCombiningData *_matchData;
    NSString *_currentVid;
}

@property(retain, nonatomic) NSString *currentVid; // @synthesize currentVid=_currentVid;
@property(retain, nonatomic) QSMatchSummaryCombiningData *matchData; // @synthesize matchData=_matchData;
@property(retain, nonatomic) QSMatchDetailDataPool *dataPool; // @synthesize dataPool=_dataPool;
@property(retain, nonatomic) QSMatchDetailInfo *detailInfo; // @synthesize detailInfo=_detailInfo;
- (void).cxx_destruct;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (id)tableViewDataLastUpdateTime:(id)arg1;
- (_Bool)tableViewHasMoreData:(id)arg1;
- (_Bool)tableViewDataIsLoading:(id)arg1;
- (void)tableViewShouldLoadMoreData:(id)arg1;
- (void)tableViewShouldRefreshData:(id)arg1;
- (void)combiningData:(id)arg1 didFinishLoadWithData:(id)arg2 error:(id)arg3;
- (void)combiningData:(id)arg1 willStartLoadWithData:(id)arg2;
- (void)combiningDataDidReadCacheSucceed:(id)arg1;
- (void)shouldReloadSinceErrorPressed;
- (void)reloadTableView;
- (_Bool)isEmpty;
- (void)showLoading;
- (void)cellAction:(id)arg1 performedWithData:(id)arg2 inCell:(id)arg3;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)initData;
- (void)updateVideoInfo:(id)arg1;
- (void)dataPool:(id)arg1 dataDidUpdateWithType:(long long)arg2;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)externInfoForBossReporter;
- (id)mid;
- (id)newPageDescription;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

