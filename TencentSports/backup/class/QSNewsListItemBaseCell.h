//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

#import "QSHomePageFeedCellBossReportProtocol-Protocol.h"
#import "QSHomePageFeedCellReadStateProtocol-Protocol.h"
#import "QSHomeRecommendCellProtocol-Protocol.h"

@class NSString, QSHomeRecommendBaseInfo, QSNewsListItemCellInfo, QSRichTextLabel, UIImageView, UILabel, UIView;

__attribute__((visibility("hidden")))
@interface QSNewsListItemBaseCell : UITableViewCell <QSHomeRecommendCellProtocol, QSHomePageFeedCellBossReportProtocol, QSHomePageFeedCellReadStateProtocol>
{
    QSNewsListItemCellInfo *_cellInfo;
    QSRichTextLabel *_titleLabel;
    UILabel *_contentTypeLabel;
    UILabel *_tagLabel;
    UILabel *_newsCommentCountLabel;
    UIView *_seperatorLine;
    QSHomeRecommendBaseInfo *_info;
    UIView *_tagSeperatorLine;
    UIImageView *_favTag;
}

+ (double)heightWithModel:(id)arg1;
+ (struct CGSize)sizeOfTitle:(id)arg1 hasImageAside:(_Bool)arg2;
+ (_Bool)checkDataCorrectness:(id)arg1;
+ (double)cellHeightWithInfo:(id)arg1;
+ (double)cellHeightWithShowItem:(id)arg1;
+ (double)cellHeightWithTopicItem:(id)arg1;
+ (double)cellHeightWithListItem:(id)arg1;
+ (double)cellHeightWithTitle:(id)arg1 hasImageAside:(_Bool)arg2;
+ (double)imageHeight;
+ (double)imageWidth;
+ (id)cellIdentifier;
+ (id)cellWithListItem:(id)arg1 inTabeView:(id)arg2 forIndexPath:(id)arg3;
+ (void)registerClassWithAllPostTypeForTableView:(id)arg1;
+ (void)registerClassWithSingleImageViewTypeForTabelView:(id)arg1;
@property(retain, nonatomic) UIImageView *favTag; // @synthesize favTag=_favTag;
@property(retain, nonatomic) UIView *tagSeperatorLine; // @synthesize tagSeperatorLine=_tagSeperatorLine;
@property(retain, nonatomic) QSHomeRecommendBaseInfo *info; // @synthesize info=_info;
@property(retain, nonatomic) UIView *seperatorLine; // @synthesize seperatorLine=_seperatorLine;
@property(retain, nonatomic) UILabel *newsCommentCountLabel; // @synthesize newsCommentCountLabel=_newsCommentCountLabel;
@property(retain, nonatomic) UILabel *tagLabel; // @synthesize tagLabel=_tagLabel;
@property(retain, nonatomic) UILabel *contentTypeLabel; // @synthesize contentTypeLabel=_contentTypeLabel;
@property(retain, nonatomic) QSRichTextLabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) QSNewsListItemCellInfo *cellInfo; // @synthesize cellInfo=_cellInfo;
- (void).cxx_destruct;
- (void)updateWithModel:(id)arg1;
- (id)jpgImageItemWithUrl:(id)arg1;
- (id)stringFromDate:(id)arg1;
- (void)placeBottomSubviewsWithCellInfo:(id)arg1 maxWidth:(double)arg2 minPositionY:(double)arg3;
- (void)layoutWithCellInfo:(id)arg1;
- (void)shouldShowSeparatorLine:(_Bool)arg1;
- (void)layoutWithTopicItem:(id)arg1 shouldCheckReadState:(_Bool)arg2;
- (void)layoutWithShowItem:(id)arg1 shouldCheckReadState:(_Bool)arg2;
- (void)layoutWithListItem:(id)arg1 shouldCheckReadState:(_Bool)arg2;
- (void)updateReadState;
- (void)updateHasReadState;
- (id)generateBossReportInfo;
- (void)updateSeparatorLineFrame:(struct CGRect)arg1;
- (id)bossReportInfoWhenScrollDidEnd;
- (id)bossReportInfoWhenUserDidSelect;
- (void)updateWithInfo:(id)arg1;
- (void)setHighlighted:(_Bool)arg1 animated:(_Bool)arg2;
- (id)initEmptyCellWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

