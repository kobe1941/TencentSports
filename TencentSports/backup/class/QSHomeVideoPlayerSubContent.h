//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "QSHomeVideoSubContentView.h"

@class QSAvatarViewWith1PxBorder, UILabel;

__attribute__((visibility("hidden")))
@interface QSHomeVideoPlayerSubContent : QSHomeVideoSubContentView
{
    QSAvatarViewWith1PxBorder *_icon;
    UILabel *_titleLable;
}

+ (double)heightWithModel:(id)arg1;
@property(retain, nonatomic) UILabel *titleLable; // @synthesize titleLable=_titleLable;
@property(retain, nonatomic) QSAvatarViewWith1PxBorder *icon; // @synthesize icon=_icon;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)setListCellStyle:(unsigned long long)arg1;
- (void)updateModel:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

