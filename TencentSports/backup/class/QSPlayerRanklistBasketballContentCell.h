//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

@class QSAvatarViewWith1PxBorder_AvatarCenter, QSPlayerRanklistBasketballTabDataItem;

__attribute__((visibility("hidden")))
@interface QSPlayerRanklistBasketballContentCell : UITableViewCell
{
    _Bool _showFullSeparatorLine;
    QSAvatarViewWith1PxBorder_AvatarCenter *_playerImageView;
    QSPlayerRanklistBasketballTabDataItem *_tabDataItem;
}

+ (id)defaultCellIdentifier;
+ (double)height;
@property(retain, nonatomic) QSPlayerRanklistBasketballTabDataItem *tabDataItem; // @synthesize tabDataItem=_tabDataItem;
@property(retain, nonatomic) QSAvatarViewWith1PxBorder_AvatarCenter *playerImageView; // @synthesize playerImageView=_playerImageView;
@property(nonatomic) _Bool showFullSeparatorLine; // @synthesize showFullSeparatorLine=_showFullSeparatorLine;
- (void).cxx_destruct;
- (void)updateWithContentItem:(id)arg1;
- (void)drawRect:(struct CGRect)arg1;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

