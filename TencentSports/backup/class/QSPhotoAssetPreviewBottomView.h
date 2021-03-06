//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class PHAsset, UIButton, UILabel;
@protocol QSPhotoAssetPreviewBottomViewDelegate;

__attribute__((visibility("hidden")))
@interface QSPhotoAssetPreviewBottomView : UIView
{
    _Bool _didGetPlayerItem;
    long long _previewMode;
    unsigned long long _selectedImagesCount;
    PHAsset *_assetModel;
    id <QSPhotoAssetPreviewBottomViewDelegate> _delegate;
    UIView *_topLine;
    UIButton *_editBtn;
    UIButton *_completeBtn;
    UILabel *_videoTooLongTipLabel;
}

+ (double)fixedHeight;
@property(retain, nonatomic) UILabel *videoTooLongTipLabel; // @synthesize videoTooLongTipLabel=_videoTooLongTipLabel;
@property(retain, nonatomic) UIButton *completeBtn; // @synthesize completeBtn=_completeBtn;
@property(retain, nonatomic) UIButton *editBtn; // @synthesize editBtn=_editBtn;
@property(retain, nonatomic) UIView *topLine; // @synthesize topLine=_topLine;
@property(nonatomic) __weak id <QSPhotoAssetPreviewBottomViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) _Bool didGetPlayerItem; // @synthesize didGetPlayerItem=_didGetPlayerItem;
@property(retain, nonatomic) PHAsset *assetModel; // @synthesize assetModel=_assetModel;
@property(nonatomic) unsigned long long selectedImagesCount; // @synthesize selectedImagesCount=_selectedImagesCount;
@property(nonatomic) long long previewMode; // @synthesize previewMode=_previewMode;
- (void).cxx_destruct;
- (void)completeBtnClicked:(id)arg1;
- (void)editBtnClicked:(id)arg1;
- (void)createVideoTooLongTipLabel;
- (void)createCompleteBtn;
- (void)createEditBtn;
- (void)refreshBtns;
- (id)initWithFrame:(struct CGRect)arg1;

@end

