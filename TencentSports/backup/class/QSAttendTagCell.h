//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UICollectionViewCell.h>

@class QSWebImageView, UIImageView, UILabel;

__attribute__((visibility("hidden")))
@interface QSAttendTagCell : UICollectionViewCell
{
    QSWebImageView *_iconImageView;
    UILabel *_nameLabel;
    UIImageView *_selectImageView;
}

@property(retain, nonatomic) UIImageView *selectImageView; // @synthesize selectImageView=_selectImageView;
@property(retain, nonatomic) UILabel *nameLabel; // @synthesize nameLabel=_nameLabel;
@property(retain, nonatomic) QSWebImageView *iconImageView; // @synthesize iconImageView=_iconImageView;
- (void).cxx_destruct;
- (void)setAttendTagCellSelected:(_Bool)arg1;
- (void)updateWithModel:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

