//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "QSNewsArticleSkinCell.h"

@class UIButton, UIFont, UIImageView, UILabel;
@protocol QSNewsArticleRelateDelegate;

__attribute__((visibility("hidden")))
@interface QSNewsArticleRelateNewsTitleCell : QSNewsArticleSkinCell
{
    UIFont *_titleFont;
    UIImageView *_iconView;
    UILabel *_titleLabel;
    UILabel *_sufTitleLabel;
    UIButton *_moreButton;
    id <QSNewsArticleRelateDelegate> _delegate;
    double _offsetY;
}

+ (double)fixHeight;
@property(nonatomic) double offsetY; // @synthesize offsetY=_offsetY;
@property(nonatomic) __weak id <QSNewsArticleRelateDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) UIButton *moreButton; // @synthesize moreButton=_moreButton;
@property(retain, nonatomic) UILabel *sufTitleLabel; // @synthesize sufTitleLabel=_sufTitleLabel;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UIImageView *iconView; // @synthesize iconView=_iconView;
@property(retain, nonatomic) UIFont *titleFont; // @synthesize titleFont=_titleFont;
- (void).cxx_destruct;
- (void)onMoreClicked:(id)arg1;
- (void)showMore:(_Bool)arg1;
- (void)showMore:(_Bool)arg1 delegate:(id)arg2;
- (void)updateTitle:(id)arg1 icon:(id)arg2;
- (void)updateTitle:(id)arg1 sufTitle:(id)arg2;
- (void)updateTitle:(id)arg1;
- (void)_updateIcon:(id)arg1;
- (void)_updateSufTitle:(id)arg1;
- (void)_updateTitle:(id)arg1;
- (double)maxWidthFromX:(double)arg1;
- (void)setBlackSkin;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end
