//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "QSRecordPositionContainerViewController.h"

#import "QSMatchDetailContentViewControllerProtocol-Protocol.h"

@class NSString, QSMatchDetailDataPool, QSMatchDetailInfo;

__attribute__((visibility("hidden")))
@interface QSGuessInAfterMatchController : QSRecordPositionContainerViewController <QSMatchDetailContentViewControllerProtocol>
{
    QSMatchDetailInfo *_detailInfo;
    QSMatchDetailDataPool *_dataPool;
}

@property(retain, nonatomic) QSMatchDetailDataPool *dataPool; // @synthesize dataPool=_dataPool;
@property(retain, nonatomic) QSMatchDetailInfo *detailInfo; // @synthesize detailInfo=_detailInfo;
- (void).cxx_destruct;
- (void)didShowRootViewController;
- (void)dealloc;
- (void)didReceiveMemoryWarning;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)viewControllerWithIdentifier:(id)arg1;
- (void)updateCurrentContent;
- (void)dataPool:(id)arg1 dataDidUpdateWithType:(long long)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

