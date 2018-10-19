//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "MidasIAPOperationProtocol-Protocol.h"

@class MidasCommunicator, MidasIAPBaseReq, MidasIAPUserInfo, MidasIapOrderInfo, NSString;
@protocol MidasIAPPayDelegate;

@interface MidasIAPGetConfigOperation : NSObject <MidasIAPOperationProtocol>
{
    MidasCommunicator *_comm;
    id delegate;
    id <MidasIAPPayDelegate> outerDelegate;
    MidasIAPBaseReq *req;
    MidasIAPUserInfo *userInfo;
    MidasIapOrderInfo *orderInfo;
}

@property(retain, nonatomic) MidasIapOrderInfo *orderInfo; // @synthesize orderInfo;
@property(retain, nonatomic) MidasIAPUserInfo *userInfo; // @synthesize userInfo;
@property(retain, nonatomic) MidasIAPBaseReq *req; // @synthesize req;
@property(nonatomic) __weak id <MidasIAPPayDelegate> outerDelegate; // @synthesize outerDelegate;
@property(nonatomic) __weak id delegate; // @synthesize delegate;
- (void).cxx_destruct;
- (void)blockProcessGetCfgCgi:(id)arg1;
- (void)blockProcessCgiError:(long long)arg1 inner:(id)arg2 msg:(id)arg3 workingStep:(int)arg4;
- (void)blockProcessNetError:(long long)arg1 workingStep:(int)arg2;
- (void)onDestroy;
- (id)toRequestInfo;
- (_Bool)paymentQueue:(id)arg1 updatedTransactions:(id)arg2;
- (void)start;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
