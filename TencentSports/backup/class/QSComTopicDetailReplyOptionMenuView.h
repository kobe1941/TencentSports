//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "QSFullScreenView.h"

#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"

@class NSArray, NSString, UIButton, UIControl, UIImageView, UITableView, UIView;

__attribute__((visibility("hidden")))
@interface QSComTopicDetailReplyOptionMenuView : QSFullScreenView <UITableViewDataSource, UITableViewDelegate>
{
    _Bool _reverse;
    CDUnknownBlockType _selectBlock;
    NSArray *_items;
    UITableView *_mTableView;
    UIControl *_mainBgControl;
    UIView *_containerView;
    UIImageView *_containerBGImageView;
    UIImageView *_backgroundView;
    UIButton *_normalBtn;
    UIButton *_ownerOnlyBtn;
    UIButton *_myOnlyBtn;
    long long _curSelectedIndex;
}

@property(nonatomic) long long curSelectedIndex; // @synthesize curSelectedIndex=_curSelectedIndex;
@property(nonatomic) _Bool reverse; // @synthesize reverse=_reverse;
@property(retain, nonatomic) UIButton *myOnlyBtn; // @synthesize myOnlyBtn=_myOnlyBtn;
@property(retain, nonatomic) UIButton *ownerOnlyBtn; // @synthesize ownerOnlyBtn=_ownerOnlyBtn;
@property(retain, nonatomic) UIButton *normalBtn; // @synthesize normalBtn=_normalBtn;
@property(retain, nonatomic) UIImageView *backgroundView; // @synthesize backgroundView=_backgroundView;
@property(retain, nonatomic) UIImageView *containerBGImageView; // @synthesize containerBGImageView=_containerBGImageView;
@property(retain, nonatomic) UIView *containerView; // @synthesize containerView=_containerView;
@property(retain, nonatomic) UIControl *mainBgControl; // @synthesize mainBgControl=_mainBgControl;
@property(retain, nonatomic) UITableView *mTableView; // @synthesize mTableView=_mTableView;
@property(retain, nonatomic) NSArray *items; // @synthesize items=_items;
@property(copy, nonatomic) CDUnknownBlockType selectBlock; // @synthesize selectBlock=_selectBlock;
- (void).cxx_destruct;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)dismissAnimated:(_Bool)arg1;
- (void)clickedMainBG:(id)arg1;
- (void)dismiss;
- (void)showInView:(id)arg1 initialSelectIndex:(long long)arg2 atPoint:(struct CGPoint)arg3;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

