//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

@class UIColor, UILabel;

__attribute__((visibility("hidden")))
@interface QSNewsCommentTitleCell : UITableViewCell
{
    long long _skinMode;
    UILabel *_titleLabel;
    UIColor *_lightTextColor;
    UIColor *_bgColor;
}

+ (double)height;
@property(retain, nonatomic) UIColor *bgColor; // @synthesize bgColor=_bgColor;
@property(retain, nonatomic) UIColor *lightTextColor; // @synthesize lightTextColor=_lightTextColor;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(nonatomic) long long skinMode; // @synthesize skinMode=_skinMode;
- (void).cxx_destruct;
- (void)updateWithCount:(long long)arg1;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

