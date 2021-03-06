//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

@class NSArray, QSAvatarView, QSComTopicItem, QSPartedRichTextLabel, UIActivityIndicatorView, UIButton, UIImageView, UILabel, UIView;
@protocol QSComTopicDetailTitleCellDelegate;

__attribute__((visibility("hidden")))
@interface QSComTopicDetailTitleCell : UITableViewCell
{
    QSComTopicItem *_topicItem;
    id <QSComTopicDetailTitleCellDelegate> _delegate;
    UIView *_subContainerView;
    UIButton *_followButton;
    UIActivityIndicatorView *_followAIView;
    QSAvatarView *_avatarView;
    UILabel *_nameLabel;
    UIImageView *_vipImageView;
    UILabel *_dateLabel;
    UIImageView *_adminTagImageView;
    QSPartedRichTextLabel *_titleLabel;
    NSArray *_textInfos;
}

+ (id)partedInfoWithTopicItem:(id)arg1;
+ (double)cellHeightWithTopicItem:(id)arg1;
@property(retain, nonatomic) NSArray *textInfos; // @synthesize textInfos=_textInfos;
@property(retain, nonatomic) QSPartedRichTextLabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UIImageView *adminTagImageView; // @synthesize adminTagImageView=_adminTagImageView;
@property(retain, nonatomic) UILabel *dateLabel; // @synthesize dateLabel=_dateLabel;
@property(retain, nonatomic) UIImageView *vipImageView; // @synthesize vipImageView=_vipImageView;
@property(retain, nonatomic) UILabel *nameLabel; // @synthesize nameLabel=_nameLabel;
@property(retain, nonatomic) QSAvatarView *avatarView; // @synthesize avatarView=_avatarView;
@property(retain, nonatomic) UIActivityIndicatorView *followAIView; // @synthesize followAIView=_followAIView;
@property(retain, nonatomic) UIButton *followButton; // @synthesize followButton=_followButton;
@property(retain, nonatomic) UIView *subContainerView; // @synthesize subContainerView=_subContainerView;
@property(nonatomic) __weak id <QSComTopicDetailTitleCellDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) QSComTopicItem *topicItem; // @synthesize topicItem=_topicItem;
- (void).cxx_destruct;
- (void)update;
- (void)updateUIForFollowedStatus;
- (void)headImageViewDidTap:(id)arg1;
- (void)clickedBtnFollow:(id)arg1;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

