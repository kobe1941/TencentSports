//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "QSWebViewControllerWithUserInfo.h"

@class NSString;

__attribute__((visibility("hidden")))
@interface QSContainedWebViewController : QSWebViewControllerWithUserInfo
{
    NSString *_tabName;
    NSString *_mid;
}

@property(copy, nonatomic) NSString *mid; // @synthesize mid=_mid;
@property(copy, nonatomic) NSString *tabName; // @synthesize tabName=_tabName;
- (void).cxx_destruct;
- (void)didReceiveMemoryWarning;
- (void)viewDidLoad;
- (_Bool)shouldShowSelfDefinedNavigationBar;
- (id)externInfoForBossReporter;
- (id)newPageDescription;

@end

