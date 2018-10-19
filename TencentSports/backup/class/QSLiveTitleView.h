//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class QSBackToVideoView, QSMatchItem, QSMatchTitleView, UILabel;

__attribute__((visibility("hidden")))
@interface QSLiveTitleView : UIView
{
    _Bool _needExchangeToVideo;
    QSMatchItem *_itemInfo;
    QSMatchTitleView *_matchView;
    QSBackToVideoView *_backToVideoView;
    UILabel *_titleLabel;
    UIView *_bgView;
}

@property(retain, nonatomic) UIView *bgView; // @synthesize bgView=_bgView;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) QSBackToVideoView *backToVideoView; // @synthesize backToVideoView=_backToVideoView;
@property(retain, nonatomic) QSMatchTitleView *matchView; // @synthesize matchView=_matchView;
@property(retain, nonatomic) QSMatchItem *itemInfo; // @synthesize itemInfo=_itemInfo;
@property(nonatomic) _Bool needExchangeToVideo; // @synthesize needExchangeToVideo=_needExchangeToVideo;
- (void).cxx_destruct;
- (void)setTextColorToBlack:(_Bool)arg1;
- (void)updateWithAlpha:(double)arg1;
- (void)update;
- (void)useDetailTitleView;
- (void)willMoveToSuperview:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end
