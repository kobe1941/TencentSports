//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "QSViewController.h"

#import "QSWebViewDelegate-Protocol.h"

@class NSString, QSWebView;

__attribute__((visibility("hidden")))
@interface QSWebViewController : QSViewController <QSWebViewDelegate>
{
    _Bool _isInited;
    NSString *_url;
    QSWebView *_webView;
}

+ (id)getStandardUrl:(id)arg1;
@property(nonatomic) _Bool isInited; // @synthesize isInited=_isInited;
@property(retain, nonatomic) QSWebView *webView; // @synthesize webView=_webView;
@property(retain, nonatomic) NSString *url; // @synthesize url=_url;
- (void).cxx_destruct;
- (_Bool)qsWebView:(id)arg1 shouldStartLoadWithRequest:(id)arg2 navigationType:(long long)arg3;
- (void)qsWebView:(id)arg1 didFailLoadWithError:(id)arg2;
- (void)qsWebViewDidFinishLoad:(id)arg1;
- (id)allParamentsInfoWithRequest:(id)arg1;
- (_Bool)webViewController:(id)arg1 shouldStartLoadWithRequest:(id)arg2;
- (void)finish;
- (void)clear;
- (void)reloadWebView;
- (void)dealloc;
- (void)viewDidUnload;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (_Bool)webView:(id)arg1 shouldStartLoadWithRelativePath:(id)arg2 info:(id)arg3;
- (void)shouldReloadSinceErrorPressed;
- (_Bool)shouldShowSelfDefinedNavigationBar;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

