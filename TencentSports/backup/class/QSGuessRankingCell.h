//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

@class QSAvatarView, QSGuessRankingItem, QSWebImageView, UIImage, UIImageView, UILabel;

__attribute__((visibility("hidden")))
@interface QSGuessRankingCell : UITableViewCell
{
    UILabel *_serialLabel;
    QSAvatarView *_avatarImageView;
    UIImageView *_triangleView;
    UIImageView *_kCoinView;
    UILabel *_usernameLabel;
    UILabel *_kCoinCntLabel;
    UILabel *_winCntLabel;
    UILabel *_loseCntLabel;
    UILabel *_winPercentLabel;
    UIImage *_triangle1;
    UIImage *_triangle2;
    UIImage *_triangle3;
    UIImage *_triangleX;
    UIImageView *_myselfBgBorderImageView;
    QSGuessRankingItem *_listItem;
    QSWebImageView *_itemImgView;
    UILabel *_itemTitleLab;
    UILabel *_itemSummaryLab;
    UILabel *_commentsLabel;
    UIImageView *_commentsBgView;
    UIImageView *_typeIconView;
    UIImageView *_videoIconView;
}

+ (id)getReuseIdentifier;
+ (double)getCellHeight;
@property(retain, nonatomic) UIImageView *videoIconView; // @synthesize videoIconView=_videoIconView;
@property(retain, nonatomic) UIImageView *typeIconView; // @synthesize typeIconView=_typeIconView;
@property(retain, nonatomic) UIImageView *commentsBgView; // @synthesize commentsBgView=_commentsBgView;
@property(retain, nonatomic) UILabel *commentsLabel; // @synthesize commentsLabel=_commentsLabel;
@property(retain, nonatomic) UILabel *itemSummaryLab; // @synthesize itemSummaryLab=_itemSummaryLab;
@property(retain, nonatomic) UILabel *itemTitleLab; // @synthesize itemTitleLab=_itemTitleLab;
@property(retain, nonatomic) QSWebImageView *itemImgView; // @synthesize itemImgView=_itemImgView;
@property(retain, nonatomic) QSGuessRankingItem *listItem; // @synthesize listItem=_listItem;
- (void).cxx_destruct;
- (void)refresh;
- (void)layoutCellWithListItem:(id)arg1;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

