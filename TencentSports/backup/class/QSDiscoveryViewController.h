//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "QSWebViewControllerWithUserInfo.h"

#import "QSTabBarContainedControllerDelegate-Protocol.h"

@class NSString;

__attribute__((visibility("hidden")))
@interface QSDiscoveryViewController : QSWebViewControllerWithUserInfo <QSTabBarContainedControllerDelegate>
{
    _Bool _needReload;
}

@property(nonatomic) _Bool needReload; // @synthesize needReload=_needReload;
- (void)didReceiveMemoryWarning;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (_Bool)hideNavbarRightBtn;
- (_Bool)hideLeftBackButton;
- (void)appConfigUpdate;
- (void)dealloc;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)tabbarPressedAgain;
- (id)newPageDescription;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

