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

@class NSMutableArray, NSString, QSMyCommunityData, QSTableView, UIButton, UIView;

__attribute__((visibility("hidden")))
@interface QSMyCommunityViewController : QSViewController <UITableViewDataSource, QSTableViewDelegate, QSBaseDataDelegate, QSPushViewControllerProtocol>
{
    _Bool _isFirstHit;
    QSMyCommunityData *_myCommunityData;
    QSTableView *_tableView;
    NSMutableArray *_myCommunities;
    UIButton *_insertCommunityBtn;
    UIView *_bottomView;
}

+ (id)allViewControllerType;
@property(nonatomic) _Bool isFirstHit; // @synthesize isFirstHit=_isFirstHit;
@property(retain, nonatomic) UIView *bottomView; // @synthesize bottomView=_bottomView;
@property(retain, nonatomic) UIButton *insertCommunityBtn; // @synthesize insertCommunityBtn=_insertCommunityBtn;
@property(retain, nonatomic) NSMutableArray *myCommunities; // @synthesize myCommunities=_myCommunities;
@property(retain, nonatomic) QSTableView *tableView; // @synthesize tableView=_tableView;
@property(retain, nonatomic) QSMyCommunityData *myCommunityData; // @synthesize myCommunityData=_myCommunityData;
- (void).cxx_destruct;
- (void)myCommunityUpdateWithItem:(id)arg1;
- (void)insertCommunityPressed:(id)arg1;
- (void)clickReturn:(id)arg1;
- (id)tableViewDataLastUpdateTime:(id)arg1;
- (_Bool)tableViewHasMoreData:(id)arg1;
- (_Bool)tableViewDataIsLoading:(id)arg1;
- (void)tableViewShouldLoadMoreData:(id)arg1;
- (void)tableViewShouldRefreshData:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (void)data:(id)arg1 didFinishLoadWithError:(id)arg2;
- (void)dataWillStartLoad:(id)arg1;
- (void)shouldReloadSinceErrorPressed;
- (id)emptyImage;
- (_Bool)isEmpty;
- (void)hideContentView;
- (void)showContentView;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)dealloc;
- (_Bool)shouldShowSelfDefinedNavigationBar;
- (id)initWithParameters:(id)arg1;
- (id)currentParameters;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
