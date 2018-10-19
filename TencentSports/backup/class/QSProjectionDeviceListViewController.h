//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "QSViewController.h"

#import "QSBusEventConsumerDelegate-Protocol.h"
#import "QSWebViewDelegate-Protocol.h"
#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"

@class NSString, QSWebView, UITableView;

__attribute__((visibility("hidden")))
@interface QSProjectionDeviceListViewController : QSViewController <UITableViewDelegate, UITableViewDataSource, QSBusEventConsumerDelegate, QSWebViewDelegate>
{
    CDUnknownBlockType _completion;
    UITableView *_tableView;
    unsigned long long _deviceCount;
    QSWebView *_webView;
}

@property(retain, nonatomic) QSWebView *webView; // @synthesize webView=_webView;
@property(nonatomic) unsigned long long deviceCount; // @synthesize deviceCount=_deviceCount;
@property(retain, nonatomic) UITableView *tableView; // @synthesize tableView=_tableView;
@property(copy, nonatomic) CDUnknownBlockType completion; // @synthesize completion=_completion;
- (void).cxx_destruct;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForFooterInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;
- (void)didConsumeEventFromBus:(id)arg1;
- (void)reloadData;
- (_Bool)qsWebView:(id)arg1 shouldStartLoadWithRequest:(id)arg2 navigationType:(long long)arg3;
- (id)allParamentsInfoWithRequest:(id)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)dealloc;
- (void)didReceiveMemoryWarning;
- (void)viewDidLoad;
- (_Bool)shouldShowSelfDefinedNavigationBar;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

