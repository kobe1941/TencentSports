//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "QSScheduleDetailViewController.h"

#import "QSPushViewControllerProtocol-Protocol.h"

@class NSString;

__attribute__((visibility("hidden")))
@interface QSScheduleDetailViewControllerWO : QSScheduleDetailViewController <QSPushViewControllerProtocol>
{
}

+ (id)allViewControllerType;
- (void)clickedBtnCalendar;
- (id)tabBar:(id)arg1 titleForItemAtIndex:(long long)arg2;
- (unsigned long long)numberOfItemsInTabBar:(id)arg1;
- (id)viewControllerAtIndex:(long long)arg1;
- (long long)defaultContentViewControllerIndex;
- (long long)countOfContentViewControllers;
- (_Bool)shouldShowToolBar;
- (void)viewDidLoad;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (id)initWithParameters:(id)arg1;
- (id)currentParameters;
- (_Bool)notAutoReloadData;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

