//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSDictionary, NSURL, TADSplashShareInfo, UIView;

@protocol TADSplashViewControllerDelegate <NSObject>

@optional
- (void)splashViewControllerLogPrint:(NSDictionary *)arg1;
- (void)splashViewControllerSplashSkipButton:(UIView *)arg1 TotalTime:(long long)arg2 andTimeLeft:(long long)arg3;
- (void)splashViewControllerOpenNativeUrl:(NSURL *)arg1;
- (void)splashViewControllerOpenLandingViewUrl:(NSURL *)arg1 withShareInfo:(TADSplashShareInfo *)arg2;
- (_Bool)splashViewControllerShouldUseCustomLandingView;
- (void)splashViewControllerUserDidSkipedAd;
- (void)splashViewControllerWillCancelAdCountdown;
- (void)splashViewControllerLandingPageDidAppear;
- (void)splashViewControllerWillOpenLandingPage;
- (void)splashViewControllerWillDisappear;
- (void)splashViewControllerDidAdShow;
- (void)splashViewControllerDidAppear;
- (void)splashViewControllerWillAppear;
- (void)hideSplash;
@end

