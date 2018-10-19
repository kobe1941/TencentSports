//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "QSNewsListItemBaseCell.h"

#import "QSHomePageFeedCellJumpProtocol-Protocol.h"

@class NSString, QSCircleGifImageView, UIImageView, UILabel;

__attribute__((visibility("hidden")))
@interface QSNewsListItemMultipleImageViewCell : QSNewsListItemBaseCell <QSHomePageFeedCellJumpProtocol>
{
    int _imageIndexByClicked;
    QSCircleGifImageView *_leftImageView;
    QSCircleGifImageView *_middleImageView;
    QSCircleGifImageView *_rightImageView;
    UIImageView *_imageCountImageView;
    UILabel *_imageCountLabel;
}

+ (double)heightWithModel:(id)arg1;
+ (double)maxImageHeight;
+ (double)maxImageWidth;
+ (double)normalImageHeight;
+ (double)normalImageWidth;
+ (double)imageHeight;
+ (double)imageWidth;
+ (double)cellHeightWithTitle:(id)arg1 hasImageAside:(_Bool)arg2;
@property(retain, nonatomic) UILabel *imageCountLabel; // @synthesize imageCountLabel=_imageCountLabel;
@property(retain, nonatomic) UIImageView *imageCountImageView; // @synthesize imageCountImageView=_imageCountImageView;
@property(retain, nonatomic) QSCircleGifImageView *rightImageView; // @synthesize rightImageView=_rightImageView;
@property(retain, nonatomic) QSCircleGifImageView *middleImageView; // @synthesize middleImageView=_middleImageView;
@property(retain, nonatomic) QSCircleGifImageView *leftImageView; // @synthesize leftImageView=_leftImageView;
@property(nonatomic) int imageIndexByClicked; // @synthesize imageIndexByClicked=_imageIndexByClicked;
- (void).cxx_destruct;
- (void)triggerJumpWhenUserDidSelect;
- (void)updateWithModel:(id)arg1;
- (void)layoutWithCellInfo:(id)arg1;
- (id)getImageGifUrlByIndex:(int)arg1;
- (id)getImageUrlByIndex:(int)arg1;
- (long long)getImageTypeByIndex:(int)arg1;
- (id)getImageViewByIndex:(int)arg1;
- (void)tap:(id)arg1;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
