//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "QSViewController.h"

#import "QSBaseDataDelegate-Protocol.h"
#import "QSCommunityInputBarDelegate-Protocol.h"
#import "QSTableViewDelegate-Protocol.h"
#import "UIGestureRecognizerDelegate-Protocol.h"
#import "UITableViewDataSource-Protocol.h"

@class NSString, QSComTopicDetailReplyItem, QSCommunityInputBar, QSMessageListData, QSTableView;

__attribute__((visibility("hidden")))
@interface QSMyMessageViewController : QSViewController <QSTableViewDelegate, UITableViewDataSource, QSBaseDataDelegate, QSCommunityInputBarDelegate, UIGestureRecognizerDelegate>
{
    QSTableView *_tableView;
    QSCommunityInputBar *_inputBar;
    QSMessageListData *_messageData;
    QSComTopicDetailReplyItem *_targetReplyItem;
}

@property(retain, nonatomic) QSComTopicDetailReplyItem *targetReplyItem; // @synthesize targetReplyItem=_targetReplyItem;
@property(retain, nonatomic) QSMessageListData *messageData; // @synthesize messageData=_messageData;
@property(retain, nonatomic) QSCommunityInputBar *inputBar; // @synthesize inputBar=_inputBar;
@property(retain, nonatomic) QSTableView *tableView; // @synthesize tableView=_tableView;
- (void).cxx_destruct;
- (void)updateInputBar;
- (_Bool)gestureRecognizerShouldBegin:(id)arg1;
- (void)tapGestureAction:(id)arg1;
- (void)startReply;
- (void)resignInputBar;
- (_Bool)inputBarShouldReturn:(id)arg1;
- (void)data:(id)arg1 didFinishLoadWithError:(id)arg2;
- (void)dataWillStartLoad:(id)arg1;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
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
- (void)shouldReloadSinceErrorPressed;
- (_Bool)isEmpty;
- (void)dealloc;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

