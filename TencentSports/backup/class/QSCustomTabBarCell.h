//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UICollectionViewCell.h>

@class UILabel;

__attribute__((visibility("hidden")))
@interface QSCustomTabBarCell : UICollectionViewCell
{
    _Bool _animating;
    _Bool _userSelected;
    double _percent;
    UILabel *_titleLabel;
}

+ (double)widthForItemWithTitle:(id)arg1;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(nonatomic) _Bool userSelected; // @synthesize userSelected=_userSelected;
@property(nonatomic) double percent; // @synthesize percent=_percent;
@property(nonatomic) _Bool animating; // @synthesize animating=_animating;
- (void).cxx_destruct;
- (void)animatUserSelectd;
- (void)updatePercent;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

