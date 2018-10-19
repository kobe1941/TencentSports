//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

@class QSWebImageView, UIImageView, UILabel;

__attribute__((visibility("hidden")))
@interface QSPropsRanklistVivoInfoCell : UITableViewCell
{
    QSWebImageView *_iconView;
    UILabel *_titleLabel;
    UILabel *_nameLabel;
    UILabel *_pointsLabel;
    UIImageView *_arrowView;
}

+ (double)fixedHeight;
@property(retain, nonatomic) UIImageView *arrowView; // @synthesize arrowView=_arrowView;
@property(retain, nonatomic) UILabel *pointsLabel; // @synthesize pointsLabel=_pointsLabel;
@property(retain, nonatomic) UILabel *nameLabel; // @synthesize nameLabel=_nameLabel;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) QSWebImageView *iconView; // @synthesize iconView=_iconView;
- (void).cxx_destruct;
- (void)updateWithIcon:(id)arg1 title:(id)arg2 name:(id)arg3 points:(id)arg4;
- (void)updateWithInfo:(id)arg1;
- (void)updateWithJumpItem:(id)arg1;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end
