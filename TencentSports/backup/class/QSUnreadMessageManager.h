//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "QSBaseDataDelegate-Protocol.h"
#import "QSBusEventConsumerDelegate-Protocol.h"

@class NSString, QSMyUnreadMessageData;

__attribute__((visibility("hidden")))
@interface QSUnreadMessageManager : NSObject <QSBaseDataDelegate, QSBusEventConsumerDelegate>
{
    QSMyUnreadMessageData *_unreadMsgData;
}

+ (id)sharedInstance;
@property(retain, nonatomic) QSMyUnreadMessageData *unreadMsgData; // @synthesize unreadMsgData=_unreadMsgData;
- (void).cxx_destruct;
- (void)didConsumeEventFromBus:(id)arg1;
- (void)clearCountForType:(id)arg1;
- (id)checkCountForType:(id)arg1;
- (void)clearVipSysCount;
- (void)clearGiftCount;
- (void)clearMyGuessCount;
- (void)clearSysMessageCount;
- (void)clearMessageCount;
- (void)userLoginStateChanged;
- (_Bool)myProfileHasNew;
@property(readonly, copy, nonatomic) NSString *vipSysCount; // @dynamic vipSysCount;
@property(readonly, copy, nonatomic) NSString *giftCount; // @dynamic giftCount;
@property(readonly, copy, nonatomic) NSString *guessCount; // @dynamic guessCount;
@property(readonly, copy, nonatomic) NSString *sysCount; // @dynamic sysCount;
@property(readonly, copy, nonatomic) NSString *shequCount; // @dynamic shequCount;
- (void)data:(id)arg1 didFinishLoadWithError:(id)arg2;
- (void)dataWillStartLoad:(id)arg1;
- (void)forceUpdate;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
