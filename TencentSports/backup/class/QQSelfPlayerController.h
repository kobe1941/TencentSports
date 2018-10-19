//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "PlayerDelegate-Protocol.h"

@class CADisplayLink, NSArray, NSLock, NSMutableArray, NSNotificationCenter, NSString, NSTimer, NSURL, QQSelfPlayerAudioQueueHandler, QQSelfPlayerVideoView, UILabel;
@protocol OS_dispatch_queue, OS_dispatch_semaphore, OS_dispatch_source;

@interface QQSelfPlayerController : NSObject <PlayerDelegate>
{
    struct QQPlayerNativeContext *_hardware_ctx;
    UILabel *_subtitlesLabel;
    QQSelfPlayerVideoView *_selfPlayerView;
    int _decodemode;
    QQSelfPlayerAudioQueueHandler *_audioqueuehandler;
    struct CPlayerWrapper *_playerWrapper;
    struct {
        char *_field1;
        int _field2;
        int _field3;
        int _field4;
        int _field5;
        int _field6;
        int _field7;
        long long _field8;
        long long _field9;
        int _field10;
        int _field11;
        int _field12;
        int _field13;
        int _field14;
        int _field15;
        int _field16;
        int _field17;
        int _field18;
        int _field19;
        int _field20;
        int _field21;
        int _field22;
        int _field23;
        int _field24;
        int _field25;
        char _field26;
        int _field27;
        int _field28;
    } *_playerParam;
    int mSelfPlayerState;
    int mSelfPlayerStateBeforeInnerReopen;
    int _frameWidth;
    int _frameHeight;
    NSNotificationCenter *mNotifyCenter;
    NSURL *_videoURL;
    int mControllerplayerID;
    BOOL _IsEOF;
    BOOL isHardWare;
    double hardCurrentPts;
    BOOL _isStop;
    NSLock *_lock;
    BOOL _isHardDecodeFailed;
    NSArray *videoUrlsArray;
    NSArray *videoUrlsArrayDuration;
    unsigned long long _currenDef;
    BOOL _isEnterBackground;
    NSString *_videoSliceXmlPath;
    BOOL _isGetFirstFrame;
    BOOL _isNeedWaitFillBuffer;
    unsigned char softwareCaptureData[3686400];
    BOOL isCaptureFrame;
    BOOL isNeedMute;
    NSTimer *updateHarewareRenderTimer;
    long long _videoDuration;
    NSLock *_cputureLock;
    BOOL setidleTimerDisabled;
    float _videoCurrentPos;
    BOOL _isVRMode;
    BOOL _isSoftWareGetFirstFrame;
    int _errorLogPrintTimes;
    NSString *_playerCoreVer;
    CDUnknownBlockType seekComPlete;
    BOOL _isCorrectHardWareErrBySeek;
    int _hardBufferVideoFrameTotalNum;
    unsigned long long _semaphoreTimeOut;
    long long _lastHardWareVideoPts;
    BOOL _isReopenInPlayercore;
    int _errorLogGetTimePrintTimes;
    int _hardWareRetryTimes;
    NSObject<OS_dispatch_queue> *qqSelfControlQueue;
    NSObject<OS_dispatch_queue> *openGLESContextQueue;
    _Bool _playbackLikelyToKeepUp;
    _Bool _playbackBufferFull;
    _Bool _playbackBufferEmpty;
    _Bool _isSystemVersion8;
    long long _status;
    long long _errorMsg;
    id _delegate;
    long long _currentPos;
    CADisplayLink *_displayLink;
    NSMutableArray *_outputFrames;
    NSMutableArray *_presentationTimes;
    NSMutableArray *_frameContext;
    double _lastCallbackTime;
    NSObject<OS_dispatch_semaphore> *_bufferSemaphore;
    NSObject<OS_dispatch_queue> *_backgroundQueue;
    NSObject<OS_dispatch_source> *_gcdTimer;
    struct CGSize _presentationSize;
}

