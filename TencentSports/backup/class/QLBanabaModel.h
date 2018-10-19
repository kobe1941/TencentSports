//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, QLASIFormDataRequest, QLASIHTTPRequest;
@protocol QLBanabaModelDelegate;

@interface QLBanabaModel : NSObject
{
    double minimumTimeIntervalForCurrentSeconds;
    double maxTimeIntervalForCurrentSeconds;
    unsigned long long timeIntervalFromRemoteServer;
    NSString *_timestamp;
    long long jce_ddwLastStamp;
    int jce_dwLoopInterval;
    _Bool needLiveRequestData;
    unsigned long long _banabaType;
    _Bool _laterTryWhenBizError;
    _Bool _firstReqesutBanabaListByVideo;
    id <QLBanabaModelDelegate> _delegate;
    QLASIHTTPRequest *_gASIHTTPRequest;
    QLASIFormDataRequest *_gASIFormDataRequest;
}

@property(nonatomic) _Bool firstReqesutBanabaListByVideo; // @synthesize firstReqesutBanabaListByVideo=_firstReqesutBanabaListByVideo;
@property(retain, nonatomic) QLASIFormDataRequest *gASIFormDataRequest; // @synthesize gASIFormDataRequest=_gASIFormDataRequest;
@property(retain, nonatomic) QLASIHTTPRequest *gASIHTTPRequest; // @synthesize gASIHTTPRequest=_gASIHTTPRequest;
@property(nonatomic) id <QLBanabaModelDelegate> delegate; // @synthesize delegate=_delegate;
- (void)banabaModelRequestPostMessageBanabaByTargetID:(id)arg1 withCommentMessage:(id)arg2 withTimestamp:(id)arg3 withQQToken:(id)arg4 withQQCookie:(id)arg5;
- (void)banabaModelRequestPostLikeBanabaByTargetID:(id)arg1 withCommentID:(id)arg2 withQQToken:(id)arg3 withQQCookie:(id)arg4;
- (void)banabaModelRequestBanabaListsByTargetID:(id)arg1 unwithUin:(id)arg2 unwithSKey:(id)arg3 unwithTimestamp:(id)arg4;
- (void)banabaModelRequestTargetIDByVideoID:(id)arg1;
- (void)isBizError;
- (void)restoreBizError;
- (id)obtainRealTargetIDByLiveTargetID:(id)arg1;
- (_Bool)isOtherRequestOnlineBymodelID:(long long)arg1;
- (_Bool)isTargetIDRequestOnline;
- (void)banabaModelRequestBanabaListsByfullURL:(id)arg1;
- (_Bool)needRequestIsWithinRangeTimeBySecond:(unsigned long long)arg1;
- (void)cancelHttpRequest;
- (void)cancelFormHttpRequest;
- (void)updateRangeTimeIntervelToDefaultValue;
- (void)updateRangeTimeIntervelForCurrentSecond:(unsigned long long)arg1;
- (void)dealloc;
- (id)init;
- (void)jce_banabaModelRequestPostMessageBanabaByContentKey:(id)arg1 withCommentMessage:(id)arg2 withTimestamp:(id)arg3;
- (void)jce_banabaModelRequestPostLikeBanabaByContentKey:(id)arg1 withCommentID:(id)arg2;
- (void)jce_banabaModelRequestBanabaListsByContentKey:(id)arg1 unwithTimestamp:(id)arg2;
- (void)jce_banabaModelRequestContentKeyByVideoID:(id)arg1 banabaType:(unsigned long long)arg2;
- (_Bool)jce_isOtherRequestOnline;
- (_Bool)jce_responseProtocolOnline:(Class)arg1;
- (_Bool)jce_isContentKeyRequestOnline;
- (void)jce_banabaModelRequestLiveBanabaListsByTargetID:(id)arg1 withStartTime:(id)arg2;
- (void)rightnowLiveRequestDataIsTrue;
- (void)delaySetTrueByjce_dwLoopInterval;

@end

