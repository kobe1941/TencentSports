//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UICollectionViewCell.h>

@class QSWebImageViewEx, UIImageView, UILabel;

__attribute__((visibility("hidden")))
@interface QSAIChatEggCell : UICollectionViewCell
{
    UILabel *_nameLabel;
    QSWebImageViewEx *_iconView;
    UIImageView *_lockMaskView;
    UIImageView *_lockIcon;
}

@property(retain, nonatomic) UIImageView *lockIcon; // @synthesize lockIcon=_lockIcon;
@property(retain, nonatomic) UIImageView *lockMaskView; // @synthesize lockMaskView=_lockMaskView;
@property(retain, nonatomic) QSWebImageViewEx *iconView; // @synthesize iconView=_iconView;
@property(retain, nonatomic) UILabel *nameLabel; // @synthesize nameLabel=_nameLabel;
- (void).cxx_destruct;
- (void)updateWithItem:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

