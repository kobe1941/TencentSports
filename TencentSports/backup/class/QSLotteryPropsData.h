//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "QSAutoUpdateProtocol-Protocol.h"
#import "QSHttpDataDelegate-Protocol.h"

@class NSDate, NSString, QSLotteryPropsRequestData, QSLotteryPropsRequestInfo, QSMatchDetailLotteryMsgInfo;
@protocol QSLotteryPropsDataDataSource, QSLotteryPropsDataDelegate;

__attribute__((visibility("hidden")))
@interface QSLotteryPropsData : NSObject <QSHttpDataDelegate, QSAutoUpdateProtocol>
{
    _Bool _fullscreen;
    int _lotteryBuyNum;
    NSString *_mid;
    id <QSLotteryPropsDataDelegate> _delegate;
    id <QSLotteryPropsDataDataSource> _dataSource;
    QSMatchDetailLotteryMsgInfo *_lotteryMsgInfo;
    long long _status;
    QSLotteryPropsRequestInfo *_requestInfo;
    NSString *_failWord;
    QSLotteryPropsRequestData *_requestData;
    NSDate *_startDate;
}

@property(retain, nonatomic) NSDate *startDate; // @synthesize startDate=_startDate;
@property(retain, nonatomic) QSLotteryPropsRequestData *requestData; // @synthesize requestData=_requestData;
@property(copy, nonatomic) NSString *failWord; // @synthesize failWord=_failWord;
@property(retain, nonatomic) QSLotteryPropsRequestInfo *requestInfo; // @synthesize requestInfo=_requestInfo;
@property(nonatomic) int lotteryBuyNum; // @synthesize lotteryBuyNum=_lotteryBuyNum;
@property(nonatomic) long long status; // @synthesize status=_status;
@property(retain, nonatomic) QSMatchDetailLotteryMsgInfo *lotteryMsgInfo; // @synthesize lotteryMsgInfo=_lotteryMsgInfo;
@property(nonatomic) __weak id <QSLotteryPropsDataDataSource> dataSource; // @synthesize dataSource=_dataSource;
@property(nonatomic) __weak id <QSLotteryPropsDataDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) _Bool fullscreen; // @synthesize fullscreen=_fullscreen;
@property(copy, nonatomic) NSString *mid; // @synthesize mid=_mid;
- (void).cxx_destruct;
- (void)leaveLotteryPage;
- (void)enterLotteryPage;
- (void)lotteryDraw:(_Bool)arg1;
- (void)updateWithNewLotteryMsg:(id)arg1;
- (void)didReceiveNewLotteryMsg:(id)arg1;
- (void)httpData:(id)arg1 didFinishWithError:(id)arg2;
- (void)resumeMonitor;
- (void)pauseMonitor;
- (void)stopMonitor;
- (void)resetMonitor;
- (void)startMonitor;
- (void)onAutoUpdate;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

