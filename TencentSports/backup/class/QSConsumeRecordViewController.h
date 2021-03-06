//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "QSViewController.h"

#import "QSBaseDataDelegate-Protocol.h"
#import "QSTableViewDelegate-Protocol.h"
#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"

@class NSString, QSMyConsumeRecord, QSTableView, UIView;

__attribute__((visibility("hidden")))
@interface QSConsumeRecordViewController : QSViewController <UITableViewDelegate, UITableViewDataSource, QSTableViewDelegate, QSBaseDataDelegate>
{
    long long _consumeRecordType;
    QSTableView *_tableView;
    UIView *_headerView;
    QSMyConsumeRecord *_myConsumeRecord;
}

@property(retain, nonatomic) QSMyConsumeRecord *myConsumeRecord; // @synthesize myConsumeRecord=_myConsumeRecord;
@property(retain, nonatomic) UIView *headerView; // @synthesize headerView=_headerView;
@property(retain, nonatomic) QSTableView *tableView; // @synthesize tableView=_tableView;
@property(nonatomic) long long consumeRecordType; // @synthesize consumeRecordType=_consumeRecordType;
- (void).cxx_destruct;
- (void)clickReturn:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
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
- (void)shouldReloadSinceErrorPressed;
- (id)emptyImage;
- (_Bool)isEmpty;
- (void)viewDidLoad;
- (_Bool)shouldShowSelfDefinedNavigationBar;
- (void)dealloc;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

