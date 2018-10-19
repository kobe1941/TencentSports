//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSString, NSURL, NSURLRequest, UIWebView;

@protocol TADLandingControlDelegate <NSObject>

@optional
- (_Bool)tadWebViewShouldRecognitionQRCodeByGesture;
- (void)tadWebViewShowRichMediaAd;
- (void)tadWebViewDidFinishLoad;
- (_Bool)tadWebView:(UIWebView *)arg1 shouldStartLoadWithRequest:(NSURLRequest *)arg2 navigationType:(long long)arg3;
- (_Bool)shouldOpenUrl:(NSURL *)arg1;
- (void)updateRefreshBtnWithLoadStatus:(_Bool)arg1;
- (void)tadWebViewTitle:(NSString *)arg1;
- (void)tadWebViewCanGoBack:(_Bool)arg1;
- (void)tadWebViewLoadingUpdateProgress:(float)arg1;
@end

