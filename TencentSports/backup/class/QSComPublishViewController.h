//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "QSViewController.h"

#import "QSBaseDataDelegate-Protocol.h"
#import "QSComPublishImageOrVideoCellDelegate-Protocol.h"
#import "QSEmotionPanelViewDelegate-Protocol.h"
#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"

@class NSMutableArray, NSString, NSURL, QSComPublishConfigData, QSComPublishContentCell, QSComPublishTitleCell, QSComPublishUploadMangement, UIButton, UITableView, UIView;

__attribute__((visibility("hidden")))
@interface QSComPublishViewController : QSViewController <QSBaseDataDelegate, UITableViewDataSource, UITableViewDelegate, QSEmotionPanelViewDelegate, QSComPublishImageOrVideoCellDelegate>
{
    _Bool _isPushedFromCommunityMainVC;
    NSMutableArray *_images;
    NSString *_mid;
    NSString *_moduleName;
    NSURL *_videoFileURL;
    CDUnknownBlockType _publishSuccessBlock;
    UIButton *_sendButton;
    UITableView *_tableView;
    UIView *_toolbar;
    UIButton *_emotionBtn;
    UIButton *_keyboardBtn;
    QSComPublishConfigData *_publishConfigData;
    QSComPublishUploadMangement *_uploadMangement;
    QSComPublishContentCell *_contentCell;
    QSComPublishTitleCell *_titleCell;
    unsigned long long _mInputMode;
    unsigned long long _mTargetKeyboardType;
    long long _mTextInputMode;
}

@property(nonatomic) long long mTextInputMode; // @synthesize mTextInputMode=_mTextInputMode;
@property(nonatomic) unsigned long long mTargetKeyboardType; // @synthesize mTargetKeyboardType=_mTargetKeyboardType;
@property(nonatomic) unsigned long long mInputMode; // @synthesize mInputMode=_mInputMode;
@property(retain, nonatomic) QSComPublishTitleCell *titleCell; // @synthesize titleCell=_titleCell;
@property(retain, nonatomic) QSComPublishContentCell *contentCell; // @synthesize contentCell=_contentCell;
@property(retain, nonatomic) QSComPublishUploadMangement *uploadMangement; // @synthesize uploadMangement=_uploadMangement;
@property(retain, nonatomic) QSComPublishConfigData *publishConfigData; // @synthesize publishConfigData=_publishConfigData;
@property(retain, nonatomic) UIButton *keyboardBtn; // @synthesize keyboardBtn=_keyboardBtn;
@property(retain, nonatomic) UIButton *emotionBtn; // @synthesize emotionBtn=_emotionBtn;
@property(retain, nonatomic) UIView *toolbar; // @synthesize toolbar=_toolbar;
@property(retain, nonatomic) UITableView *tableView; // @synthesize tableView=_tableView;
@property(retain, nonatomic) UIButton *sendButton; // @synthesize sendButton=_sendButton;
@property(copy, nonatomic) CDUnknownBlockType publishSuccessBlock; // @synthesize publishSuccessBlock=_publishSuccessBlock;
@property(nonatomic) _Bool isPushedFromCommunityMainVC; // @synthesize isPushedFromCommunityMainVC=_isPushedFromCommunityMainVC;
@property(retain, nonatomic) NSURL *videoFileURL; // @synthesize videoFileURL=_videoFileURL;
@property(copy, nonatomic) NSString *moduleName; // @synthesize moduleName=_moduleName;
@property(copy, nonatomic) NSString *mid; // @synthesize mid=_mid;
- (void).cxx_destruct;
- (void)data:(id)arg1 didFinishLoadWithError:(id)arg2;
- (void)dataWillStartLoad:(id)arg1;
- (void)comPublishImageOrVideoCellDidChange:(id)arg1;
- (void)comPublishImageOrVideoCellDidTap:(id)arg1;
- (void)comPublishImageOrVideoCell:(id)arg1 setVideoFileURL:(id)arg2;
- (id)comPublishImageOrVideoCellVideoFileURL:(id)arg1;
- (id)comPublishImageOrVideoCellImages:(id)arg1;
- (_Bool)comPublishImageOrVideoCellIsExceedTodayPublishVideoLimit:(id)arg1 shouldShowAlertWhenExceedLimit:(_Bool)arg2;
- (void)emotionPanelViewDidDelete:(id)arg1;
- (void)emotionPanelViewDidSend:(id)arg1;
- (void)emotionPanelView:(id)arg1 didSelectEmotion:(id)arg2;
- (void)testCanSend;
- (void)dismissEmotionPanelView;
- (void)showEmotionPanelView;
- (void)hideKeyboard;
- (void)keyboardBtnDidClicked:(id)arg1;
- (void)emotionBtnDidClicked:(id)arg1;
- (void)inputKeyboardWillHide:(id)arg1;
- (void)inputKeyboardWillShow:(id)arg1;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
@property(retain, nonatomic) NSMutableArray *images; // @synthesize images=_images;
- (void)dealloc;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (_Bool)isCurrentNotEmpty;
- (void)publishAction:(id)arg1;
- (void)backAction:(id)arg1;
- (_Bool)transitionShouldCancelWithAnimator:(id)arg1;
- (_Bool)shouldShowSelfDefinedNavigationBar;
- (id)newPageDescription;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

