//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "QSPagedData.h"

@class QSMyReplyTopicsInfo;

__attribute__((visibility("hidden")))
@interface QSMyReplyTopicsData : QSPagedData
{
    QSMyReplyTopicsInfo *_replyTopicsInfo;
}

+ (_Bool)cleanCacheWhenUserChanged;
@property(retain, nonatomic) QSMyReplyTopicsInfo *replyTopicsInfo; // @synthesize replyTopicsInfo=_replyTopicsInfo;
- (void).cxx_destruct;
- (_Bool)resetWithMoreModels:(id)arg1;
- (id)loadMoreHttpURLComponents;
- (void)resetWithResponseModel:(id)arg1;
- (id)httpURLComponents;
- (id)identifier;
- (double)cacheExpireTime;

@end

