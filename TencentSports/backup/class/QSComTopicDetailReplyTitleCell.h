//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

@class QSAvatarView, QSComTopicDetailReplyItem, QSMatchItem, UIButton, UIImageView, UILabel;
@protocol QSComTopicDetailReplyTitleCellDelegate;

__attribute__((visibility("hidden")))
@interface QSComTopicDetailReplyTitleCell : UITableViewCell
{
    _Bool _isPK;
    _Bool _dontShownFloor;
    id <QSComTopicDetailReplyTitleCellDelegate> _delegate;
    UIButton *_replyButton;
    QSMatchItem *_matchItem;
    QSComTopicDetailReplyItem *_replyItem;
    QSAvatarView *_avatarView;
    UILabel *_nameLabel;
    UIImageView *_adminTagImageView;
    UIImageView *_vipImageView;
    UILabel *_floorAndDateLabel;
    UIButton *_surpportButton;
}

+ (double)cellHeightWithReplyItem:(id)arg1;
@property(retain, nonatomic) UIButton *surpportButton; // @synthesize surpportButton=_surpportButton;
@property(retain, nonatomic) UILabel *floorAndDateLabel; // @synthesize floorAndDateLabel=_floorAndDateLabel;
@property(retain, nonatomic) UIImageView *vipImageView; // @synthesize vipImageView=_vipImageView;
@property(retain, nonatomic) UIImageView *adminTagImageView; // @synthesize adminTagImageView=_adminTagImageView;
@property(retain, nonatomic) UILabel *nameLabel; // @synthesize nameLabel=_nameLabel;
@property(retain, nonatomic) QSAvatarView *avatarView; // @synthesize avatarView=_avatarView;
@property(nonatomic) _Bool dontShownFloor; // @synthesize dontShownFloor=_dontShownFloor;
@property(retain, nonatomic) QSComTopicDetailReplyItem *replyItem; // @synthesize replyItem=_replyItem;
@property(retain, nonatomic) QSMatchItem *matchItem; // @synthesize matchItem=_matchItem;
@property(nonatomic) _Bool isPK; // @synthesize isPK=_isPK;
@property(readonly, nonatomic) UIButton *replyButton; // @synthesize replyButton=_replyButton;
@property(nonatomic) __weak id <QSComTopicDetailReplyTitleCellDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)update;
- (void)surpportButtonDidTap:(id)arg1;
- (void)headButtonDidTap:(id)arg1;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end
