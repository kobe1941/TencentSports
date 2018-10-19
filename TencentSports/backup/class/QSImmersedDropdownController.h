//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "QSTableViewControllerEx.h"

#import "QSBaseDataDelegate-Protocol.h"

@class NSDictionary, NSString, QSImmersedDropdownBar, QSImmersedDropdownData;

__attribute__((visibility("hidden")))
@interface QSImmersedDropdownController : QSTableViewControllerEx <QSBaseDataDelegate>
{
    NSString *_itemId;
    NSDictionary *_jumpParams;
    unsigned long long _listStyle;
    CDUnknownBlockType _didSelectedBlock;
    CDUnknownBlockType _dismissBlock;
    QSImmersedDropdownBar *_bar;
    QSImmersedDropdownData *_dropData;
}

@property(retain, nonatomic) QSImmersedDropdownData *dropData; // @synthesize dropData=_dropData;
@property(retain, nonatomic) QSImmersedDropdownBar *bar; // @synthesize bar=_bar;
@property(copy, nonatomic) CDUnknownBlockType dismissBlock; // @synthesize dismissBlock=_dismissBlock;
@property(copy, nonatomic) CDUnknownBlockType didSelectedBlock; // @synthesize didSelectedBlock=_didSelectedBlock;
@property(nonatomic) unsigned long long listStyle; // @synthesize listStyle=_listStyle;
@property(retain, nonatomic) NSDictionary *jumpParams; // @synthesize jumpParams=_jumpParams;
@property(copy, nonatomic) NSString *itemId; // @synthesize itemId=_itemId;
- (void).cxx_destruct;
- (void)data:(id)arg1 didFinishLoadWithError:(id)arg2;
- (void)dataWillStartLoad:(id)arg1;
- (void)showError;
- (_Bool)isEmpty;
- (void)shouldReloadSinceErrorPressed;
- (id)tableViewDataLastUpdateTime:(id)arg1;
- (void)tableViewShouldRefreshData:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (void)close;
- (long long)preferredStatusBarStyle;
- (_Bool)shouldShowSelfDefinedNavigationBar;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (id)newPageDescription;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

