//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

#import "QSHomePageFeedCellBossReportProtocol-Protocol.h"
#import "QSHomeRecommendCellProtocol-Protocol.h"

@class NSString, QSHomeRecommendBaseInfo, QSWebImageView, UIImageView;

__attribute__((visibility("hidden")))
@interface QSMatchFocusCell : UITableViewCell <QSHomeRecommendCellProtocol, QSHomePageFeedCellBossReportProtocol>
{
    QSWebImageView *_focusView;
    UIImageView *_bottomView;
    UIImageView *_vipTagView;
    QSHomeRecommendBaseInfo *_info;
    id _delegate;
}

+ (double)cellHeightWithInfo:(id)arg1;
+ (_Bool)checkDataCorrectness:(id)arg1;
@property(nonatomic) __weak id delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) QSHomeRecommendBaseInfo *info; // @synthesize info=_info;
@property(retain, nonatomic) UIImageView *vipTagView; // @synthesize vipTagView=_vipTagView;
@property(retain, nonatomic) UIImageView *bottomView; // @synthesize bottomView=_bottomView;
@property(retain, nonatomic) QSWebImageView *focusView; // @synthesize focusView=_focusView;
- (void).cxx_destruct;
- (void)makeBossReportWhenUserDidSelect;
- (id)bossReportInfoWhenScrollDidEnd;
- (id)bossReportInfoWhenUserDidSelect;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)updateWithInfo:(id)arg1;
- (void)dealloc;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

