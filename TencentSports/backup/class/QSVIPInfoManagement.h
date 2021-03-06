//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "QSAutoUpdateProtocol-Protocol.h"

@class NSString, QSHTTPRequestOperation, QSVIPInfo;

__attribute__((visibility("hidden")))
@interface QSVIPInfoManagement : NSObject <QSAutoUpdateProtocol>
{
    _Bool _isWaitingForVipResult;
    QSVIPInfo *_vipInfo;
    QSHTTPRequestOperation *_vipStatusOperation;
    CDUnknownBlockType _watchDogStopBlock;
}

@property(nonatomic) _Bool isWaitingForVipResult; // @synthesize isWaitingForVipResult=_isWaitingForVipResult;
@property(copy, nonatomic) CDUnknownBlockType watchDogStopBlock; // @synthesize watchDogStopBlock=_watchDogStopBlock;
@property(retain, nonatomic) QSHTTPRequestOperation *vipStatusOperation; // @synthesize vipStatusOperation=_vipStatusOperation;
@property(retain, nonatomic) QSVIPInfo *vipInfo; // @synthesize vipInfo=_vipInfo;
- (void).cxx_destruct;
- (void)updateVIPInfoWithCompletion:(CDUnknownBlockType)arg1;
- (void)persistentlyUpdateVIPInfoWithCompletion:(CDUnknownBlockType)arg1;
- (void)migrateFromGuestVIPAndWaitingForResult:(CDUnknownBlockType)arg1;
- (id)migrateToken;
- (void)waitingForVipResult:(CDUnknownBlockType)arg1;
- (void)onAutoUpdate;
- (_Bool)canUpdate;
- (double)autoFoceUpdateTimeInterval;
- (double)minimumCallbackTimeInterval;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

