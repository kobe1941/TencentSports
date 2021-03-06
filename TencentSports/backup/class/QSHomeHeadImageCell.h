//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

#import "QSHomePageFeedCellBossReportProtocol-Protocol.h"
#import "QSHomePageFeedCellMediaPlayerProtocol-Protocol.h"
#import "QSHomeRecommendCellProtocol-Protocol.h"

@class NSString, QSHomeRecommendBaseInfo, QSWebImageView, UIImageView, UILabel, UIView;

__attribute__((visibility("hidden")))
@interface QSHomeHeadImageCell : UITableViewCell <QSHomeRecommendCellProtocol, QSHomePageFeedCellMediaPlayerProtocol, QSHomePageFeedCellBossReportProtocol>
{
    QSWebImageView *_headImageView;
    UIImageView *_titleBgView;
    UILabel *_titleLabel;
    QSHomeRecommendBaseInfo *_info;
    UIImageView *_playIndicator;
    UIView *_seperatorLine;
    id _delegate;
}

+ (double)cellHeight;
+ (_Bool)checkDataCorrectness:(id)arg1;
+ (double)cellHeightWithInfo:(id)arg1;
@property(nonatomic) __weak id delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) UIView *seperatorLine; // @synthesize seperatorLine=_seperatorLine;
@property(retain, nonatomic) UIImageView *playIndicator; // @synthesize playIndicator=_playIndicator;
@property(retain, nonatomic) QSHomeRecommendBaseInfo *info; // @synthesize info=_info;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UIImageView *titleBgView; // @synthesize titleBgView=_titleBgView;
@property(retain, nonatomic) QSWebImageView *headImageView; // @synthesize headImageView=_headImageView;
- (void).cxx_destruct;
- (void)makeBossReportWhenUserDidSelect;
- (id)bossReportInfoWhenScrollDidEnd;
- (id)bossReportInfoWhenUserDidSelect;
- (void)updateSeparatorLineFrame:(struct CGRect)arg1;
- (void)updateWithInfo:(id)arg1;
- (_Bool)shouldShowVideoTitle;
- (id)mediaItemForMediaPlayer;
- (struct CGRect)frameOfMediaPlayerInTableView:(id)arg1;
- (void)setHighlighted:(_Bool)arg1 animated:(_Bool)arg2;
- (void)setSelected:(_Bool)arg1 animated:(_Bool)arg2;
- (void)createPlayIndicator;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

