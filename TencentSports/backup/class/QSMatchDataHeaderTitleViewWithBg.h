//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIImageView.h>

@class QSMatchDetailInfo, QSMatchSimpleTitleView, QSMatchTitleView, UILabel;

__attribute__((visibility("hidden")))
@interface QSMatchDataHeaderTitleViewWithBg : UIImageView
{
    QSMatchDetailInfo *_detailInfo;
    UILabel *_titleLabel;
    QSMatchSimpleTitleView *_matchTitleView;
    QSMatchTitleView *_matchScroleView;
}

@property(retain, nonatomic) QSMatchTitleView *matchScroleView; // @synthesize matchScroleView=_matchScroleView;
@property(retain, nonatomic) QSMatchSimpleTitleView *matchTitleView; // @synthesize matchTitleView=_matchTitleView;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) QSMatchDetailInfo *detailInfo; // @synthesize detailInfo=_detailInfo;
- (void).cxx_destruct;
- (void)reset;
- (id)initWithFrame:(struct CGRect)arg1;

@end

