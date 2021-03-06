//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

#import "QSHomePageFeedCellBossReportProtocol-Protocol.h"
#import "QSHomeRecommendCellProtocol-Protocol.h"
#import "QSHorizontalTableViewDelegate-Protocol.h"

@class NSDictionary, NSString, QSHomeRecommendGuessInfo, QSHorizontalTableView, UIButton, UILabel;

__attribute__((visibility("hidden")))
@interface QSHomeGuestCell : UITableViewCell <QSHorizontalTableViewDelegate, QSHomeRecommendCellProtocol, QSHomePageFeedCellBossReportProtocol>
{
    QSHorizontalTableView *_listView;
    UILabel *_titleLabel;
    UIButton *_moreButton;
    QSHomeRecommendGuessInfo *_guessInfo;
    NSDictionary *_jumpData;
    id _delegate;
}

+ (double)cellHeightWithInfo:(id)arg1;
@property(nonatomic) __weak id delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) NSDictionary *jumpData; // @synthesize jumpData=_jumpData;
@property(retain, nonatomic) QSHomeRecommendGuessInfo *guessInfo; // @synthesize guessInfo=_guessInfo;
@property(retain, nonatomic) UIButton *moreButton; // @synthesize moreButton=_moreButton;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) QSHorizontalTableView *listView; // @synthesize listView=_listView;
- (void).cxx_destruct;
- (id)bossReportInfoWhenScrollDidEnd;
- (id)bossReportInfoWhenUserDidSelect;
- (id)generateBossReportInfo;
- (void)makeBossReportForHorizontalListViewWhenScrollDidEnd;
- (id)eventForBossReport;
- (id)sceneForBossReport;
- (void)tap:(id)arg1;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndex:(unsigned long long)arg2;
- (double)tableView:(id)arg1 widthForRowAtIndex:(unsigned long long)arg2;
- (unsigned long long)numberOfRowsInTableView:(id)arg1;
- (void)updateWithInfo:(id)arg1;
- (void)layoutSubviews;
- (void)moreButtonPressed;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

