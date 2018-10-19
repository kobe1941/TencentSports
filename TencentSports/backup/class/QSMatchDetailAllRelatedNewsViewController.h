//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "QSViewController.h"

#import "QSBaseDataDelegate-Protocol.h"
#import "QSPushViewControllerProtocol-Protocol.h"
#import "QSTableViewDelegate-Protocol.h"
#import "UITableViewDataSource-Protocol.h"

@class NSString, QSMatchDetailAllRelatedNewsData, QSTableView;

__attribute__((visibility("hidden")))
@interface QSMatchDetailAllRelatedNewsViewController : QSViewController <QSBaseDataDelegate, QSTableViewDelegate, UITableViewDataSource, QSPushViewControllerProtocol>
{
    NSString *_mid;
    NSString *_newsId;
    QSTableView *_listView;
    QSMatchDetailAllRelatedNewsData *_listData;
}

+ (id)allViewControllerType;
@property(retain, nonatomic) QSMatchDetailAllRelatedNewsData *listData; // @synthesize listData=_listData;
@property(retain, nonatomic) QSTableView *listView; // @synthesize listView=_listView;
@property(retain, nonatomic) NSString *newsId; // @synthesize newsId=_newsId;
@property(retain, nonatomic) NSString *mid; // @synthesize mid=_mid;
- (void).cxx_destruct;
- (void)didReceiveMemoryWarning;
- (id)tableViewDataLastUpdateTime:(id)arg1;
- (_Bool)tableViewHasMoreData:(id)arg1;
- (_Bool)tableViewDataIsLoading:(id)arg1;
- (void)tableViewShouldLoadMoreData:(id)arg1;
- (void)tableViewShouldRefreshData:(id)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (void)scrollViewDidEndScrollingAnimation:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (void)scrollViewDidScroll:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)data:(id)arg1 didFinishLoadWithError:(id)arg2;
- (void)dataWillStartLoad:(id)arg1;
- (void)shouldReloadSinceErrorPressed;
- (_Bool)isEmpty;
- (void)dealloc;
- (void)viewDidLoad;
- (_Bool)shouldShowSelfDefinedNavigationBar;
- (id)initWithParameters:(id)arg1;
- (id)currentParameters;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
