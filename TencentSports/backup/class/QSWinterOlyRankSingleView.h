//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class QSWinterOlyMedalInfoItem, UIImageView, UILabel;

__attribute__((visibility("hidden")))
@interface QSWinterOlyRankSingleView : UIView
{
    QSWinterOlyMedalInfoItem *_medalItem;
    UIImageView *_logoImageView;
    UILabel *_tipsLabel;
}

@property(retain, nonatomic) UILabel *tipsLabel; // @synthesize tipsLabel=_tipsLabel;
@property(retain, nonatomic) UIImageView *logoImageView; // @synthesize logoImageView=_logoImageView;
@property(retain, nonatomic) QSWinterOlyMedalInfoItem *medalItem; // @synthesize medalItem=_medalItem;
- (void).cxx_destruct;
- (void)setWithMedalItem:(id)arg1 originX:(double)arg2 maxWidth:(double)arg3;
- (id)initWithFrame:(struct CGRect)arg1;

@end

