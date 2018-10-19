//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "QSBaseAdCell.h"

@class CALayer, QSPartedRichTextLabel, QSRichTextLabel, QSWebImageView, UILabel;

__attribute__((visibility("hidden")))
@interface QSCommunityAdCell : QSBaseAdCell
{
    _Bool _hideSplitLine;
    unsigned long long _adCellStyle;
    QSWebImageView *_headImageView;
    UILabel *_advertiserLabel;
    CALayer *_separatorLine;
    QSPartedRichTextLabel *_titleLabel;
    QSRichTextLabel *_summaryLabel;
}

+ (id)titleInfoWithText:(id)arg1;
+ (double)cellTitleHeightForText:(id)arg1;
+ (double)imageHeight:(id)arg1;
+ (struct CGSize)sizeForViewWithData:(id)arg1 withStyle:(unsigned long long)arg2;
@property(retain, nonatomic) QSRichTextLabel *summaryLabel; // @synthesize summaryLabel=_summaryLabel;
@property(retain, nonatomic) QSPartedRichTextLabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) CALayer *separatorLine; // @synthesize separatorLine=_separatorLine;
@property(retain, nonatomic) UILabel *advertiserLabel; // @synthesize advertiserLabel=_advertiserLabel;
@property(retain, nonatomic) QSWebImageView *headImageView; // @synthesize headImageView=_headImageView;
@property(nonatomic) _Bool hideSplitLine; // @synthesize hideSplitLine=_hideSplitLine;
@property(nonatomic) unsigned long long adCellStyle; // @synthesize adCellStyle=_adCellStyle;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)updateImageView;
- (void)updateSummaryWithText:(id)arg1;
- (void)updateTitleWithText:(id)arg1;
- (void)updateWithAdItem:(id)arg1;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end
