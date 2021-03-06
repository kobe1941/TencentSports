//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "QSViewController.h"

#import "QSTableViewDelegate-Protocol.h"
#import "UIScrollViewDelegate-Protocol.h"
#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"

@class NSString, QSHttpCacheDataController, QSNewsContentInfo, QSTableView, QSWebImageView;

__attribute__((visibility("hidden")))
@interface QSNewsTopicViewController : QSViewController <UITableViewDataSource, UITableViewDelegate, UIScrollViewDelegate, QSTableViewDelegate>
{
    QSHttpCacheDataController *_dataController;
    QSNewsContentInfo *_contentInfo;
    QSWebImageView *_bannerImageView;
    QSTableView *_tableView;
}

@property(retain, nonatomic) QSTableView *tableView; // @synthesize tableView=_tableView;
@property(retain, nonatomic) QSWebImageView *bannerImageView; // @synthesize bannerImageView=_bannerImageView;
@property(retain, nonatomic) QSNewsContentInfo *contentInfo; // @synthesize contentInfo=_contentInfo;
@property(retain, nonatomic) QSHttpCacheDataController *dataController; // @synthesize dataController=_dataController;
- (void).cxx_destruct;
- (void)scrollViewDidEndScrollingAnimation:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (void)scrollViewDidScroll:(id)arg1;
- (_Bool)tableViewHasMoreData:(id)arg1;
- (void)tableViewShouldLoadMoreData:(id)arg1;
- (void)onContentDataUpdate;
- (id)tableViewDataLastUpdateTime:(id)arg1;
- (_Bool)tableViewDataIsLoading:(id)arg1;
- (void)tableViewShouldRefreshData:(id)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)dealloc;
- (void)viewWillAppear:(_Bool)arg1;
- (void)updateBannerImageView;
- (void)viewDidLoad;
- (_Bool)shouldShowSelfDefinedNavigationBar;
- (id)externInfoForBossReporter;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

