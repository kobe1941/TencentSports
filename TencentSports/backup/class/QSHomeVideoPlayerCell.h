//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "QSHomeVideoBasePlayerCell.h"

#import "QSHomeVideoPlayerViewProtocol-Protocol.h"

@class CALayer, NSString, NSTimer, QSHomeVideoPlayerCellModel, QSHomeVideoSubContentView, QSVideoListSetInfoView, QSWebImageView, UILabel, UIView;

__attribute__((visibility("hidden")))
@interface QSHomeVideoPlayerCell : QSHomeVideoBasePlayerCell <QSHomeVideoPlayerViewProtocol>
{
    QSHomeVideoSubContentView *_subContent;
    QSHomeVideoSubContentView *_baseInfoContent;
    QSHomeVideoPlayerCellModel *_cellModel;
    QSWebImageView *_vipView;
    QSVideoListSetInfoView *_setInfoView;
    UILabel *_titleLable;
    CALayer *_titleMaskLayer;
    UIView *_bottomSaparator;
    NSTimer *_autoHideTimer;
}

+ (id)actionsWillBePerformed;
+ (double)heightWithModel:(id)arg1;
@property(retain, nonatomic) NSTimer *autoHideTimer; // @synthesize autoHideTimer=_autoHideTimer;
@property(retain, nonatomic) UIView *bottomSaparator; // @synthesize bottomSaparator=_bottomSaparator;
@property(retain, nonatomic) CALayer *titleMaskLayer; // @synthesize titleMaskLayer=_titleMaskLayer;
@property(retain, nonatomic) UILabel *titleLable; // @synthesize titleLable=_titleLable;
@property(retain, nonatomic) QSVideoListSetInfoView *setInfoView; // @synthesize setInfoView=_setInfoView;
@property(retain, nonatomic) QSWebImageView *vipView; // @synthesize vipView=_vipView;
@property(retain, nonatomic) QSHomeVideoPlayerCellModel *cellModel; // @synthesize cellModel=_cellModel;
@property(retain, nonatomic) QSHomeVideoSubContentView *baseInfoContent; // @synthesize baseInfoContent=_baseInfoContent;
@property(retain, nonatomic) QSHomeVideoSubContentView *subContent; // @synthesize subContent=_subContent;
- (void).cxx_destruct;
- (void)hideTitleWithAnimated:(_Bool)arg1;
- (void)autoHide;
- (void)showTitleWithAnimated:(_Bool)arg1 autoHide:(_Bool)arg2;
- (_Bool)isTitleHidden;
- (void)startPlayVideoWithItem:(id)arg1 position:(unsigned long long)arg2 forced:(_Bool)arg3;
- (void)startPlayVideoWithItem:(id)arg1 position:(unsigned long long)arg2;
- (void)startPlayVideo;
- (void)layoutSubviews;
- (void)setListCellStyle:(unsigned long long)arg1;
- (void)dealloc;
- (void)likeButtonPressed;
- (void)sharedButtonPressed;
- (void)commentButtonPressed;
- (void)iconControlPressed;
- (void)linkButtonPressed;
- (void)updateWithModel:(id)arg1;
- (Class)_subContentClassWithModel:(id)arg1;
- (id)currentPreviewImage;
- (id)title;
- (id)currentVideoID;
- (void)tap:(id)arg1;
- (id)videoPlayerView;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
