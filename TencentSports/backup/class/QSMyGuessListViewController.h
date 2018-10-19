//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "QSViewController.h"

#import "QSIndexedDataDelegate-Protocol.h"
#import "QSMyGuessTitleCellDelegate-Protocol.h"
#import "QSPushViewControllerProtocol-Protocol.h"
#import "QSTableViewDelegate-Protocol.h"
#import "UITableViewDataSource-Protocol.h"

@class NSString, QSMyGuessData, QSTableView;

__attribute__((visibility("hidden")))
@interface QSMyGuessListViewController : QSViewController <QSTableViewDelegate, UITableViewDataSource, QSIndexedDataDelegate, QSMyGuessTitleCellDelegate, QSPushViewControllerProtocol>
{
    QSTableView *_mTableView;
    QSMyGuessData *_myGuessData;
}

+ (id)allViewControllerType;
@property(retain, nonatomic) QSMyGuessData *myGuessData; // @synthesize myGuessData=_myGuessData;
@property(retain, nonatomic) QSTableView *mTableView; // @synthesize mTableView=_mTableView;
- (void).cxx_destruct;
- (id)tableViewDataLastUpdateTime:(id)arg1;
- (_Bool)tableViewHasMoreData:(id)arg1;
- (_Bool)tableViewDataIsLoading:(id)arg1;
- (void)tableViewShouldLoadMoreData:(id)arg1;
- (void)tableViewShouldRefreshData:(id)arg1;
- (void)scrollViewDidEndScrollingAnimation:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (void)scrollViewDidScroll:(id)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)data:(id)arg1 didFinishLoadWithError:(id)arg2;
- (void)dataWillStartLoad:(id)arg1;
- (void)myGuessTitleCellDidClickedRankingButton:(id)arg1;
- (_Bool)hasUserInfo;
- (void)shouldReloadSinceErrorPressed;
- (_Bool)isEmpty;
- (void)viewWillAppear:(_Bool)arg1;
- (void)clickedBackButton:(id)arg1;
- (void)didReceiveMemoryWarning;
- (void)dealloc;
- (void)viewDidLoad;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (_Bool)shouldShowSelfDefinedNavigationBar;
- (id)initWithParameters:(id)arg1;
- (id)currentParameters;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
