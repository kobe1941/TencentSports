//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

@class NSMutableArray, QSMatchSummaryCommunityItems, UIView;

__attribute__((visibility("hidden")))
@interface QSMatchSummaryCommunityCell : UITableViewCell
{
    NSMutableArray *_itemViews;
    QSMatchSummaryCommunityItems *_items;
    UIView *_bottomSeparatorView;
}

+ (double)heightWithModel:(id)arg1;
+ (id)actionsWillBePerformed;
@property(retain, nonatomic) UIView *bottomSeparatorView; // @synthesize bottomSeparatorView=_bottomSeparatorView;
@property(retain, nonatomic) QSMatchSummaryCommunityItems *items; // @synthesize items=_items;
@property(retain, nonatomic) NSMutableArray *itemViews; // @synthesize itemViews=_itemViews;
- (void).cxx_destruct;
- (void)updateWithModel:(id)arg1;
- (void)itemPressed:(id)arg1;
- (void)reloadData;
- (void)layoutSubviews;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

