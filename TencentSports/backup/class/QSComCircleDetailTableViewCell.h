//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

#import "QSHomePageFeedCellReadStateProtocol-Protocol.h"

@class CALayer, NSArray, NSMutableArray, NSString, QSAvatarView, QSComTopicItem, QSNewsListItemCellInfo, QSPartedRichTextLabel, QSRichTextLabel, UIButton, UIImageView, UILabel;

__attribute__((visibility("hidden")))
@interface QSComCircleDetailTableViewCell : UITableViewCell <QSHomePageFeedCellReadStateProtocol>
{
    CDUnknownBlockType _excuteWhenZanTopicOperationSuccess;
    QSNewsListItemCellInfo *_cellInfo;
    NSArray *_mPartedInfo;
    QSComTopicItem *_model;
    QSAvatarView *_avatarView;
    UILabel *_nameLabel;
    UIImageView *_vipImageView;
    QSPartedRichTextLabel *_titleLabel;
    QSRichTextLabel *_contentLabel;
    UILabel *_dateLabel;
    UIButton *_zanButton;
    UILabel *_zanAnimationLabel;
    UIButton *_commentButton;
    NSMutableArray *_images;
    CALayer *_separatorLine;
}

+ (id)partedInfoWithTopicItem:(id)arg1;
+ (double)CellHeightForModel:(id)arg1;
+ (id)bottomGeneralTextColor;
+ (id)bottomZanOrCommentFont;
+ (id)bottomGeneralFont;
+ (id)contentTextColor;
+ (id)contentFont;
+ (id)titleTextColor;
+ (id)titleFont;
@property(retain, nonatomic) CALayer *separatorLine; // @synthesize separatorLine=_separatorLine;
@property(retain, nonatomic) NSMutableArray *images; // @synthesize images=_images;
@property(retain, nonatomic) UIButton *commentButton; // @synthesize commentButton=_commentButton;
@property(retain, nonatomic) UILabel *zanAnimationLabel; // @synthesize zanAnimationLabel=_zanAnimationLabel;
@property(retain, nonatomic) UIButton *zanButton; // @synthesize zanButton=_zanButton;
@property(retain, nonatomic) UILabel *dateLabel; // @synthesize dateLabel=_dateLabel;
@property(retain, nonatomic) QSRichTextLabel *contentLabel; // @synthesize contentLabel=_contentLabel;
@property(retain, nonatomic) QSPartedRichTextLabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UIImageView *vipImageView; // @synthesize vipImageView=_vipImageView;
@property(retain, nonatomic) UILabel *nameLabel; // @synthesize nameLabel=_nameLabel;
@property(retain, nonatomic) QSAvatarView *avatarView; // @synthesize avatarView=_avatarView;
@property(retain, nonatomic) QSComTopicItem *model; // @synthesize model=_model;
@property(retain, nonatomic) NSArray *mPartedInfo; // @synthesize mPartedInfo=_mPartedInfo;
@property(retain, nonatomic) QSNewsListItemCellInfo *cellInfo; // @synthesize cellInfo=_cellInfo;
@property(copy, nonatomic) CDUnknownBlockType excuteWhenZanTopicOperationSuccess; // @synthesize excuteWhenZanTopicOperationSuccess=_excuteWhenZanTopicOperationSuccess;
- (void).cxx_destruct;
- (void)updateReadState;
- (void)updateHasReadState;
- (void)updateZanStyle;
- (void)uploadZanInformation;
- (void)showZanAnimation;
- (void)showFakeZan;
- (id)formattedNumStr:(long long)arg1;
- (void)zanButtonDidClicked:(id)arg1;
- (void)commentButtonDidClicked:(id)arg1;
- (void)avatarViewDidTap:(id)arg1;
- (void)resetImageView:(id)arg1;
- (void)layoutSubviews;
- (void)updateWithModel:(id)arg1;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
