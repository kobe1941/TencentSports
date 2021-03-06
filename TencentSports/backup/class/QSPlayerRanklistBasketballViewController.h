//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "QSViewController.h"

#import "QSBaseDataDelegate-Protocol.h"
#import "QSCustomTabBarDelegate-Protocol.h"
#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"

@class NSMutableArray, NSString, QSGroupTabBar, QSPlayerRanklistBasketballData, QSScheduleDetailViewController;

__attribute__((visibility("hidden")))
@interface QSPlayerRanklistBasketballViewController : QSViewController <QSBaseDataDelegate, UITableViewDataSource, UITableViewDelegate, QSCustomTabBarDelegate>
{
    QSScheduleDetailViewController *_containerViewController;
    NSString *_columnId;
    long long _tabType;
    NSMutableArray *_tableViews;
    QSPlayerRanklistBasketballData *_playerData;
    QSGroupTabBar *_tabBar;
    unsigned long long _currentTabIndex;
}

@property(nonatomic) unsigned long long currentTabIndex; // @synthesize currentTabIndex=_currentTabIndex;
@property(retain, nonatomic) QSGroupTabBar *tabBar; // @synthesize tabBar=_tabBar;
@property(retain, nonatomic) QSPlayerRanklistBasketballData *playerData; // @synthesize playerData=_playerData;
@property(retain, nonatomic) NSMutableArray *tableViews; // @synthesize tableViews=_tableViews;
@property(nonatomic) long long tabType; // @synthesize tabType=_tabType;
@property(copy, nonatomic) NSString *columnId; // @synthesize columnId=_columnId;
@property(nonatomic) __weak QSScheduleDetailViewController *containerViewController; // @synthesize containerViewController=_containerViewController;
- (void).cxx_destruct;
- (void)data:(id)arg1 didFinishLoadWithError:(id)arg2;
- (void)dataWillStartLoad:(id)arg1;
- (struct CGPoint)centerOfLoadingView;
- (void)shouldReloadSinceErrorPressed;
- (_Bool)isEmpty;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)reloadData;
- (void)dealloc;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)tabBar:(id)arg1 didSelectSameItemAtIndex:(long long)arg2;
- (void)tabBar:(id)arg1 didSelectItemAtIndex:(long long)arg2;
- (id)tabBar:(id)arg1 titleForItemAtIndex:(long long)arg2;
- (unsigned long long)numberOfItemsInTabBar:(id)arg1;
- (void)reloadRandListTabBarAndTableViews;
- (void)removeRandListTabBarAndTableViews;
- (void)reloadTableViewWithNewIndex:(unsigned long long)arg1 replaceIndex:(unsigned long long)arg2;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

