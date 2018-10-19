//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "QSIndexedData.h"

#import "QSAutoUpdateProtocol-Protocol.h"

@class NSArray, NSDate, NSDictionary, NSString, QSHomeRecommendTopTabs;
@protocol QSHomeRecommendDataDelegate;

__attribute__((visibility("hidden")))
@interface QSHomeRecommendData : QSIndexedData <QSAutoUpdateProtocol>
{
    _Bool _hasMore;
    _Bool _hasNoError;
    NSString *_columnId;
    NSArray *_marquee;
    QSHomeRecommendTopTabs *_topTabs;
    NSDictionary *_reports;
    unsigned long long _autoUpdateType;
    NSString *_curVersion;
    double _newMessageUpdateInterval;
    NSArray *_liveMatchIds;
    NSDate *_nextNewMessageUpdateDate;
    NSDate *_nextLiveMatchUpdateDate;
    NSString *_lastFeedId;
}

+ (id)modelFormResponseValues:(id)arg1 extraInfo:(id)arg2 error:(id *)arg3;
+ (_Bool)cleanCacheWhenUserChanged;
@property(nonatomic) _Bool hasNoError; // @synthesize hasNoError=_hasNoError;
@property(copy, nonatomic) NSString *lastFeedId; // @synthesize lastFeedId=_lastFeedId;
@property(nonatomic) _Bool hasMore; // @synthesize hasMore=_hasMore;
@property(retain, nonatomic) NSDate *nextLiveMatchUpdateDate; // @synthesize nextLiveMatchUpdateDate=_nextLiveMatchUpdateDate;
@property(retain, nonatomic) NSDate *nextNewMessageUpdateDate; // @synthesize nextNewMessageUpdateDate=_nextNewMessageUpdateDate;
@property(retain, nonatomic) NSArray *liveMatchIds; // @synthesize liveMatchIds=_liveMatchIds;
@property(nonatomic) double newMessageUpdateInterval; // @synthesize newMessageUpdateInterval=_newMessageUpdateInterval;
@property(copy, nonatomic) NSString *curVersion; // @synthesize curVersion=_curVersion;
@property(nonatomic) unsigned long long autoUpdateType; // @synthesize autoUpdateType=_autoUpdateType;
@property(retain, nonatomic) NSDictionary *reports; // @synthesize reports=_reports;
@property(retain, nonatomic) QSHomeRecommendTopTabs *topTabs; // @synthesize topTabs=_topTabs;
@property(retain, nonatomic) NSArray *marquee; // @synthesize marquee=_marquee;
@property(copy, nonatomic) NSString *columnId; // @synthesize columnId=_columnId;
- (void).cxx_destruct;
- (void)updateContentData;
- (id)autoUpdateLiveMatchHttpURLComponents;
- (id)autoUpdateNewMessageHttpURLComponents;
- (void)onAutoUpdate;
- (_Bool)updateTimeTriggered;
- (unsigned long long)updateState;
- (void)resetWithResponseModel:(id)arg1;
- (void)updateNextMatchUpdateInfoWithMatchesInfo:(id)arg1;
- (void)getMore;
- (_Bool)resetWithMoreModels:(id)arg1;
- (id)loadMoreHttpURLComponents;
- (_Bool)canLoadMore;
- (id)indexesFromResponseData:(id)arg1;
- (id)syncContentHttpURLComponentsWithIndexes:(id)arg1;
- (id)indexHttpURLComponents;
- (void)refreshDataDidFinishWithError:(id)arg1;
- (id)init;
- (void)resetFromCacheObject:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (double)cacheExpireTime;
- (id)identifier;
- (_Bool)ignoreIndexesCacheWhenReloading;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(nonatomic) __weak id <QSHomeRecommendDataDelegate> delegate; // @dynamic delegate;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

