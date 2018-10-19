//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "UIGestureRecognizerDelegate-Protocol.h"

@class NSDictionary, NSString, QSSplashSkipButton, UIImage, UIImageView;
@protocol QSSplashManagerDelegate;

__attribute__((visibility("hidden")))
@interface QSAdSplashViewController : UIViewController <UIGestureRecognizerDelegate>
{
    _Bool _shouldShowLogo;
    id <QSSplashManagerDelegate> _splashDelegate;
    UIImage *_splashImage;
    NSDictionary *_jumpData;
    NSString *_adId;
    UIImageView *_splashImageView;
    UIImageView *_logoView;
    QSSplashSkipButton *_skipButton;
}

@property(retain, nonatomic) QSSplashSkipButton *skipButton; // @synthesize skipButton=_skipButton;
@property(retain, nonatomic) UIImageView *logoView; // @synthesize logoView=_logoView;
@property(retain, nonatomic) UIImageView *splashImageView; // @synthesize splashImageView=_splashImageView;
@property(copy, nonatomic) NSString *adId; // @synthesize adId=_adId;
@property(retain, nonatomic) NSDictionary *jumpData; // @synthesize jumpData=_jumpData;
@property(nonatomic) _Bool shouldShowLogo; // @synthesize shouldShowLogo=_shouldShowLogo;
@property(retain, nonatomic) UIImage *splashImage; // @synthesize splashImage=_splashImage;
@property(nonatomic) __weak id <QSSplashManagerDelegate> splashDelegate; // @synthesize splashDelegate=_splashDelegate;
- (void).cxx_destruct;
- (_Bool)shouldAutorotateToInterfaceOrientation:(long long)arg1;
- (unsigned long long)supportedInterfaceOrientations;
- (_Bool)gestureRecognizerShouldBegin:(id)arg1;
- (void)tap:(id)arg1;
- (void)skipButtonDidTap:(id)arg1;
- (id)cropImageForiPhone4:(id)arg1;
- (void)viewDidLoad;
- (void)viewDidAppear:(_Bool)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
