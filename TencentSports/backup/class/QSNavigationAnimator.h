//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "QSNavigationTransitionProtocal-Protocol.h"

@class NSString, QSNavigationController, UIViewController;

__attribute__((visibility("hidden")))
@interface QSNavigationAnimator : NSObject <QSNavigationTransitionProtocal>
{
    UIViewController *_fromController;
    UIViewController *_targetController;
    QSNavigationController *_customNav;
    long long _currentOperation;
}

@property(nonatomic) long long currentOperation; // @synthesize currentOperation=_currentOperation;
@property(nonatomic) __weak QSNavigationController *customNav; // @synthesize customNav=_customNav;
@property(nonatomic) __weak UIViewController *targetController; // @synthesize targetController=_targetController;
@property(nonatomic) __weak UIViewController *fromController; // @synthesize fromController=_fromController;
- (void).cxx_destruct;
- (void)finishTransitionWithAnimator:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_finishTransitionWithCompletion:(CDUnknownBlockType)arg1;
- (void)startTransitionWithAnimator:(id)arg1;
- (void)startTransitionWithFromController:(id)arg1 toController:(id)arg2 inNav:(id)arg3;
- (double)durationWithBaseTime:(double)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

