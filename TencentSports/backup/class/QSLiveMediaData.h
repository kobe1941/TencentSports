//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "QSBaseHttpData.h"

@class NSString, QSLiveMediaInfo;

__attribute__((visibility("hidden")))
@interface QSLiveMediaData : QSBaseHttpData
{
    _Bool _isAudio;
    _Bool _isGettingPreviewInfo;
    _Bool _isUserPay;
    _Bool _isTrying;
    NSString *_liveId;
    NSString *_format;
}

+ (long long)modelType;
+ (Class)modelClass;
+ (_Bool)needRetryWithResponse:(id)arg1;
@property(nonatomic) _Bool isTrying; // @synthesize isTrying=_isTrying;
@property(nonatomic) _Bool isUserPay; // @synthesize isUserPay=_isUserPay;
@property(nonatomic) _Bool isGettingPreviewInfo; // @synthesize isGettingPreviewInfo=_isGettingPreviewInfo;
@property(nonatomic) _Bool isAudio; // @synthesize isAudio=_isAudio;
@property(copy, nonatomic) NSString *format; // @synthesize format=_format;
@property(copy, nonatomic) NSString *liveId; // @synthesize liveId=_liveId;
- (void).cxx_destruct;
- (id)retryHttpURLComponents;
- (id)httpURLComponents;
- (id)currentHttpURLComponentsWithHost:(id)arg1;

// Remaining properties
@property(readonly, nonatomic) QSLiveMediaInfo *model; // @dynamic model;

@end

