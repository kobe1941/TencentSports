//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSString, UIImageView, UILabel;

__attribute__((visibility("hidden")))
@interface QSMatchLivePropsPriceFloatView : UIView
{
    UIImageView *_priceIcon;
    UILabel *_priceLabel;
}

@property(retain, nonatomic) UILabel *priceLabel; // @synthesize priceLabel=_priceLabel;
@property(retain, nonatomic) UIImageView *priceIcon; // @synthesize priceIcon=_priceIcon;
- (void).cxx_destruct;
@property(copy, nonatomic) NSString *price; // @dynamic price;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

