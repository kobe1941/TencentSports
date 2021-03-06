//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "QSViewController.h"

#import "QSBaseDataDelegate-Protocol.h"
#import "QSCommunityInputBarDelegate-Protocol.h"
#import "QSNewsCommentCellDelegate-Protocol.h"
#import "QSTableViewDelegate-Protocol.h"
#import "UITableViewDataSource-Protocol.h"

@class NSString, QSCommunityInputBar, QSNewsCommentData, QSNewsCommentItem, QSTableView;

__attribute__((visibility("hidden")))
@interface QSAfterMatchCommentViewController : QSViewController <QSTableViewDelegate, UITableViewDataSource, QSNewsCommentCellDelegate, QSBaseDataDelegate, QSCommunityInputBarDelegate>
{
    _Bool _isEndMatch;
    NSString *_matchId;
    NSString *_targetId;
    QSNewsCommentData *_commentData;
    QSNewsCommentItem *_replyCommentItem;
    QSTableView *_tableView;
    QSCommunityInputBar *_inputBar;
}

@property(retain, nonatomic) QSCommunityInputBar *inputBar; // @synthesize inputBar=_inputBar;
@property(retain, nonatomic) QSTableView *tableView; // @synthesize tableView=_tableView;
@property(retain, nonatomic) QSNewsCommentItem *replyCommentItem; // @synthesize replyCommentItem=_replyCommentItem;
@property(retain, nonatomic) QSNewsCommentData *commentData; // @synthesize commentData=_commentData;
@property(nonatomic) _Bool isEndMatch; // @synthesize isEndMatch=_isEndMatch;
@property(retain, nonatomic) NSString *targetId; // @synthesize targetId=_targetId;
@property(retain, nonatomic) NSString *matchId; // @synthesize matchId=_matchId;
- (void).cxx_destruct;
- (void)doHttpSendTextAndPicture:(id)arg1;
- (void)sendInputTextAndPicture;
- (_Bool)inputBarShouldReturn:(id)arg1;
- (void)inputBarDidEndEditing:(id)arg1;
- (void)inputBarDidStartEditing:(id)arg1;
- (_Bool)inputBarWillStartEditing:(id)arg1 withMode:(unsigned long long)arg2;
- (void)communityInputBarOnMaskTap:(id)arg1;
- (void)replyCommentItem:(id)arg1;
- (void)stopUserInput;
- (void)newsCommentCellOnSupport:(id)arg1 supportButton:(id)arg2;
- (void)newsCommentCellOnIgnore:(id)arg1;
- (void)newsCommentCellOnBan:(id)arg1;
- (void)newsCommentCellOnDelete:(id)arg1;
- (void)newsCommentCellOnReport:(id)arg1;
- (void)newsCommentCellOnCopy:(id)arg1;
- (void)newsCommentCellOnReply:(id)arg1;
- (id)newsCommentMenuMaskShowInView;
- (void)initCommentData;
- (void)data:(id)arg1 didFinishLoadWithError:(id)arg2;
- (void)dataWillStartLoad:(id)arg1;
- (void)scrollViewDidEndScrollingAnimation:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (void)scrollViewDidScroll:(id)arg1;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (id)tableViewDataLastUpdateTime:(id)arg1;
- (_Bool)tableViewHasMoreData:(id)arg1;
- (_Bool)tableViewDataIsLoading:(id)arg1;
- (void)tableViewShouldLoadMoreData:(id)arg1;
- (void)tableViewShouldRefreshData:(id)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (_Bool)isEmpty;
- (void)shouldReloadSinceErrorPressed;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)dealloc;
- (id)externInfoForBossReporter;
- (id)newPageDescription;
- (_Bool)needBossReporter;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

