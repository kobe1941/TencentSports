//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "QSVerticalSplitListViewController.h"

#import "QSBaseDataDelegate-Protocol.h"

@class NSString, QSComAllCircleListData, QSComPublishUploadMangement, UIButton;

__attribute__((visibility("hidden")))
@interface QSCommunityListViewController : QSVerticalSplitListViewController <QSBaseDataDelegate>
{
    _Bool _chooseSingleCommunity;
    _Bool _needRefresh;
    QSComAllCircleListData *_listData;
    CDUnknownBlockType _viewControllerDismissExcuteBlock;
    QSComPublishUploadMangement *_uploadMangement;
    UIButton *_rightNavigationBtn;
    NSString *_currentChoosedCid;
    NSString *_currentChoosedModuleName;
}

@property(copy, nonatomic) NSString *currentChoosedModuleName; // @synthesize currentChoosedModuleName=_currentChoosedModuleName;
@property(copy, nonatomic) NSString *currentChoosedCid; // @synthesize currentChoosedCid=_currentChoosedCid;
@property(retain, nonatomic) UIButton *rightNavigationBtn; // @synthesize rightNavigationBtn=_rightNavigationBtn;
@property(nonatomic) _Bool needRefresh; // @synthesize needRefresh=_needRefresh;
@property(nonatomic) __weak QSComPublishUploadMangement *uploadMangement; // @synthesize uploadMangement=_uploadMangement;
@property(copy, nonatomic) CDUnknownBlockType viewControllerDismissExcuteBlock; // @synthesize viewControllerDismissExcuteBlock=_viewControllerDismissExcuteBlock;
@property(nonatomic) _Bool chooseSingleCommunity; // @synthesize chooseSingleCommunity=_chooseSingleCommunity;
@property(retain, nonatomic) QSComAllCircleListData *listData; // @synthesize listData=_listData;
- (void).cxx_destruct;
- (void)updateUIWhenChooseSingleCommunityWithItem:(id)arg1;
- (void)circleFollowChangeNotification:(id)arg1;
- (void)cacheWillBeCleaned:(id)arg1;
- (void)didSelectRightRowAtIndexPath:(id)arg1 withLeftRow:(unsigned long long)arg2;
- (id)tableView:(id)arg1 cellInRightListViewAtIndexPath:(id)arg2 withLeftRow:(unsigned long long)arg3;
- (double)heightInRightListViewAtIndexPath:(id)arg1 withLeftRow:(unsigned long long)arg2;
- (unsigned long long)numberOfRowsInRightListViewAtSection:(unsigned long long)arg1 withLeftRow:(unsigned long long)arg2;
- (unsigned long long)numberOfSectionsInRightListViewWithLeftRow:(unsigned long long)arg1;
- (id)tableView:(id)arg1 cellInLeftListViewAtRow:(long long)arg2;
- (double)heightInLeftListViewAtRow:(unsigned long long)arg1;
- (unsigned long long)numberOfRowsInLeftListView;
- (_Bool)needsContinueRefreshing:(id)arg1 sinceCacheHasExpiredWithTimeOut:(double)arg2;
- (void)data:(id)arg1 didFinishLoadWithError:(id)arg2;
- (void)dataWillStartLoad:(id)arg1;
- (void)chooseModel:(id)arg1;
- (void)rightFinishedBarButtonDidTapped:(id)arg1;
- (void)leftReturnBarButtonDidTapped:(id)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)dealloc;
- (void)shouldReloadSinceErrorPressed;
- (_Bool)shouldShowSelfDefinedNavigationBar;
- (id)newPageDescription;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

