//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "QSMatchFocusCell.h"

@class QSWebImageViewEx, UIImageView, UILabel;

__attribute__((visibility("hidden")))
@interface QSMatchFocusNonVSMatchCell : QSMatchFocusCell
{
    QSWebImageViewEx *_logoView;
    UIImageView *_liveTagView;
    UILabel *_titleLabel;
}

@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UIImageView *liveTagView; // @synthesize liveTagView=_liveTagView;
@property(retain, nonatomic) QSWebImageViewEx *logoView; // @synthesize logoView=_logoView;
- (void).cxx_destruct;
- (void)updateWithInfo:(id)arg1;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

