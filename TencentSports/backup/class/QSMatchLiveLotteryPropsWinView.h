//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "QSFullScreenView.h"

#import "QSMatchLiveLotteryPropsWinAlertDelegate-Protocol.h"

@class NSString, QSLotteryPropsRequestInfo, QSMatchLiveLotteryPropsWinAlert, UIView;
@protocol QSMatchLiveLotteryPropsWinViewDelegate;

__attribute__((visibility("hidden")))
@interface QSMatchLiveLotteryPropsWinView : QSFullScreenView <QSMatchLiveLotteryPropsWinAlertDelegate>
{
    id <QSMatchLiveLotteryPropsWinViewDelegate> _delegate;
    UIView *_bgView;
    QSMatchLiveLotteryPropsWinAlert *_winAlert;
}

@property(retain, nonatomic) QSMatchLiveLotteryPropsWinAlert *winAlert; // @synthesize winAlert=_winAlert;
@property(retain, nonatomic) UIView *bgView; // @synthesize bgView=_bgView;
@property(nonatomic) __weak id <QSMatchLiveLotteryPropsWinViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)okButtonClickedInAlertView:(id)arg1;
- (void)closeButtonClickedInAlertView:(id)arg1;
@property(retain, nonatomic) QSLotteryPropsRequestInfo *requestInfo; // @dynamic requestInfo;
- (void)dismissAnimated:(_Bool)arg1;
- (void)dismiss;
- (void)show;
- (void)showInView:(id)arg1 fullScreen:(_Bool)arg2;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

