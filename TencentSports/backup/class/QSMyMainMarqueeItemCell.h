//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UICollectionViewCell.h>

@class QSMyMainMarquee, QSWebImageView;

__attribute__((visibility("hidden")))
@interface QSMyMainMarqueeItemCell : UICollectionViewCell
{
    QSWebImageView *_iconView;
    QSMyMainMarquee *_marqueeItem;
}

+ (struct CGSize)cellSize;
@property(retain, nonatomic) QSMyMainMarquee *marqueeItem; // @synthesize marqueeItem=_marqueeItem;
@property(retain, nonatomic) QSWebImageView *iconView; // @synthesize iconView=_iconView;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect)arg1;

@end

