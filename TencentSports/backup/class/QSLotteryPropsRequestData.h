//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "QSSportsHttpData.h"

@class NSString, QSLotteryPropsRequestInfo, QSMatchDetailLotteryMsgInfo;

__attribute__((visibility("hidden")))
@interface QSLotteryPropsRequestData : QSSportsHttpData
{
    _Bool _fullscreen;
    _Bool _isFromMsg;
    NSString *_mid;
    QSMatchDetailLotteryMsgInfo *_lotteryMsgInfo;
}

+ (long long)modelType;
+ (Class)modelClass;
@property(copy, nonatomic) QSMatchDetailLotteryMsgInfo *lotteryMsgInfo; // @synthesize lotteryMsgInfo=_lotteryMsgInfo;
@property(nonatomic) _Bool isFromMsg; // @synthesize isFromMsg=_isFromMsg;
@property(nonatomic) _Bool fullscreen; // @synthesize fullscreen=_fullscreen;
@property(copy, nonatomic) NSString *mid; // @synthesize mid=_mid;
- (void).cxx_destruct;
@property(readonly, nonatomic) QSLotteryPropsRequestInfo *requestInfo; // @dynamic requestInfo;
- (id)httpURLComponents;

@end

