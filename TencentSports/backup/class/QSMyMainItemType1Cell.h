//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UICollectionViewCell.h>

@class QSMyMainEntranceItem, QSRedPointView, QSWebImageView, UILabel;

__attribute__((visibility("hidden")))
@interface QSMyMainItemType1Cell : UICollectionViewCell
{
    QSMyMainEntranceItem *_entranceItem;
    UILabel *_nameLabel;
    QSWebImageView *_iconView;
    QSRedPointView *_redPointView;
    UILabel *_redPointLabel;
}

+ (struct CGSize)cellSize;
@property(retain, nonatomic) UILabel *redPointLabel; // @synthesize redPointLabel=_redPointLabel;
@property(retain, nonatomic) QSRedPointView *redPointView; // @synthesize redPointView=_redPointView;
@property(retain, nonatomic) QSWebImageView *iconView; // @synthesize iconView=_iconView;
@property(retain, nonatomic) UILabel *nameLabel; // @synthesize nameLabel=_nameLabel;
@property(retain, nonatomic) QSMyMainEntranceItem *entranceItem; // @synthesize entranceItem=_entranceItem;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)setRedPointString:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

