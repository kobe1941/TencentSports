//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class QSAvatarView, QSPropsRanklistDetailUserRankInfo, UIImageView, UILabel;

__attribute__((visibility("hidden")))
@interface QSPropsRanklistDetailUserRankView : UIView
{
    QSAvatarView *_avatarView;
    UIImageView *_avatarBorderView;
    UIImageView *_crownView;
    UIImageView *_rankView;
    UILabel *_rankLabel;
    UILabel *_usernameLabel;
    UILabel *_contributionValueLabel;
    UILabel *_noRankLabel;
    QSPropsRanklistDetailUserRankInfo *_info;
}

+ (double)height;
- (void).cxx_destruct;
- (void)updateWithInfo:(id)arg1;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

