//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

@class QSMyMainKEntrance, UIImageView, UILabel, UIView;

__attribute__((visibility("hidden")))
@interface QSMyMainTitleCell : UITableViewCell
{
    _Bool _showTopSeparator;
    UILabel *_titleLabel;
    UILabel *_moreLabel;
    UIImageView *_arrowImageView;
    UIView *_topSeparatorView;
    QSMyMainKEntrance *_model;
}

+ (double)heightWithModel:(id)arg1;
@property(retain, nonatomic) QSMyMainKEntrance *model; // @synthesize model=_model;
@property(retain, nonatomic) UIView *topSeparatorView; // @synthesize topSeparatorView=_topSeparatorView;
@property(retain, nonatomic) UIImageView *arrowImageView; // @synthesize arrowImageView=_arrowImageView;
@property(retain, nonatomic) UILabel *moreLabel; // @synthesize moreLabel=_moreLabel;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(nonatomic) _Bool showTopSeparator; // @synthesize showTopSeparator=_showTopSeparator;
- (void).cxx_destruct;
- (void)updateWithModel:(id)arg1;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

