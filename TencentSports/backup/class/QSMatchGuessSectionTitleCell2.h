//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "QSMatchGuessSectionTitleCell.h"

@class NSString, QSWebImageView, UIButton;

__attribute__((visibility("hidden")))
@interface QSMatchGuessSectionTitleCell2 : QSMatchGuessSectionTitleCell
{
    NSString *_adLogo;
    QSWebImageView *_adIconImageView;
    UIButton *_toMoreButton;
}

@property(retain, nonatomic) UIButton *toMoreButton; // @synthesize toMoreButton=_toMoreButton;
@property(retain, nonatomic) QSWebImageView *adIconImageView; // @synthesize adIconImageView=_adIconImageView;
@property(retain, nonatomic) NSString *adLogo; // @synthesize adLogo=_adLogo;
- (void).cxx_destruct;
- (void)update;
- (void)prepareForReuse;
- (void)addToMoreTarget:(id)arg1 action:(SEL)arg2;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

