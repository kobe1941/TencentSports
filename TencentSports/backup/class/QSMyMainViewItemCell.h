//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

@class QSRedPointView, QSWebImageView, UIImageView, UILabel, UIView;

__attribute__((visibility("hidden")))
@interface QSMyMainViewItemCell : UITableViewCell
{
    _Bool _showTopSeparator;
    double _bottomSeparatorOffset;
    UILabel *_nameLabel;
    QSWebImageView *_iconView;
    QSRedPointView *_redPointView;
    UILabel *_redPointLabel;
    UIImageView *_rightArrowImageView;
    UIView *_topSeparatorView;
    UIView *_bottomSeparatorView;
}

+ (double)heightWithModel:(id)arg1;
+ (double)heightWithWidth:(double)arg1 modal:(id)arg2;
@property(retain, nonatomic) UIView *bottomSeparatorView; // @synthesize bottomSeparatorView=_bottomSeparatorView;
@property(retain, nonatomic) UIView *topSeparatorView; // @synthesize topSeparatorView=_topSeparatorView;
@property(retain, nonatomic) UIImageView *rightArrowImageView; // @synthesize rightArrowImageView=_rightArrowImageView;
@property(retain, nonatomic) UILabel *redPointLabel; // @synthesize redPointLabel=_redPointLabel;
@property(retain, nonatomic) QSRedPointView *redPointView; // @synthesize redPointView=_redPointView;
@property(retain, nonatomic) QSWebImageView *iconView; // @synthesize iconView=_iconView;
@property(retain, nonatomic) UILabel *nameLabel; // @synthesize nameLabel=_nameLabel;
@property(nonatomic) double bottomSeparatorOffset; // @synthesize bottomSeparatorOffset=_bottomSeparatorOffset;
@property(nonatomic) _Bool showTopSeparator; // @synthesize showTopSeparator=_showTopSeparator;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)setRedPointString:(id)arg1;
- (void)updateWithModel:(id)arg1;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

