//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "QSHttpDataDelegate-Protocol.h"

@class NSMutableArray, NSMutableSet, NSString, NSTimer, QSLiveChatHttpData, QSQueue;
@protocol QSLiveChatDataDelegate;

__attribute__((visibility("hidden")))
@interface QSLiveChatData : NSObject <QSHttpDataDelegate>
{
    _Bool _popChatsPeriod;
    _Bool _hasNoPreviousData;
    _Bool _isNotFirstLoadData;
    id <QSLiveChatDataDelegate> _delegate;
    NSString *_targetId;
    NSString *_mid;
    NSString *_userIdx;
    NSMutableArray *_allLiveChats;
    NSMutableSet *_localSendedLiveChats;
    QSQueue *_cachedLiveChatsQueue;
    NSTimer *_updateTimer;
    QSLiveChatHttpData *_httpData;
}

@property(retain, nonatomic) QSLiveChatHttpData *httpData; // @synthesize httpData=_httpData;
@property(nonatomic) _Bool isNotFirstLoadData; // @synthesize isNotFirstLoadData=_isNotFirstLoadData;
@property(retain, nonatomic) NSTimer *updateTimer; // @synthesize updateTimer=_updateTimer;
@property(retain, nonatomic) QSQueue *cachedLiveChatsQueue; // @synthesize cachedLiveChatsQueue=_cachedLiveChatsQueue;
@property(retain, nonatomic) NSMutableSet *localSendedLiveChats; // @synthesize localSendedLiveChats=_localSendedLiveChats;
@property(nonatomic) _Bool hasNoPreviousData; // @synthesize hasNoPreviousData=_hasNoPreviousData;
@property(retain, nonatomic) NSMutableArray *allLiveChats; // @synthesize allLiveChats=_allLiveChats;
@property(nonatomic) _Bool popChatsPeriod; // @synthesize popChatsPeriod=_popChatsPeriod;
@property(copy, nonatomic) NSString *userIdx; // @synthesize userIdx=_userIdx;
@property(copy, nonatomic) NSString *mid; // @synthesize mid=_mid;
@property(retain, nonatomic) NSString *targetId; // @synthesize targetId=_targetId;
@property(nonatomic) __weak id <QSLiveChatDataDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)httpData:(id)arg1 didFinishWithError:(id)arg2;
- (_Bool)shouldFilterItem:(id)arg1 checkRepeat:(_Bool)arg2;
- (void)stopUpdateTimer;
- (void)startUpdateTimer;
- (void)updateTimerFired;
@property(readonly, nonatomic) _Bool isLoadingPreviousMessages; // @dynamic isLoadingPreviousMessages;
@property(readonly, nonatomic) _Bool isEmpty; // @dynamic isEmpty;
- (void)loadPreviousMessage;
- (id)receiveNewChatData:(id)arg1;
- (void)sendFakeLiveChatItem:(id)arg1;
- (void)sendText:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)deleteLiveChatItem:(id)arg1;
- (void)checkCachedLiveChats;
- (void)pushChatDataToQueue:(id)arg1;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

