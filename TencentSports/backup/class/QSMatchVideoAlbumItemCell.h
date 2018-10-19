//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

@class QSMatchVideoItem, QSWebImageView, UIImageView, UILabel;

__attribute__((visibility("hidden")))
@interface QSMatchVideoAlbumItemCell : UITableViewCell
{
    QSMatchVideoItem *_videoItem;
    UILabel *_preheadLabel;
    QSWebImageView *_coverView;
    UIImageView *_tipBgImageView;
    UILabel *_durationLabel;
    UILabel *_titleLabel;
}

+ (double)height;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UILabel *durationLabel; // @synthesize durationLabel=_durationLabel;
@property(retain, nonatomic) UIImageView *tipBgImageView; // @synthesize tipBgImageView=_tipBgImageView;
@property(retain, nonatomic) QSWebImageView *coverView; // @synthesize coverView=_coverView;
@property(retain, nonatomic) UILabel *preheadLabel; // @synthesize preheadLabel=_preheadLabel;
@property(retain, nonatomic) QSMatchVideoItem *videoItem; // @synthesize videoItem=_videoItem;
- (void).cxx_destruct;
- (void)refreshUI;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

