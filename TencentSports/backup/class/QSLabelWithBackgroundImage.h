//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSString, UIColor, UIFont, UIImage, UIImageView, UILabel;

__attribute__((visibility("hidden")))
@interface QSLabelWithBackgroundImage : UIView
{
    UIImageView *_imageView;
    UILabel *_label;
}

@property(retain, nonatomic) UILabel *label; // @synthesize label=_label;
@property(retain, nonatomic) UIImageView *imageView; // @synthesize imageView=_imageView;
- (void).cxx_destruct;
@property(nonatomic) long long numberOfLines; // @dynamic numberOfLines;
@property(nonatomic) long long lineBreakMode; // @dynamic lineBreakMode;
@property(nonatomic) long long textAlignment; // @dynamic textAlignment;
@property(retain, nonatomic) UIColor *textColor; // @dynamic textColor;
@property(copy, nonatomic) NSString *text; // @dynamic text;
@property(retain, nonatomic) UIFont *font; // @dynamic font;
@property(retain, nonatomic) UIImage *backgroundImage; // @dynamic backgroundImage;
- (void)setFrame:(struct CGRect)arg1;
- (void)commonInit;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)initWithCoder:(id)arg1;

@end

