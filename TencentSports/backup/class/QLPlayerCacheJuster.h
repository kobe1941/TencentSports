//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NetworkCheckerDelegate-Protocol.h"

@class KKMediaRootViewController, NSMutableArray, NSString, NSTimer, StatusReportCtl;

@interface QLPlayerCacheJuster : NSObject <NetworkCheckerDelegate>
{
    int _seekingPlaybackState;
    int _monitorPlaybackState;
    _Bool _hasPlayed;
    _Bool _started;
    NSTimer *_loadSlowCheckTimer;
    NSMutableArray *_cacheSpeedRecords;
    double _cacheAdPlayFinishedTime;
    _Bool _bSeeking;
    _Bool _isClickSkipAd;
    _Bool _isClickAdDetail;
    _Bool _forcePlay;
    _Bool _bFirstLoad;
    _Bool _hasDragged;
    _Bool _bUserPaused;
    _Bool _isBuffering;
    _Bool _bUserSlideUp;
    _Bool _bChangingClarity;
    _Bool _playFinished;
    int _pageEntryType;
    int _cacheAdPlayStep;
    int _loadingTimerType;
    KKMediaRootViewController *_mainCtrl;
    StatusReportCtl *_reportCtl;
    KKMediaRootViewController *_delegate;
    double _dateStartToLoad;
    long long _playStatus;
    long long _playStep;
    long long _adPlayStep;
    long long _geturlResult;
    long long _playMode;
    long long _playFreeMode;
    long long _adDuration;
    long long _adPlayDuration;
    NSTimer *_cacheTimer;
    double _lastPlayTime;
    double _lastStartCachePoint;
    double _lastUnchangedTime;
    double _dragWaitTime;
    double _peaceWaitTime;
    long long _seekCount;
    long long _dragBufCount;
    long long _peaceBufCount;
    double _totalPlayDuration;
    double _correctTotalPlayDuration;
    double _totalStayDuration;
    long long _numSwitchClarity;
    double _dateStartChangeClarity;
    NSString *_strCaches;
    NSTimer *_loadingTimer;
    double _loadingTimerStartTime;
}

@property double loadingTimerStartTime; // @synthesize loadingTimerStartTime=_loadingTimerStartTime;
@property int loadingTimerType; // @synthesize loadingTimerType=_loadingTimerType;
@property(retain) NSTimer *loadingTimer; // @synthesize loadingTimer=_loadingTimer;
@property(retain) NSTimer *loadSlowCheckTimer; // @synthesize loadSlowCheckTimer=_loadSlowCheckTimer;
@property(nonatomic) int cacheAdPlayStep; // @synthesize cacheAdPlayStep=_cacheAdPlayStep;
@property(nonatomic) _Bool playFinished; // @synthesize playFinished=_playFinished;
@property(copy) NSString *strCaches; // @synthesize strCaches=_strCaches;
@property double dateStartChangeClarity; // @synthesize dateStartChangeClarity=_dateStartChangeClarity;
@property long long numSwitchClarity; // @synthesize numSwitchClarity=_numSwitchClarity;
@property _Bool bChangingClarity; // @synthesize bChangingClarity=_bChangingClarity;
@property double totalStayDuration; // @synthesize totalStayDuration=_totalStayDuration;
@property double correctTotalPlayDuration; // @synthesize correctTotalPlayDuration=_correctTotalPlayDuration;
@property double totalPlayDuration; // @synthesize totalPlayDuration=_totalPlayDuration;
@property _Bool bUserSlideUp; // @synthesize bUserSlideUp=_bUserSlideUp;
@property _Bool isBuffering; // @synthesize isBuffering=_isBuffering;
@property _Bool bUserPaused; // @synthesize bUserPaused=_bUserPaused;
@property long long peaceBufCount; // @synthesize peaceBufCount=_peaceBufCount;
@property long long dragBufCount; // @synthesize dragBufCount=_dragBufCount;
@property long long seekCount; // @synthesize seekCount=_seekCount;
@property _Bool hasDragged; // @synthesize hasDragged=_hasDragged;
@property double peaceWaitTime; // @synthesize peaceWaitTime=_peaceWaitTime;
@property double dragWaitTime; // @synthesize dragWaitTime=_dragWaitTime;
@property double lastUnchangedTime; // @synthesize lastUnchangedTime=_lastUnchangedTime;
@property double lastStartCachePoint; // @synthesize lastStartCachePoint=_lastStartCachePoint;
@property double lastPlayTime; // @synthesize lastPlayTime=_lastPlayTime;
@property(retain) NSTimer *cacheTimer; // @synthesize cacheTimer=_cacheTimer;
@property _Bool bFirstLoad; // @synthesize bFirstLoad=_bFirstLoad;
@property _Bool forcePlay; // @synthesize forcePlay=_forcePlay;
@property(nonatomic) double cacheAdPlayFinishedTime; // @synthesize cacheAdPlayFinishedTime=_cacheAdPlayFinishedTime;
@property(readonly) _Bool started; // @synthesize started=_started;
@property(nonatomic) long long adPlayDuration; // @synthesize adPlayDuration=_adPlayDuration;
@property(nonatomic) long long adDuration; // @synthesize adDuration=_adDuration;
@property(nonatomic) int pageEntryType; // @synthesize pageEntryType=_pageEntryType;
@property(nonatomic) long long playFreeMode; // @synthesize playFreeMode=_playFreeMode;
@property _Bool hasPlayed; // @synthesize hasPlayed=_hasPlayed;
@property long long playMode; // @synthesize playMode=_playMode;
@property(nonatomic) _Bool isClickAdDetail; // @synthesize isClickAdDetail=_isClickAdDetail;
@property(nonatomic) _Bool isClickSkipAd; // @synthesize isClickSkipAd=_isClickSkipAd;
@property(nonatomic) long long geturlResult; // @synthesize geturlResult=_geturlResult;
@property(nonatomic) long long adPlayStep; // @synthesize adPlayStep=_adPlayStep;
@property(nonatomic) long long playStep; // @synthesize playStep=_playStep;
@property(nonatomic) long long playStatus; // @synthesize playStatus=_playStatus;
@property(nonatomic) double dateStartToLoad; // @synthesize dateStartToLoad=_dateStartToLoad;
@property KKMediaRootViewController *delegate; // @synthesize delegate=_delegate;
@property(retain) StatusReportCtl *reportCtl; // @synthesize reportCtl=_reportCtl;
@property(nonatomic) KKMediaRootViewController *mainCtrl; // @synthesize mainCtrl=_mainCtrl;
- (int)currentNetType;
- (void)networkCheckerUpdateFinish;
- (void)reportLoadingError:(_Bool)arg1;
- (void)onLoadingTimerFired:(id)arg1;
- (void)stopLoadingTimer;
- (void)startLoadingTimerWithType:(int)arg1;
- (void)onLoadSlowCheckTimerFired:(id)arg1;
- (void)invalidateLoadSlowCheckTimer;
- (void)startLoadSlowCheckTimer;
@property(readonly) long long firstCacheSpeed;
- (void)resetCacheSpeedRecords;
@property(nonatomic) _Bool bSeeking; // @synthesize bSeeking=_bSeeking;
- (void)checkBufferState:(id)arg1;
- (void)clearBeforeChangeClarity;
- (void)clearPeaceBreak;
- (void)endJustCaching;
- (void)setPublicStatusOfReports;
- (void)firstLoadFinished;
- (void)startJustCaching;
- (void)endPlayProcess;
- (void)startPlayProcessWithDelegate:(id)arg1 ReportCtl:(id)arg2;
- (void)resetReportValues;
- (void)disableCacheTimer;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

