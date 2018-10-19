//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "IConfigUrlInterface-Protocol.h"
#import "QLFacilityUrlDelegate-Protocol.h"
#import "QLReportCtlMgrDataSource-Protocol.h"

@class NSMutableDictionary, NSString, QLReachability;

@interface TVKMediaPlayerManager : NSObject <QLFacilityUrlDelegate, IConfigUrlInterface, QLReportCtlMgrDataSource>
{
    _Bool _networkPromptAlready;
    NSMutableDictionary *_urlExParamDic;
    NSString *_networkPromptLastVid;
    QLReachability *_internetReach;
}

+ (id)instance;
@property(retain, nonatomic) QLReachability *internetReach; // @synthesize internetReach=_internetReach;
@property(retain, nonatomic) NSString *networkPromptLastVid; // @synthesize networkPromptLastVid=_networkPromptLastVid;
@property(nonatomic) _Bool networkPromptAlready; // @synthesize networkPromptAlready=_networkPromptAlready;
@property(retain, nonatomic) NSMutableDictionary *urlExParamDic; // @synthesize urlExParamDic=_urlExParamDic;
- (id)playerChanelId;
- (id)playerVer;
- (id)exReportDic;
- (int)getLoginType;
- (id)getIDFAString;
- (id)getWXOpenID;
- (id)getWXAppID;
- (id)getVUserID;
- (id)getAppActionStringValue;
- (id)getAppSenderStringValue;
- (id)getAppFromStringValue;
- (id)getBindingQQ;
- (id)getDeviceModel;
- (id)getDeviceID;
- (id)getLocalGUID;
- (_Bool)isMediaPlayerPlaying;
- (id)facilityFdForPlay;
- (id)ConfigURL;
- (id)urlExParams;
- (id)facilityQQNumber;
- (id)facilityLiveProgramExtraParams;
- (id)facilityDataoutExtraParams;
- (id)facilityExtraVideoUrlParams;
- (id)facilityPlaybackExtraParams;
- (id)facilitySdtfromForDownload;
- (id)facilitySdtfrom;
- (int)facilityPlatform;
- (id)facilityQueryString;
- (void)afterReportSender;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