+ (id)getPlayerCoreVer;
@property(retain) NSObject<OS_dispatch_source> *gcdTimer; // @synthesize gcdTimer=_gcdTimer;
@property(retain) NSObject<OS_dispatch_queue> *backgroundQueue; // @synthesize backgroundQueue=_backgroundQueue;
@property(retain) NSObject<OS_dispatch_semaphore> *bufferSemaphore; // @synthesize bufferSemaphore=_bufferSemaphore;
@property double lastCallbackTime; // @synthesize lastCallbackTime=_lastCallbackTime;
@property(retain) NSMutableArray *frameContext; // @synthesize frameContext=_frameContext;
@property(retain) NSMutableArray *presentationTimes; // @synthesize presentationTimes=_presentationTimes;
@property(retain) NSMutableArray *outputFrames; // @synthesize outputFrames=_outputFrames;
@property(retain) CADisplayLink *displayLink; // @synthesize displayLink=_displayLink;
@property(nonatomic) long long currentPos; // @synthesize currentPos=_currentPos;
@property(nonatomic) _Bool isSystemVersion8; // @synthesize isSystemVersion8=_isSystemVersion8;
@property(nonatomic) id delegate; // @synthesize delegate=_delegate;
@property(nonatomic) long long errorMsg; // @synthesize errorMsg=_errorMsg;
@property(nonatomic) struct CGSize presentationSize; // @synthesize presentationSize=_presentationSize;
@property(nonatomic) long long status; // @synthesize status=_status;
- (void).cxx_destruct;
- (void)resetQQSelfPlayerValue;
- (void)dealloc;
- (int)getPlayerParam:(int)arg1;
- (void)sendLogInfo:(id)arg1 loglevel:(int)arg2;
- (void)switchHardToSoftDecode:(int)arg1 needForceToSoftware:(BOOL)arg2;
- (void)onNotifyPlayerMsg:(int)arg1 playermsg:(int)arg2 paramaddr:(void *)arg3 param1:(long long)arg4 param2:(long long)arg5;
- (void)correctHardDecErrBySeek:(int)arg1;
- (void)updateHardwareRender;
- (void)flushHardWareVideoPtsQueue:(int)arg1 playerid:(int)arg2;
- (void)displayLinkCallback:(id)arg1;
- (void)cleanDisplayBufferData:(int)arg1;
- (void)showDisplayBufferData:(int)arg1;
- (void)displayPixelBuffer:(struct __CVBuffer *)arg1 withPresentationTime:(id)arg2;
- (void)doSleepingWithInterrupt:(long long)arg1 playerid:(int)arg2 framepts:(long long)arg3;
- (void)startShowHardwareDecodeFrameBySync:(int)arg1 flag:(BOOL)arg2;
- (void)startShowHardwareDecodeFrame:(int)arg1 flag:(BOOL)arg2;
- (void)getDecodeImageData:(struct __CVBuffer *)arg1 pts:(long long)arg2 hardwarectx:(struct QQPlayerNativeContext *)arg3 playerid:(int)arg4 decodeFailed:(BOOL)arg5;
- (void)changeValue:(id)arg1;
- (void)changeText:(id)arg1;
- (void)onSubtitleData:(CDStruct_d8f43467 *)arg1 playid:(int)arg2;
- (void)setupSubtitlePresentView;
- (void)setVRMode:(BOOL)arg1;
- (void)setRate:(float)arg1;
- (float)getVolume;
- (void)setVolume:(float)arg1;
- (void)setMuted:(BOOL)arg1;
- (void)onAudioFrame:(char *)arg1 AudioSize:(int)arg2 AudioFormat:(int)arg3 AudioDataStruct:(CDStruct_81056ce5 *)arg4 playid:(int)arg5;
- (void)writeFile:(id)arg1 data:(char *)arg2 size:(int)arg3;
- (void)onVideoFrame:(char **)arg1 size:(int *)arg2 ImageWidth:(int)arg3 ImageHeight:(int)arg4 ImageFormat:(int)arg5 playid:(int)arg6;
- (void)onVideoFrameWithNoPadding:(char *)arg1 ImageWidth:(int)arg2 ImageHeight:(int)arg3 ImageFormat:(int)arg4 Playerid:(int)arg5;
- (struct __CVBuffer *)copyPixelBufferForItemTime:(CDStruct_1b6d18a9)arg1;
- (BOOL)isIdle;
- (BOOL)isInit;
- (BOOL)isPause;
- (BOOL)isRunning;
- (void)stop;
- (void)resume;
- (void)pause;
- (void)play;
- (void)prepare;
- (struct __CVBuffer *)setHardWareBlackImage2:(char *)arg1 datawidth:(int)arg2 dataheight:(int)arg3;
- (struct __CVBuffer *)setHardWareBlackImage:(char *)arg1 datawidth:(int)arg2 dataheight:(int)arg3;
- (void)setPureBlackImageWithWidth:(int)arg1 andHeight:(int)arg2;
- (BOOL)isOpenGLViewValid;
- (struct __CVBuffer *)setCopyItemBlackImage;
- (int)getPlayerIDCount;
- (void)replacePlayerID:(int)arg1 replaceID:(int)arg2;
- (void)deletePlayerID:(int)arg1;
- (void)deletePlayerIDAndDelegate:(id)arg1;
- (int)getPlayerIDByDelegate:(id)arg1;
- (id)getItemDelegateByPlayerID:(int)arg1;
- (id)getDelegateByPlayerID:(int)arg1;
- (int)getFirstPlayingPlayerID;
- (void)showQQSelfPlayerIDAndAddr;
- (CDStruct_1b6d18a9)getBufferingTime;
- (CDStruct_1b6d18a9)getVideoDurationTime;
- (CDStruct_1b6d18a9)getCurrentTime;
- (void)removeTimeObserver:(id)arg1;
- (id)addPeriodicTimeObserverForInterval:(CDStruct_1b6d18a9)arg1 queue:(id)arg2 usingBlock:(CDUnknownBlockType)arg3;
- (void)setRate:(float)arg1 time:(CDStruct_1b6d18a9)arg2 atHostTime:(CDStruct_1b6d18a9)arg3;
- (void)seekToTime:(CDStruct_1b6d18a9)arg1 toleranceBefore:(CDStruct_1b6d18a9)arg2 toleranceAfter:(CDStruct_1b6d18a9)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)seekToTime:(CDStruct_1b6d18a9)arg1 toleranceBefore:(CDStruct_1b6d18a9)arg2 toleranceAfter:(CDStruct_1b6d18a9)arg3;
- (void)seekToDate:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (int)seekToTime:(CDStruct_1b6d18a9)arg1 seekMode:(int)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)seekToDate:(id)arg1;
- (int)seekToTime:(CDStruct_1b6d18a9)arg1 seekMode:(int)arg2;
@property(readonly, nonatomic, getter=isPlaybackBufferFull) _Bool playbackBufferFull; // @synthesize playbackBufferFull=_playbackBufferFull;
@property(readonly, nonatomic, getter=isPlaybackBufferEmpty) _Bool playbackBufferEmpty; // @synthesize playbackBufferEmpty=_playbackBufferEmpty;
@property(readonly, nonatomic, getter=isPlaybackLikelyToKeepUp) _Bool playbackLikelyToKeepUp; // @synthesize playbackLikelyToKeepUp=_playbackLikelyToKeepUp;
- (long long)getCurrentstatus;
- (void)updataMediaSliceUrl:(char **)arg1 seqnumber:(int)arg2 playerid:(int)arg3;
- (void)updateURLArray:(id)arg1;
- (void)showUpdateURLArray;
- (void)setURLArray:(id)arg1 contentTimes:(id)arg2;
- (void)makeUrlXml:(id)arg1 contentTimes:(id)arg2;
- (void)showInputParam;
- (void)setPlayerInputParam:(int)arg1 playeravformat:(int)arg2 playertype:(int)arg3 decodemode:(int)arg4 startposition:(long long)arg5 endposition:(long long)arg6 definition:(int)arg7;
- (void)setPlayerParamDict:(id)arg1;
- (void)setQQSelfPlayerVideoView:(id)arg1;
- (void)setQQSelfPlayerDelegate:(id)arg1;
- (void)didSystemClockChanged:(id)arg1;
- (void)didPlayerEnterForeground:(id)arg1;
- (void)didPlayerEnterBackground:(id)arg1;
- (void)didPlayerBecomeActive:(id)arg1;
- (void)didPlayerWillResignActive:(id)arg1;
- (void)addQQSelfPlayerObserver;
- (void)setDecodeMode:(long long)arg1;
- (void)initPlayer;
- (id)initWithURL:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

