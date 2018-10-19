//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "QSViewController.h"

#import "ArticleAdManagerDelegate-Protocol.h"
#import "QSBaseDataDelegate-Protocol.h"
#import "QSComTopicDetailContentCellDelegate-Protocol.h"
#import "QSComTopicDetailReplyListDataDelegate-Protocol.h"
#import "QSComTopicDetailReplyParentReplyCellDelegate-Protocol.h"
#import "QSComTopicDetailReplyTitleCellDelegate-Protocol.h"
#import "QSComTopicDetailShareCellDelegate-Protocol.h"
#import "QSComTopicDetailTitleCellDelegate-Protocol.h"
#import "QSComTopicDetailVideoContentCellDelegate-Protocol.h"
#import "QSCombiningDataDelegate-Protocol.h"
#import "QSInputBarDelegate-Protocol.h"
#import "QSShareKitDelegate-Protocol.h"
#import "QSTableViewDelegate-Protocol.h"
#import "QSTopicDetailZanTableViewCellDelegate-Protocol.h"
#import "UIGestureRecognizerDelegate-Protocol.h"
#import "UINavigationControllerDelegate-Protocol.h"
#import "UITableViewDataSource-Protocol.h"

@class NSDictionary, NSIndexPath, NSString, QSArticleAdManager, QSComMatchInfoData, QSComTopicDetailData, QSComTopicDetailReplyItem, QSComTopicDetailReplyListData, QSComTopicDetailReplyOptionMenuView, QSCombiningData, QSCommunityInputBar, QSTableView, QSTopicDetailZanTableViewCell, UIView;

__attribute__((visibility("hidden")))
@interface QSAfterMatchHotCommunityViewController : QSViewController <UITableViewDataSource, QSTableViewDelegate, QSInputBarDelegate, UINavigationControllerDelegate, QSCombiningDataDelegate, QSShareKitDelegate, QSBaseDataDelegate, QSComTopicDetailReplyListDataDelegate, QSTopicDetailZanTableViewCellDelegate, UIGestureRecognizerDelegate, ArticleAdManagerDelegate, QSComTopicDetailTitleCellDelegate, QSComTopicDetailReplyTitleCellDelegate, QSComTopicDetailShareCellDelegate, QSComTopicDetailVideoContentCellDelegate, QSComTopicDetailReplyParentReplyCellDelegate, QSComTopicDetailContentCellDelegate>
{
    _Bool _dontClearTagetReplyItem;
    _Bool _isSubReply;
    _Bool _isUserReload;
    NSString *_matchId;
    NSString *_mid;
    NSString *_tid;
    CDUnknownBlockType _DeleteTopicBlock;
    CDUnknownBlockType _ModityTopicSatusBlock;
    QSTableView *_tableView;
    QSCommunityInputBar *_inputBar;
    QSComTopicDetailData *_topicDetailData;
    QSCombiningData *_combiningData;
    QSComTopicDetailReplyListData *_replyListData;
    QSComMatchInfoData *_matchDetailData;
    long long _replyListOption;
    QSComTopicDetailReplyItem *_targetReplyItem;
    QSComTopicDetailReplyItem *_tmpTargetReplyItem;
    QSComTopicDetailReplyItem *_currentReplyItem;
    QSArticleAdManager *_articleAdMgr;
    NSIndexPath *_adIndexPath;
    QSTopicDetailZanTableViewCell *_zanCell;
    UIView *_replyHeadView;
    NSDictionary *_report;
    QSComTopicDetailReplyOptionMenuView *_replyOptionMenuView;
    long long _replyOptionToSelectIndex;
    long long _replyOptionSelectIndex;
}

