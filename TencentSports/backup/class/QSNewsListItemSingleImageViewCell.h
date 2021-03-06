//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "QSNewsListItemBaseCell.h"

@class QSCircleGifImageView, UIImage, UIImageView, UIView;

__attribute__((visibility("hidden")))
@interface QSNewsListItemSingleImageViewCell : QSNewsListItemBaseCell
{
    QSCircleGifImageView *_itemImageView;
    UIView *_maskView;
    UIImageView *_playIndicator;
    UIImage *_defaultNewsImage;
}

+ (double)heightWithModel:(id)arg1;
+ (double)cellHeightWithTitle:(id)arg1 hasImageAside:(_Bool)arg2;
+ (double)imageWidth;
@property(retain, nonatomic) UIImage *defaultNewsImage; // @synthesize defaultNewsImage=_defaultNewsImage;
@property(retain, nonatomic) UIImageView *playIndicator; // @synthesize playIndicator=_playIndicator;
@property(retain, nonatomic) UIView *maskView; // @synthesize maskView=_maskView;
@property(retain, nonatomic) QSCircleGifImageView *itemImageView; // @synthesize itemImageView=_itemImageView;
- (void).cxx_destruct;
- (void)updateWithModel:(id)arg1;
- (void)layoutWithCellInfo:(id)arg1;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

