//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "QSCellView.h"

@class QSWebImageView, UIButton, UIImageView, UILabel;

__attribute__((visibility("hidden")))
@interface QSHomeGuestCellView : QSCellView
{
    QSWebImageView *_avatar;
    UILabel *_nameLable;
    UILabel *_descLable;
    UILabel *_titleLable;
    UILabel *_dateLable;
    UIImageView *_diamondView;
    UIButton *_priceView;
}

@property(retain, nonatomic) UIButton *priceView; // @synthesize priceView=_priceView;
@property(retain, nonatomic) UIImageView *diamondView; // @synthesize diamondView=_diamondView;
@property(retain, nonatomic) UILabel *dateLable; // @synthesize dateLable=_dateLable;
@property(retain, nonatomic) UILabel *titleLable; // @synthesize titleLable=_titleLable;
@property(retain, nonatomic) UILabel *descLable; // @synthesize descLable=_descLable;
@property(retain, nonatomic) UILabel *nameLable; // @synthesize nameLable=_nameLable;
@property(retain, nonatomic) QSWebImageView *avatar; // @synthesize avatar=_avatar;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)updateModel:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1 reuseIdentifier:(id)arg2;

@end

