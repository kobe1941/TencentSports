//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UICollectionViewCell.h>

#import "UIGestureRecognizerDelegate-Protocol.h"

@class NSString, PHAsset, QSImageDetailPageView, UILabel;

__attribute__((visibility("hidden")))
@interface QSPhotoAssetImagePreviewCell : UICollectionViewCell <UIGestureRecognizerDelegate>
{
    double _topBarOffset;
    CDUnknownBlockType _excuteWhenPhotoAssetImagePreviewCellDidTap;
    PHAsset *_assetModel;
    QSImageDetailPageView *_detailView;
    UILabel *_topTipLable;
}

@property(retain, nonatomic) UILabel *topTipLable; // @synthesize topTipLable=_topTipLable;
@property(retain, nonatomic) QSImageDetailPageView *detailView; // @synthesize detailView=_detailView;
@property(retain, nonatomic) PHAsset *assetModel; // @synthesize assetModel=_assetModel;
@property(copy, nonatomic) CDUnknownBlockType excuteWhenPhotoAssetImagePreviewCellDidTap; // @synthesize excuteWhenPhotoAssetImagePreviewCellDidTap=_excuteWhenPhotoAssetImagePreviewCellDidTap;
@property(nonatomic) double topBarOffset; // @synthesize topBarOffset=_topBarOffset;
- (void).cxx_destruct;
- (_Bool)gestureRecognizer:(id)arg1 shouldRequireFailureOfGestureRecognizer:(id)arg2;
- (void)updateTopTipWithText:(id)arg1;
- (void)detailViewDidTap:(id)arg1;
- (void)clearImage;
- (void)updateWithModel:(id)arg1;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

