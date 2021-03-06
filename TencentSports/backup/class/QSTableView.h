//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableView.h>

@class QSLoadingMoreView, UIImage, UIImageView, UIView;
@protocol QSPullToRefreshProtocol, QSTableViewDelegate;

__attribute__((visibility("hidden")))
@interface QSTableView : UITableView
{
    UIImageView *_bgImageView;
    _Bool _usePullToRefresh;
    _Bool _useLoadingMore;
    _Bool _useSkin;
    _Bool _useFlexibleHeadImageBg;
    _Bool _isGettingMore;
    _Bool _resizingContent;
    _Bool _isRefreshHeightDynamic;
    double _flexibleHeadImageHeight;
    UIImage *_flexibleHeadImage;
    UIView<QSPullToRefreshProtocol> *_pullToRefreshView;
    QSLoadingMoreView *_loadingMoreView;
    struct UIEdgeInsets _originalInset;
}

@property(nonatomic) _Bool isRefreshHeightDynamic; // @synthesize isRefreshHeightDynamic=_isRefreshHeightDynamic;
@property(nonatomic) _Bool resizingContent; // @synthesize resizingContent=_resizingContent;
@property(nonatomic) _Bool isGettingMore; // @synthesize isGettingMore=_isGettingMore;
@property(retain, nonatomic) QSLoadingMoreView *loadingMoreView; // @synthesize loadingMoreView=_loadingMoreView;
@property(retain, nonatomic) UIView<QSPullToRefreshProtocol> *pullToRefreshView; // @synthesize pullToRefreshView=_pullToRefreshView;
@property(retain, nonatomic) UIImage *flexibleHeadImage; // @synthesize flexibleHeadImage=_flexibleHeadImage;
@property(nonatomic) double flexibleHeadImageHeight; // @synthesize flexibleHeadImageHeight=_flexibleHeadImageHeight;
@property(nonatomic) _Bool useFlexibleHeadImageBg; // @synthesize useFlexibleHeadImageBg=_useFlexibleHeadImageBg;
@property(nonatomic) struct UIEdgeInsets originalInset; // @synthesize originalInset=_originalInset;
@property(nonatomic) _Bool useSkin; // @synthesize useSkin=_useSkin;
@property(nonatomic) _Bool useLoadingMore; // @synthesize useLoadingMore=_useLoadingMore;
@property(nonatomic) _Bool usePullToRefresh; // @synthesize usePullToRefresh=_usePullToRefresh;
- (void).cxx_destruct;
- (double)pullToRefreshViewHeight;
- (double)exHeadHeigh;
- (void)forceLoadWithAnimated:(_Bool)arg1;
- (void)forceLoad;
- (void)forceLoadMore;
- (void)finishedLoading;
- (void)scrollViewDidEndDragging;
- (void)scrollViewDidEndScrollingAnimation;
- (void)updateFlexibleHeadBgWithContentOffsetY:(double)arg1;
- (void)scrollViewDidScroll;
- (void)updateLoadingMore;
- (void)setContentOffset:(struct CGPoint)arg1;
- (void)setContentSize:(struct CGSize)arg1;
- (void)getMorePressed;
@property(nonatomic) __weak id <QSTableViewDelegate> delegate; // @dynamic delegate;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)initWithFrame:(struct CGRect)arg1 style:(long long)arg2;
- (void)createPullToRefreshView;
- (void)setRefreshLoadingTipString:(id)arg1;
- (void)setRefreshTipString:(id)arg1;
- (void)setRefreshNormalTipString:(id)arg1;
- (void)setRefreshNomoreString:(id)arg1;
- (void)setLoadingMoreRefreshTipString:(id)arg1;
- (void)setLoadingMoreNormalTipString:(id)arg1;
- (void)setLoadingMoreNomoreString:(id)arg1;
- (void)reloadData;
- (void)dealloc;
- (_Bool)useDynamicalRefreshView;

@end

