//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "QSHotScheduleViewController.h"

#import "QSPushViewControllerProtocol-Protocol.h"

@class NSString;

__attribute__((visibility("hidden")))
@interface QSMatchMyPayListViewController : QSHotScheduleViewController <QSPushViewControllerProtocol>
{
}

+ (id)allViewControllerType;
- (void)data:(id)arg1 didFinishLoadWithError:(id)arg2;
- (void)dataWillStartLoad:(id)arg1;
- (void)didReceiveMemoryWarning;
- (struct CGPoint)centerOfLoadingView;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)createScheduleData;
- (_Bool)shouldShowSelfDefinedNavigationBar;
- (id)initWithParameters:(id)arg1;
- (id)currentParameters;
- (id)newPageDescription;
- (double)selfInsetBottom;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

