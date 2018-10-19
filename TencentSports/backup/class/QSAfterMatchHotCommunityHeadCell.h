//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

@class NSArray, QSComTopicItem, QSPartedRichTextLabel, UILabel, UIView;

__attribute__((visibility("hidden")))
@interface QSAfterMatchHotCommunityHeadCell : UITableViewCell
{
    QSComTopicItem *_topicItem;
    QSPartedRichTextLabel *_titleLabel;
    NSArray *_textInfos;
    UIView *_underTitleContainerView;
    UILabel *_replyCntLabel;
}

+ (double)cellHeightWithTopicItem:(id)arg1;
+ (id)partedInfoWithTopicItem:(id)arg1;
@property(retain, nonatomic) UILabel *replyCntLabel; // @synthesize replyCntLabel=_replyCntLabel;
@property(retain, nonatomic) UIView *underTitleContainerView; // @synthesize underTitleContainerView=_underTitleContainerView;
@property(retain, nonatomic) NSArray *textInfos; // @synthesize textInfos=_textInfos;
@property(retain, nonatomic) QSPartedRichTextLabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) QSComTopicItem *topicItem; // @synthesize topicItem=_topicItem;
- (void).cxx_destruct;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

