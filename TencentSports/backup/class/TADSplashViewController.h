//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TADSplashBaseViewController.h"

@class TSADspLabel;

@interface TADSplashViewController : TADSplashBaseViewController
{
    TSADspLabel *_dspLabel;
}

@property(retain, nonatomic) TSADspLabel *dspLabel; // @synthesize dspLabel=_dspLabel;
- (void).cxx_destruct;
- (_Bool)shouldshowH5Splash;
- (_Bool)shouldShowVideoSplash;
- (_Bool)isRetina5P5Inch;
- (_Bool)isRetina4P7Inch;
- (_Bool)isRetina4Inch;
- (_Bool)isiPhone4;
- (_Bool)shouldAutorotateToInterfaceOrientation:(long long)arg1;
- (unsigned long long)supportedInterfaceOrientations;
- (void)adLandingViewDidAppear;
- (void)closeADLandingViewController;
- (_Bool)shouldOpenUrl:(id)arg1;
- (void)openLandingPageWithURL:(id)arg1 withItemInfo:(id)arg2;
- (void)createDspLabel;
- (double)_convert:(double)arg1;
- (void)createSplashInfoButton;
- (void)createSplashImageView;
- (id)cropImageForiPhone4:(id)arg1;

@end