@property(nonatomic) long long replyOptionSelectIndex; // @synthesize replyOptionSelectIndex=_replyOptionSelectIndex;
@property(nonatomic) long long replyOptionToSelectIndex; // @synthesize replyOptionToSelectIndex=_replyOptionToSelectIndex;
@property(retain, nonatomic) QSComTopicDetailReplyOptionMenuView *replyOptionMenuView; // @synthesize replyOptionMenuView=_replyOptionMenuView;
@property(retain, nonatomic) NSDictionary *report; // @synthesize report=_report;
@property(retain, nonatomic) UIView *replyHeadView; // @synthesize replyHeadView=_replyHeadView;
@property(nonatomic) _Bool isUserReload; // @synthesize isUserReload=_isUserReload;
@property(retain, nonatomic) QSTopicDetailZanTableViewCell *zanCell; // @synthesize zanCell=_zanCell;
@property(retain, nonatomic) NSIndexPath *adIndexPath; // @synthesize adIndexPath=_adIndexPath;
@property(retain, nonatomic) QSArticleAdManager *articleAdMgr; // @synthesize articleAdMgr=_articleAdMgr;
@property(nonatomic) _Bool isSubReply; // @synthesize isSubReply=_isSubReply;
@property(retain, nonatomic) QSComTopicDetailReplyItem *currentReplyItem; // @synthesize currentReplyItem=_currentReplyItem;
@property(nonatomic) _Bool dontClearTagetReplyItem; // @synthesize dontClearTagetReplyItem=_dontClearTagetReplyItem;
@property(retain, nonatomic) QSComTopicDetailReplyItem *tmpTargetReplyItem; // @synthesize tmpTargetReplyItem=_tmpTargetReplyItem;
@property(retain, nonatomic) QSComTopicDetailReplyItem *targetReplyItem; // @synthesize targetReplyItem=_targetReplyItem;
@property(nonatomic) long long replyListOption; // @synthesize replyListOption=_replyListOption;
@property(retain, nonatomic) QSComMatchInfoData *matchDetailData; // @synthesize matchDetailData=_matchDetailData;
@property(retain, nonatomic) QSComTopicDetailReplyListData *replyListData; // @synthesize replyListData=_replyListData;
@property(retain, nonatomic) QSCombiningData *combiningData; // @synthesize combiningData=_combiningData;
@property(retain, nonatomic) QSComTopicDetailData *topicDetailData; // @synthesize topicDetailData=_topicDetailData;
@property(retain, nonatomic) QSCommunityInputBar *inputBar; // @synthesize inputBar=_inputBar;
@property(retain, nonatomic) QSTableView *tableView; // @synthesize tableView=_tableView;
@property(copy, nonatomic) CDUnknownBlockType ModityTopicSatusBlock; // @synthesize ModityTopicSatusBlock=_ModityTopicSatusBlock;
@property(copy, nonatomic) CDUnknownBlockType DeleteTopicBlock; // @synthesize DeleteTopicBlock=_DeleteTopicBlock;
@property(copy, nonatomic) NSString *tid; // @synthesize tid=_tid;
@property(copy, nonatomic) NSString *mid; // @synthesize mid=_mid;
@property(retain, nonatomic) NSString *matchId; // @synthesize matchId=_matchId;
- (void).cxx_destruct;
- (_Bool)shouldFullScreenDirectly;
- (id)scene;
- (_Bool)p_isAdCellForIndexPath:(id)arg1;
- (void)loadVideoPicItem;
- (id)p_buildAdIndexPath;
- (void)p_updateAdIndexPath;
- (void)onLoadedFailed;
- (void)onTADItemLoaded:(_Bool)arg1;
- (id)p_primaryModuleId;
- (void)inputBar:(id)arg1 willChangeToFrame:(struct CGRect)arg2 withDuration:(double)arg3;
- (_Bool)inputBarShouldReturn:(id)arg1;
- (void)inputBarDidEndEditing:(id)arg1;
- (_Bool)inputBarWillStartEditing:(id)arg1 withMode:(unsigned long long)arg2;
- (void)updateInputBar;
- (void)comTopicDetailShareCell:(id)arg1 didSelectShareTargetType:(unsigned long long)arg2;
- (void)supportTableViewCell:(id)arg1 didTapUser:(id)arg2;
- (void)zanCellDidOperationFinished:(id)arg1;
- (void)comTopicDetailTitleCell:(id)arg1 didTapAvatarButton:(id)arg2;
- (void)navigateToMoreRepliesViewControllerWithReplyItem:(id)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)showTopicImageContents:(id)arg1 atIndex:(unsigned long long)arg2;
- (void)showImages:(id)arg1 placeHolderImages:(id)arg2 atIndex:(long long)arg3;
- (void)tableView:(id)arg1 didEndDisplayingCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (void)clickedReplyHeadView:(id)arg1;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 normalReplyHeightForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 topReplyHeightForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 mainTopicHeightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 replyCellForRowAtIndexPath:(id)arg2 replyItem:(id)arg3;
- (id)tableView:(id)arg1 mainTopicCellForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)scrollViewDidEndScrollingAnimation:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (void)scrollViewDidScroll:(id)arg1;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (id)tableViewDataLastUpdateTime:(id)arg1;
- (_Bool)tableViewHasMoreData:(id)arg1;
- (_Bool)tableViewDataIsLoading:(id)arg1;
- (void)tableViewShouldLoadMoreData:(id)arg1;
- (void)tableViewShouldRefreshData:(id)arg1;
- (void)startReply;
- (void)combiningData:(id)arg1 didFinishLoadWithData:(id)arg2 error:(id)arg3;
- (void)combiningData:(id)arg1 willStartLoadWithData:(id)arg2;
- (void)combiningDataDidReadCacheSucceed:(id)arg1;
- (void)comTopicDetailReplyListData:(id)arg1 didGetReplyListFinishAtIndex:(unsigned long long)arg2 error:(id)arg3;
- (void)data:(id)arg1 didFinishLoadWithError:(id)arg2;
- (void)data:(id)arg1 didFinishFinallyWithError:(id)arg2;
- (void)dataWillStartLoad:(id)arg1;
- (_Bool)isEmpty;
- (void)shouldReloadSinceErrorPressed;
- (void)continueGettingData;
- (void)reloadReplyListsWithOptions:(long long)arg1 forceReload:(_Bool)arg2;
- (id)infoWillBeShared;
- (void)topicTipViewDidDeleteAction;
- (void)topicTipViewDidReportAction;
- (void)topicTipViewDidSetEliteAction;
- (void)didReplyWithItem:(id)arg1;
- (void)topicTipViewDidCopyAction;
- (void)topicTipViewDidForbidForeverAction;
- (void)topicTipViewDidForbid3DaysAction;
- (void)replyUserAtIndexPath:(id)arg1;
- (_Bool)canPerformAction:(SEL)arg1 withSender:(id)arg2;
- (_Bool)canBecomeFirstResponder;
- (void)showAlertMenuWithReplyItem:(id)arg1 inView:(id)arg2 actionOnlyReport:(_Bool)arg3;
- (void)replyTitleCell:(id)arg1 didTapSupportButton:(id)arg2;
- (void)replyTitleCell:(id)arg1 didTapUser:(id)arg2;
- (void)qsComTopicDetailContentCell:(id)arg1 didLongPressWithItem:(id)arg2 actionOnlyReport:(_Bool)arg3;
- (void)qsComTopicDetailReplyParentReplyCell:(id)arg1 didLongPressWithItem:(id)arg2;
- (void)menuCtrWillHide:(id)arg1;
- (void)showContent;
- (void)hideContentView;
- (void)showContentView;
- (void)saveCurrntTopicItem;
- (_Bool)gestureRecognizerShouldBegin:(id)arg1;
- (void)tapGestureAction:(id)arg1;
- (void)handleBackPress:(id)arg1;
- (_Bool)isCurrentNotEmpty;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)dealloc;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (id)externInfoForBossReporter;
- (void)userLoginStateChanged;
- (id)newPageDescription;
- (_Bool)needBossReporter;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

