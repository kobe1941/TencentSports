//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "QSModel.h"

@class NSString, QSSportsMediaCameraInfo, QSSportsMediaCameraItem, QSSportsMediaExternAuth, QSSportsMediaMatchInfo, QSSportsMediaPreviewInfo, QSSportsMediaServiceGuideInfo, QSSportsMediaVideoInfo;

__attribute__((visibility("hidden")))
@interface QSSportsMediaInfo : QSModel
{
    _Bool _isPay;
    _Bool _isUserPay;
    _Bool _isUserVip;
    _Bool _canUseTicket;
    long long _ret;
    NSString *_retMsg;
    NSString *_ticketDesc;
    NSString *_ticketBtnDesc;
    QSSportsMediaCameraInfo *_multiCamera;
    QSSportsMediaMatchInfo *_matchInfo;
    QSSportsMediaPreviewInfo *_preview;
    QSSportsMediaServiceGuideInfo *_equityGuide;
    QSSportsMediaServiceGuideInfo *_serviceGuide;
    QSSportsMediaExternAuth *_extAuth;
    QSSportsMediaCameraItem *_currentCameraInfo;
    QSSportsMediaVideoInfo *_videoInfo;
}

@property(retain, nonatomic) QSSportsMediaVideoInfo *videoInfo; // @synthesize videoInfo=_videoInfo;
@property(retain, nonatomic) QSSportsMediaCameraItem *currentCameraInfo; // @synthesize currentCameraInfo=_currentCameraInfo;
@property(retain, nonatomic) QSSportsMediaExternAuth *extAuth; // @synthesize extAuth=_extAuth;
@property(retain, nonatomic) QSSportsMediaServiceGuideInfo *serviceGuide; // @synthesize serviceGuide=_serviceGuide;
@property(retain, nonatomic) QSSportsMediaServiceGuideInfo *equityGuide; // @synthesize equityGuide=_equityGuide;
@property(retain, nonatomic) QSSportsMediaPreviewInfo *preview; // @synthesize preview=_preview;
@property(retain, nonatomic) QSSportsMediaMatchInfo *matchInfo; // @synthesize matchInfo=_matchInfo;
@property(retain, nonatomic) QSSportsMediaCameraInfo *multiCamera; // @synthesize multiCamera=_multiCamera;
@property(copy, nonatomic) NSString *ticketBtnDesc; // @synthesize ticketBtnDesc=_ticketBtnDesc;
@property(copy, nonatomic) NSString *ticketDesc; // @synthesize ticketDesc=_ticketDesc;
@property(nonatomic) _Bool canUseTicket; // @synthesize canUseTicket=_canUseTicket;
@property(nonatomic) _Bool isUserVip; // @synthesize isUserVip=_isUserVip;
@property(nonatomic) _Bool isUserPay; // @synthesize isUserPay=_isUserPay;
@property(nonatomic) _Bool isPay; // @synthesize isPay=_isPay;
@property(copy, nonatomic) NSString *retMsg; // @synthesize retMsg=_retMsg;
@property(nonatomic) long long ret; // @synthesize ret=_ret;
- (void).cxx_destruct;

@end

