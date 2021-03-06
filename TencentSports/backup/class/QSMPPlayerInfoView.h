//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "UICollectionViewDataSource-Protocol.h"
#import "UICollectionViewDelegate-Protocol.h"
#import "UICollectionViewDelegateFlowLayout-Protocol.h"

@class NSIndexPath, NSMutableArray, NSString, QSMPMatchStateBasketballTeamInfo, QSMPPlayerInfoAdjustBG, QSMPPlayerInfoGradientBG, UICollectionView;
@protocol QSMPPlayerInfoCellDelegate;

__attribute__((visibility("hidden")))
@interface QSMPPlayerInfoView : UIView <UICollectionViewDelegateFlowLayout, UICollectionViewDataSource, UICollectionViewDelegate>
{
    _Bool _showAnimation;
    int _animationCellCount;
    float _shownCellWidth;
    id <QSMPPlayerInfoCellDelegate> _delegate;
    NSString *_teamColor;
    NSIndexPath *_selectedIndexPath;
    UICollectionView *_collectionView;
    QSMPMatchStateBasketballTeamInfo *_playerStat;
    long long _teamType;
    NSMutableArray *_startedPlayers;
    NSMutableArray *_endedPlayers;
    QSMPPlayerInfoGradientBG *_gradientBG;
    QSMPPlayerInfoAdjustBG *_adjustBG;
}

@property(retain, nonatomic) QSMPPlayerInfoAdjustBG *adjustBG; // @synthesize adjustBG=_adjustBG;
@property(retain, nonatomic) QSMPPlayerInfoGradientBG *gradientBG; // @synthesize gradientBG=_gradientBG;
@property(nonatomic) float shownCellWidth; // @synthesize shownCellWidth=_shownCellWidth;
@property(nonatomic) int animationCellCount; // @synthesize animationCellCount=_animationCellCount;
@property(retain, nonatomic) NSMutableArray *endedPlayers; // @synthesize endedPlayers=_endedPlayers;
@property(retain, nonatomic) NSMutableArray *startedPlayers; // @synthesize startedPlayers=_startedPlayers;
@property(nonatomic) long long teamType; // @synthesize teamType=_teamType;
@property(retain, nonatomic) QSMPMatchStateBasketballTeamInfo *playerStat; // @synthesize playerStat=_playerStat;
@property(retain, nonatomic) UICollectionView *collectionView; // @synthesize collectionView=_collectionView;
@property(retain, nonatomic) NSIndexPath *selectedIndexPath; // @synthesize selectedIndexPath=_selectedIndexPath;
@property(retain, nonatomic) NSString *teamColor; // @synthesize teamColor=_teamColor;
@property(nonatomic) _Bool showAnimation; // @synthesize showAnimation=_showAnimation;
@property(nonatomic) __weak id <QSMPPlayerInfoCellDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (void)collectionView:(id)arg1 willDisplayCell:(id)arg2 forItemAtIndexPath:(id)arg3;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (int)getCellStateWithIndexPath:(id)arg1;
- (void)getAnimationCellCount;
- (void)updatePlayerStat:(id)arg1 teamType:(long long)arg2;
- (id)getPlayerWithIndexPath:(id)arg1;
- (void)closeGuide;
- (void)layoutSubviews;
- (void)showGuide;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

