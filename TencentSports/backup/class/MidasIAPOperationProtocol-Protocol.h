//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class MidasIAPBaseReq, MidasIAPUserInfo, MidasIapOrderInfo, NSArray, NSError, RequestInfo, SKPaymentQueue;
@protocol MidasIAPPayDelegate;

@protocol MidasIAPOperationProtocol <NSObject>
@property(retain, nonatomic) MidasIapOrderInfo *orderInfo;
@property(retain, nonatomic) MidasIAPUserInfo *userInfo;
@property(retain, nonatomic) MidasIAPBaseReq *req;
@property(nonatomic) __weak id <MidasIAPPayDelegate> outerDelegate;
@property(nonatomic) __weak id delegate;
- (void)onDestroy;
- (RequestInfo *)toRequestInfo;
- (_Bool)paymentQueue:(SKPaymentQueue *)arg1 updatedTransactions:(NSArray *)arg2;
- (void)start;

@optional
- (void)paymentQueueRestoreCompletedTransactionsFinished:(SKPaymentQueue *)arg1;
- (void)paymentQueue:(SKPaymentQueue *)arg1 restoreCompletedTransactionsFailedWithError:(NSError *)arg2;
@end

