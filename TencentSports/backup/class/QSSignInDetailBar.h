//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class UIButton, UILabel;

__attribute__((visibility("hidden")))
@interface QSSignInDetailBar : UIView
{
    UIButton *_backButton;
    UILabel *_titleLable;
    UIButton *_shareButton;
}

@property(retain, nonatomic) UIButton *shareButton; // @synthesize shareButton=_shareButton;
@property(retain, nonatomic) UILabel *titleLable; // @synthesize titleLable=_titleLable;
@property(retain, nonatomic) UIButton *backButton; // @synthesize backButton=_backButton;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)setTitle:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

