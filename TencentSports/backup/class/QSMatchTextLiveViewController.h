//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "QSViewController.h"

#import "QSIndexedDataDelegate-Protocol.h"
#import "QSMediaPlayerViewControllerDelegate-Protocol.h"
#import "QSRecordPositionViewControllerProtocol-Protocol.h"
#import "QSTableViewDelegate-Protocol.h"
#import "QSTextLiveContentCellDelegate-Protocol.h"
#import "UITableViewDataSource-Protocol.h"

@class NSNumber, NSString, QSMatchItem, QSTableView, QSTextLiveListData, UIView;

__attribute__((visibility("hidden")))
@interface QSMatchTextLiveViewController : QSViewController <QSTableViewDelegate, UITableViewDataSource, QSIndexedDataDelegate, QSTextLiveContentCellDelegate, QSMediaPlayerViewControllerDelegate, QSRecordPositionViewControllerProtocol>
{
    UIView *_vLine;
    _Bool _showNewTip;
    QSMatchItem *_matchItem;
    QSTextLiveListData *_listData;
    QSTableView *_tableView;
    NSNumber *_savedContentOffsetY;
}

@property(retain, nonatomic) NSNumber *savedContentOffsetY; // @synthesize savedContentOffsetY=_savedContentOffsetY;
@property(nonatomic) _Bool showNewTip; // @synthesize showNewTip=_showNewTip;
@property(retain, nonatomic) QSTableView *tableView; // @synthesize tableView=_tableView;
@property(retain, nonatomic) QSTextLiveListData *listData; // @synthesize listData=_listData;
@property(retain, nonatomic) QSMatchItem *matchItem; // @synthesize matchItem=_matchItem;
- (void).cxx_destruct;
- (void)scrollViewDidEndScrollingAnimation:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (void)scrollViewDidScroll:(id)arg1;
- (id)tableViewDataLastUpdateTime:(id)arg1;
- (_Bool)tableViewHasMoreData:(id)arg1;
- (_Bool)tableViewDataIsLoading:(id)arg1;
- (void)tableViewShouldLoadMoreData:(id)arg1;
- (void)tableViewShouldRefreshData:(id)arg1;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)textLiveContentCellDidPressPlayerCard:(id)arg1;
- (void)textLiveContentCellDidPressPage:(id)arg1;
- (void)textLiveContentCellDidPressVideo:(id)arg1;
- (void)textLiveContentCellDidPressImage:(id)arg1 withAllImages:(id)arg2 atIndex:(unsigned long long)arg3;
- (void)showImages:(id)arg1 placeHolderImages:(id)arg2 atIndex:(long long)arg3;
- (_Bool)indexedDataNeedsContinueUpdateWhileNewIndexesComing:(id)arg1;
- (void)data:(id)arg1 didFinishLoadWithError:(id)arg2;
- (void)dataWillStartLoad:(id)arg1;
- (_Bool)shouldShowNewTip;
- (void)backToTop;
- (void)shouldReloadSinceErrorPressed;
- (_Bool)isEmpty;
- (void)didReceiveMemoryWarning;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)dealloc;
- (id)externInfoForBossReporter;
- (id)newPageDescription;
- (void)restoreWithStateInfo:(id)arg1;
- (id)savedStateInfo;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

