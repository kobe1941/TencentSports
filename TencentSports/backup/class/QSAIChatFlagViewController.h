//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "QSViewController.h"

#import "QSBaseDataDelegate-Protocol.h"
#import "UICollectionViewDataSource-Protocol.h"
#import "UICollectionViewDelegateFlowLayout-Protocol.h"

@class NSIndexPath, NSString, QSAIChatFlagData, UIButton, UICollectionView, UIImageView, UILabel, UIView;

__attribute__((visibility("hidden")))
@interface QSAIChatFlagViewController : QSViewController <UICollectionViewDelegateFlowLayout, UICollectionViewDataSource, QSBaseDataDelegate>
{
    _Bool _shouldAutoSelect;
    NSString *_selectedFlagID;
    CDUnknownBlockType _dismissBlock;
    UIView *_backgroudView;
    UICollectionView *_collectionView;
    UILabel *_titleLabel;
    UIButton *_comfirmButton;
    UIButton *_cancelButton;
    QSAIChatFlagData *_flagData;
    NSIndexPath *_selectedIndexPath;
    UIImageView *_leftHeart;
    UIImageView *_rightHeart;
}

@property(retain, nonatomic) UIImageView *rightHeart; // @synthesize rightHeart=_rightHeart;
@property(retain, nonatomic) UIImageView *leftHeart; // @synthesize leftHeart=_leftHeart;
@property(nonatomic) _Bool shouldAutoSelect; // @synthesize shouldAutoSelect=_shouldAutoSelect;
@property(retain, nonatomic) NSIndexPath *selectedIndexPath; // @synthesize selectedIndexPath=_selectedIndexPath;
@property(retain, nonatomic) QSAIChatFlagData *flagData; // @synthesize flagData=_flagData;
@property(retain, nonatomic) UIButton *cancelButton; // @synthesize cancelButton=_cancelButton;
@property(retain, nonatomic) UIButton *comfirmButton; // @synthesize comfirmButton=_comfirmButton;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UICollectionView *collectionView; // @synthesize collectionView=_collectionView;
@property(retain, nonatomic) UIView *backgroudView; // @synthesize backgroudView=_backgroudView;
@property(copy, nonatomic) CDUnknownBlockType dismissBlock; // @synthesize dismissBlock=_dismissBlock;
@property(copy, nonatomic) NSString *selectedFlagID; // @synthesize selectedFlagID=_selectedFlagID;
- (void).cxx_destruct;
- (void)data:(id)arg1 didFinishLoadWithError:(id)arg2;
- (void)dataWillStartLoad:(id)arg1;
- (void)shouldReloadSinceErrorPressed;
- (id)errorImageHighlight;
- (id)errorImage;
- (id)createEmptyView;
- (_Bool)isEmpty;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (void)collectionView:(id)arg1 willDisplayCell:(id)arg2 forItemAtIndexPath:(id)arg3;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (void)viewWillLayoutSubviews;
- (void)viewWillAppear:(_Bool)arg1;
- (void)cancelButtonPressed;
- (void)comfirmButtonPressed;
- (id)externInfoForBossReporter;
- (id)pageDescriptionForBossReporter;
- (id)newPageDescription;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
