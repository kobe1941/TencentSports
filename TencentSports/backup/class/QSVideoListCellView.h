//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "QSCellView.h"

@class QSMatchStateMatchVideoItem, QSWebImageView, UIImageView, UILabel;

__attribute__((visibility("hidden")))
@interface QSVideoListCellView : QSCellView
{
    _Bool _selected;
    _Bool _highlighted;
    UILabel *_titleLabel;
    UIImageView *_vipImageView;
    UIImageView *_tagBackgroundView;
    UILabel *_tagLabel;
    QSWebImageView *_tagImageView;
    QSMatchStateMatchVideoItem *_item;
    double _leftPadding;
}

@property(nonatomic) double leftPadding; // @synthesize leftPadding=_leftPadding;
@property(nonatomic) _Bool highlighted; // @synthesize highlighted=_highlighted;
@property(nonatomic) _Bool selected; // @synthesize selected=_selected;
@property(retain, nonatomic) QSMatchStateMatchVideoItem *item; // @synthesize item=_item;
@property(retain, nonatomic) QSWebImageView *tagImageView; // @synthesize tagImageView=_tagImageView;
@property(retain, nonatomic) UILabel *tagLabel; // @synthesize tagLabel=_tagLabel;
@property(retain, nonatomic) UIImageView *tagBackgroundView; // @synthesize tagBackgroundView=_tagBackgroundView;
@property(retain, nonatomic) UIImageView *vipImageView; // @synthesize vipImageView=_vipImageView;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (id)initWithFrame:(struct CGRect)arg1 reuseIdentifier:(id)arg2;

@end

