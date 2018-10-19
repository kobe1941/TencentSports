//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SKStoreProductViewControllerDelegate-Protocol.h"
#import "TADSafariHelperDelegate-Protocol.h"

@class NSString, TADBaseLandingViewController, TADItemInfo, TADSafariHelper, TADStoreViewController, UIView, UIViewController;
@protocol TADLandingViewControllerDelegate, TADLandingViewControllerLoadingViewDelegate;

@interface TADLandingViewHelper : NSObject <SKStoreProductViewControllerDelegate, TADSafariHelperDelegate>
{
    _Bool _currentStatusBarHidden;
    id <TADLandingViewControllerDelegate> _delegate;
    UIView<TADLandingViewControllerLoadingViewDelegate> *_jumpingAppstoreIndicator;
    TADBaseLandingViewController *_landingViewController;
    UIViewController *_presentingViewController;
    TADItemInfo *_adItem;
    id _sself;
    TADStoreViewController *_storeController;
    TADSafariHelper *_safariHelper;
}

@property(nonatomic) _Bool currentStatusBarHidden; // @synthesize currentStatusBarHidden=_currentStatusBarHidden;
@property(retain, nonatomic) TADSafariHelper *safariHelper; // @synthesize safariHelper=_safariHelper;
@property(retain, nonatomic) TADStoreViewController *storeController; // @synthesize storeController=_storeController;
@property(retain, nonatomic) id sself; // @synthesize sself=_sself;
@property(retain, nonatomic) TADItemInfo *adItem; // @synthesize adItem=_adItem;
@property(nonatomic) __weak UIViewController *presentingViewController; // @synthesize presentingViewController=_presentingViewController;
@property(retain, nonatomic) TADBaseLandingViewController *landingViewController; // @synthesize landingViewController=_landingViewController;
@property(retain, nonatomic) UIView<TADLandingViewControllerLoadingViewDelegate> *jumpingAppstoreIndicator; // @synthesize jumpingAppstoreIndicator=_jumpingAppstoreIndicator;
@property(nonatomic) __weak id <TADLandingViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)safariViewControllerDidClose:(id)arg1;
- (void)productViewControllerDidFinish:(id)arg1;
- (void)openLandingPageWithNativeUrl:(id)arg1;
- (void)openVideoDetailPage:(id)arg1 params:(id)arg2;
- (void)openLandingPage;
- (void)dealloc;
- (id)initWithPresentingViewController:(id)arg1 adItem:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

