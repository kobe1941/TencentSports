//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "QSModel.h"

@class NSString;

__attribute__((visibility("hidden")))
@interface QSDebugRuntimeSettings : QSModel
{
    _Bool _cacheInvalidAlways;
    _Bool _isKingcardDebug;
    _Bool _enableCookieReset;
    _Bool _disableLivePid;
    _Bool _disableAutoPlay;
    _Bool _enableTVLiveProxy;
    long long _serverType;
    long long _httpStatus;
    NSString *_cookieString;
    double _updateIntervalMaxTime;
}

+ (id)sharedInstance;
+ (id)p_pathOfSettingFile;
@property(nonatomic) double updateIntervalMaxTime; // @synthesize updateIntervalMaxTime=_updateIntervalMaxTime;
@property(nonatomic) _Bool enableTVLiveProxy; // @synthesize enableTVLiveProxy=_enableTVLiveProxy;
@property(nonatomic) _Bool disableAutoPlay; // @synthesize disableAutoPlay=_disableAutoPlay;
@property(nonatomic) _Bool disableLivePid; // @synthesize disableLivePid=_disableLivePid;
@property(retain, nonatomic) NSString *cookieString; // @synthesize cookieString=_cookieString;
@property(nonatomic) _Bool enableCookieReset; // @synthesize enableCookieReset=_enableCookieReset;
@property(nonatomic) _Bool isKingcardDebug; // @synthesize isKingcardDebug=_isKingcardDebug;
@property(nonatomic) _Bool cacheInvalidAlways; // @synthesize cacheInvalidAlways=_cacheInvalidAlways;
@property(nonatomic) long long httpStatus; // @synthesize httpStatus=_httpStatus;
@property(nonatomic) long long serverType; // @synthesize serverType=_serverType;
- (void).cxx_destruct;
- (void)save;
- (void)p_UIApplicationWillResignActiveNotification:(id)arg1;
- (id)init;

@end

