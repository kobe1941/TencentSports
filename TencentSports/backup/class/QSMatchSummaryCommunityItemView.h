//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIControl.h>

@class QSMatchSummaryCommunitItem, QSWebImageView, UILabel;

__attribute__((visibility("hidden")))
@interface QSMatchSummaryCommunityItemView : UIControl
{
    QSMatchSummaryCommunitItem *_item;
    QSWebImageView *_icon;
    UILabel *_nameLabel;
}

@property(retain, nonatomic) UILabel *nameLabel; // @synthesize nameLabel=_nameLabel;
@property(retain, nonatomic) QSWebImageView *icon; // @synthesize icon=_icon;
@property(retain, nonatomic) QSMatchSummaryCommunitItem *item; // @synthesize item=_item;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

