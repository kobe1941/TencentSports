//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "LOTAnimationView.h"

@class NSDictionary, NSObject, QSAIChatDogAnimationBaseModel;
@protocol OS_dispatch_queue, QSAIChatDogViewDelegate;

__attribute__((visibility("hidden")))
@interface QSAIChatDogView : LOTAnimationView
{
    _Bool _hasPendingAnimation;
    _Bool _didPause;
    _Bool _hasAnimationNotEndWhenPaused;
    NSObject<OS_dispatch_queue> *_fileQueue;
    id <QSAIChatDogViewDelegate> _delegate;
    QSAIChatDogAnimationBaseModel *_currentAnimationModel;
    long long _modelIndex;
    long long _loopIndex;
    CDUnknownBlockType _completionBlockWhenPaused;
    NSDictionary *_jsonInfoWhenPaused;
}

@property(retain, nonatomic) NSDictionary *jsonInfoWhenPaused; // @synthesize jsonInfoWhenPaused=_jsonInfoWhenPaused;
@property(nonatomic) _Bool hasAnimationNotEndWhenPaused; // @synthesize hasAnimationNotEndWhenPaused=_hasAnimationNotEndWhenPaused;
@property(copy, nonatomic) CDUnknownBlockType completionBlockWhenPaused; // @synthesize completionBlockWhenPaused=_completionBlockWhenPaused;
@property(nonatomic) _Bool didPause; // @synthesize didPause=_didPause;
@property(nonatomic) long long loopIndex; // @synthesize loopIndex=_loopIndex;
@property(nonatomic) long long modelIndex; // @synthesize modelIndex=_modelIndex;
@property(nonatomic) _Bool hasPendingAnimation; // @synthesize hasPendingAnimation=_hasPendingAnimation;
@property(retain, nonatomic) QSAIChatDogAnimationBaseModel *currentAnimationModel; // @synthesize currentAnimationModel=_currentAnimationModel;
@property(nonatomic) __weak id <QSAIChatDogViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *fileQueue; // @synthesize fileQueue=_fileQueue;
- (void).cxx_destruct;
- (void)clearPauseData;
- (void)qs_resumeAnimation;
- (void)qs_pauseAnimation;
- (void)qs_playWithCompletion:(CDUnknownBlockType)arg1;
- (void)playJsonInfo:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)currentAnimationDidEnd;
- (void)newAnimationArrived:(_Bool)arg1;
- (void)playNextOfGroupAnimation;
- (void)playCombinationAnimation;
- (void)playCurrentAnimationWithSpeed:(double)arg1 hasPendingAnimation:(_Bool)arg2;
- (void)playCurrentAnimation;
- (void)prepareCurrentAnimationData;
- (void)dealloc;

@end

