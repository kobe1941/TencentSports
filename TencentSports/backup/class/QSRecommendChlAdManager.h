//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "QSChannelAdManager.h"

@class NSMutableArray, NSMutableDictionary, QSHomeBannerAdCell;

__attribute__((visibility("hidden")))
@interface QSRecommendChlAdManager : QSChannelAdManager
{
    _Bool _needUpdateAds;
    _Bool _isInAdLandingView;
    QSHomeBannerAdCell *_bannerAdCell;
    NSMutableArray *_expandedCellsIndexPath;
    NSMutableDictionary *_videoInfoDic;
}

@property(retain, nonatomic) NSMutableDictionary *videoInfoDic; // @synthesize videoInfoDic=_videoInfoDic;
@property(retain, nonatomic) NSMutableArray *expandedCellsIndexPath; // @synthesize expandedCellsIndexPath=_expandedCellsIndexPath;
@property(retain, nonatomic) QSHomeBannerAdCell *bannerAdCell; // @synthesize bannerAdCell=_bannerAdCell;
@property(nonatomic) _Bool isInAdLandingView; // @synthesize isInAdLandingView=_isInAdLandingView;
@property(nonatomic) _Bool needUpdateAds; // @synthesize needUpdateAds=_needUpdateAds;
- (void).cxx_destruct;
- (void)pauseBannerAdCellWhenInvisable:(id)arg1 inTableView:(id)arg2;
- (void)playBannerAdCell:(id)arg1 inTableView:(id)arg2;
- (_Bool)isAdCellVisible:(id)arg1 inTableView:(id)arg2;
- (void)cellLoaded:(id)arg1 inTableView:(id)arg2 indexPath:(id)arg3;
- (id)mergeAds:(id)arg1 offset:(long long)arg2;
- (void)removeExpandedCellIndexPath:(id)arg1;
- (void)addExpandedCellIndexPath:(id)arg1;
- (void)updateAds;
- (id)initWithChannel:(id)arg1;

@end

