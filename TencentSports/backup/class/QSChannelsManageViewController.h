//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "QSViewController.h"

#import "LXReorderableCollectionViewDataSource-Protocol.h"
#import "LXReorderableCollectionViewDelegateFlowLayout-Protocol.h"
#import "QSLeagueCollectionEditHeaderViewDelegate-Protocol.h"
#import "QSPushViewControllerProtocol-Protocol.h"

@class NSMutableArray, NSString, UICollectionView, UIView;
@protocol QSChannelsManageViewControllerDelegate;

__attribute__((visibility("hidden")))
@interface QSChannelsManageViewController : QSViewController <LXReorderableCollectionViewDataSource, LXReorderableCollectionViewDelegateFlowLayout, QSLeagueCollectionEditHeaderViewDelegate, QSPushViewControllerProtocol>
{
    id <QSChannelsManageViewControllerDelegate> _delegate;
    UICollectionView *_collectionView;
    NSMutableArray *_followed;
    NSMutableArray *_unFollowed;
    UIView *_loadingView;
    UIView *_errorView;
}

+ (id)allViewControllerType;
@property(retain, nonatomic) UIView *errorView; // @synthesize errorView=_errorView;
@property(retain, nonatomic) UIView *loadingView; // @synthesize loadingView=_loadingView;
@property(retain, nonatomic) NSMutableArray *unFollowed; // @synthesize unFollowed=_unFollowed;
@property(retain, nonatomic) NSMutableArray *followed; // @synthesize followed=_followed;
@property(retain, nonatomic) UICollectionView *collectionView; // @synthesize collectionView=_collectionView;
@property(nonatomic) __weak id <QSChannelsManageViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)shouldReloadSinceErrorPressed;
- (_Bool)isEmpty;
- (void)removeError;
- (void)showError;
- (void)removeLoading;
- (void)showLoading;
- (void)collectionView:(id)arg1 layout:(id)arg2 didEndDraggingItemAtIndexPath:(id)arg3;
- (void)collectionView:(id)arg1 layout:(id)arg2 willEndDraggingItemAtIndexPath:(id)arg3;
- (void)collectionView:(id)arg1 layout:(id)arg2 didBeginDraggingItemAtIndexPath:(id)arg3;
- (void)collectionView:(id)arg1 layout:(id)arg2 willBeginDraggingItemAtIndexPath:(id)arg3;
- (_Bool)collectionView:(id)arg1 itemAtIndexPath:(id)arg2 canMoveToIndexPath:(id)arg3;
- (_Bool)collectionView:(id)arg1 canMoveItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 itemAtIndexPath:(id)arg2 didMoveToIndexPath:(id)arg3;
- (void)collectionView:(id)arg1 itemAtIndexPath:(id)arg2 willMoveToIndexPath:(id)arg3;
- (id)dateFormatterFromInteger:(long long)arg1;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (id)collectionView:(id)arg1 viewForSupplementaryElementOfKind:(id)arg2 atIndexPath:(id)arg3;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (struct UIEdgeInsets)collectionView:(id)arg1 layout:(id)arg2 insetForSectionAtIndex:(long long)arg3;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (void)editButtonClickedOfHeaderView:(id)arg1;
- (void)setEditing:(_Bool)arg1;
- (void)handleBackPress:(id)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)dealloc;
- (void)viewDidLoad;
- (_Bool)shouldShowSelfDefinedNavigationBar;
- (id)initWithParameters:(id)arg1;
- (id)currentParameters;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
