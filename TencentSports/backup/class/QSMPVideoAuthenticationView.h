//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "QSMPAuthenticationView.h"

@class UIButton;

__attribute__((visibility("hidden")))
@interface QSMPVideoAuthenticationView : QSMPAuthenticationView
{
    _Bool _shouldShowDefaultActionBuyButton1;
    UIButton *_buyButton1;
    UIButton *_buyButton2;
}

@property(nonatomic) _Bool shouldShowDefaultActionBuyButton1; // @synthesize shouldShowDefaultActionBuyButton1=_shouldShowDefaultActionBuyButton1;
@property(retain, nonatomic) UIButton *buyButton2; // @synthesize buyButton2=_buyButton2;
@property(retain, nonatomic) UIButton *buyButton1; // @synthesize buyButton1=_buyButton1;
- (void).cxx_destruct;
- (void)loginOrSwitchAccountViewDidTap:(id)arg1;
- (void)buyButtonPressed:(id)arg1;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

