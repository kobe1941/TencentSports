//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "QSPagedData.h"

@class NSString, QSAllMyGuessAd, QSAllMyGuessUserInfo;

__attribute__((visibility("hidden")))
@interface QSMyGuessData : QSPagedData
{
    _Bool _isEnd;
    QSAllMyGuessUserInfo *_userInfo;
    QSAllMyGuessAd *_ad;
    NSString *_offset;
}

+ (_Bool)cleanCacheWhenUserChanged;
+ (id)modelFormResponseValues:(id)arg1 extraInfo:(id)arg2 error:(id *)arg3;
@property(retain, nonatomic) NSString *offset; // @synthesize offset=_offset;
@property(nonatomic) _Bool isEnd; // @synthesize isEnd=_isEnd;
@property(retain, nonatomic) QSAllMyGuessAd *ad; // @synthesize ad=_ad;
@property(retain, nonatomic) QSAllMyGuessUserInfo *userInfo; // @synthesize userInfo=_userInfo;
- (void).cxx_destruct;
- (void)refreshData;
- (void)getMore;
- (void)forceReloadData;
- (id)loadMoreHttpURLComponents;
- (id)httpURLComponents;
- (id)init;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (_Bool)canLoadMore;

@end

