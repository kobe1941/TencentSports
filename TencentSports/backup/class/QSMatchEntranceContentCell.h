//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class UIImageView, UILabel;

__attribute__((visibility("hidden")))
@interface QSMatchEntranceContentCell : UIView
{
    UILabel *_dateLabel;
    UIImageView *_verticalSeparatorLine;
    UILabel *_titleLabel;
    UIImageView *_triangleView;
}

+ (id)defaultCellIdentifier;
@property(retain, nonatomic) UIImageView *triangleView; // @synthesize triangleView=_triangleView;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UIImageView *verticalSeparatorLine; // @synthesize verticalSeparatorLine=_verticalSeparatorLine;
@property(retain, nonatomic) UILabel *dateLabel; // @synthesize dateLabel=_dateLabel;
- (void).cxx_destruct;
- (void)updateWithInfo:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

