//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UICollectionViewCell.h>

@class NSString, QSVideoTagItemInfo, UILabel;

__attribute__((visibility("hidden")))
@interface QSVideoSubChannelCell : UICollectionViewCell
{
    NSString *_content;
    UILabel *_contentLable;
    QSVideoTagItemInfo *_model;
}

@property(retain, nonatomic) QSVideoTagItemInfo *model; // @synthesize model=_model;
@property(retain, nonatomic) UILabel *contentLable; // @synthesize contentLable=_contentLable;
@property(copy, nonatomic) NSString *content; // @synthesize content=_content;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)layoutSubChannelCell;
- (id)initWithFrame:(struct CGRect)arg1;

@end
