//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "QSPagedData.h"

@class NSArray, NSDictionary, NSMutableArray, NSString, QSVideoListDataModel;

__attribute__((visibility("hidden")))
@interface QSVideoListData : QSPagedData
{
    _Bool _fromDropdownList;
    _Bool _customCanLoadMore;
    NSDictionary *_jumpParams;
    NSString *_firstId;
    unsigned long long _pageType;
    NSMutableArray *_nextIds;
    NSString *_indexVersion;
    NSArray *_indexs;
    QSVideoListDataModel *_videoListModel;
    struct _NSRange _recentUpdateRange;
}

@property(nonatomic) _Bool customCanLoadMore; // @synthesize customCanLoadMore=_customCanLoadMore;
@property(retain, nonatomic) QSVideoListDataModel *videoListModel; // @synthesize videoListModel=_videoListModel;
@property(retain, nonatomic) NSArray *indexs; // @synthesize indexs=_indexs;
@property(copy, nonatomic) NSString *indexVersion; // @synthesize indexVersion=_indexVersion;
@property(retain, nonatomic) NSMutableArray *nextIds; // @synthesize nextIds=_nextIds;
@property(nonatomic) _Bool fromDropdownList; // @synthesize fromDropdownList=_fromDropdownList;
@property(nonatomic) unsigned long long pageType; // @synthesize pageType=_pageType;
@property(copy, nonatomic) NSString *firstId; // @synthesize firstId=_firstId;
@property(retain, nonatomic) NSDictionary *jumpParams; // @synthesize jumpParams=_jumpParams;
@property(nonatomic) struct _NSRange recentUpdateRange; // @synthesize recentUpdateRange=_recentUpdateRange;
- (void).cxx_destruct;
- (id)videoItemList;
- (_Bool)insertVideoItem:(id)arg1 withIndex:(unsigned long long)arg2;
- (_Bool)resetWithMoreModels:(id)arg1;
- (void)resetWithResponseModel:(id)arg1;
- (void)emptyMemoryCache;
- (void)updateDataWithModel:(id)arg1 loadMore:(_Bool)arg2;
- (id)videosWithData:(id)arg1;
- (id)loadMoreHttpURLComponents;
- (id)httpURLComponents;
- (double)cacheExpireTime;
- (_Bool)canLoadMore;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)init;

@end

