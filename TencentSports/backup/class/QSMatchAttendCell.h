//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

#import "QSHomePageFeedCellBossReportProtocol-Protocol.h"
#import "QSHomeRecommendCellProtocol-Protocol.h"

@class NSString, QSHomeRecommendBaseInfo, QSWebImageView, UIButton, UILabel;

__attribute__((visibility("hidden")))
@interface QSMatchAttendCell : UITableViewCell <QSHomeRecommendCellProtocol, QSHomePageFeedCellBossReportProtocol>
{
    QSWebImageView *_iconView;
    UILabel *_nameLabel;
    UILabel *_descLabel;
    UIButton *_attendButton;
    QSHomeRecommendBaseInfo *_info;
    id _delegate;
}

+ (double)cellHeightWithInfo:(id)arg1;
@property(nonatomic) __weak id delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) QSHomeRecommendBaseInfo *info; // @synthesize info=_info;
@property(retain, nonatomic) UIButton *attendButton; // @synthesize attendButton=_attendButton;
@property(retain, nonatomic) UILabel *descLabel; // @synthesize descLabel=_descLabel;
@property(retain, nonatomic) UILabel *nameLabel; // @synthesize nameLabel=_nameLabel;
@property(retain, nonatomic) QSWebImageView *iconView; // @synthesize iconView=_iconView;
- (void).cxx_destruct;
- (void)makeBossReportWhenScrollDidEnd;
- (id)bossReportInfoWhenScrollDidEnd;
- (id)bossReportInfoWhenUserDidSelect;
- (id)generateBossReportInfo;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)updateWithInfo:(id)arg1;
- (void)attendButtonDidTap:(id)arg1;
@property(readonly, nonatomic) _Bool isAttended; // @dynamic isAttended;
- (void)dealloc;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
