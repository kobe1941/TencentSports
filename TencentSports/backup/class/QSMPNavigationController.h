//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "QSWindowController.h"

@class NSMutableArray;

__attribute__((visibility("hidden")))
@interface QSMPNavigationController : QSWindowController
{
    NSMutableArray *_viewControllers;
}

@property(retain, nonatomic) NSMutableArray *viewControllers; // @synthesize viewControllers=_viewControllers;
- (void).cxx_destruct;
- (void)logSelfImmediatelyWhenAppear;
- (void)popToRootViewControllersAnimated:(_Bool)arg1;
- (id)popViewControllerAnimated:(_Bool)arg1;
- (void)pushViewController:(id)arg1 animated:(_Bool)arg2;
- (void)viewDidLoad;
- (id)initWithRootViewController:(id)arg1;
- (id)childViewControllerForStatusBarHidden;
- (id)childViewControllerForStatusBarStyle;
- (id)childViewControllerForHomeIndicatorAutoHidden;

@end
