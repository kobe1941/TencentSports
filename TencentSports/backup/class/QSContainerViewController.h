//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "QSViewController.h"

#import "UIScrollViewDelegate-Protocol.h"

@class NSMapTable, NSMutableDictionary, NSString, QSQueue, UIScrollView;
@protocol QSContainerViewControllerContainedVCProtocol;

__attribute__((visibility("hidden")))
@interface QSContainerViewController : QSViewController <UIScrollViewDelegate>
{
    UIScrollView *_contentWrapperView;
    _Bool _notAutoReloadData;
    _Bool _notReloadWhenViewLoaded;
    _Bool _isNotFirstIn;
    _Bool _didAppearAfterViewLoad;
    QSViewController<QSContainerViewControllerContainedVCProtocol> *_visableViewController;
    long long _visableIndex;
    long long _currentStatus;
    NSMapTable *_contentViewControllers;
    QSQueue *_selectedViewControllers;
    NSMutableDictionary *_visabledVCInfo;
}

@property(nonatomic) _Bool didAppearAfterViewLoad; // @synthesize didAppearAfterViewLoad=_didAppearAfterViewLoad;
@property(nonatomic) _Bool isNotFirstIn; // @synthesize isNotFirstIn=_isNotFirstIn;
@property(retain, nonatomic) NSMutableDictionary *visabledVCInfo; // @synthesize visabledVCInfo=_visabledVCInfo;
@property(retain, nonatomic) QSQueue *selectedViewControllers; // @synthesize selectedViewControllers=_selectedViewControllers;
@property(retain, nonatomic) NSMapTable *contentViewControllers; // @synthesize contentViewControllers=_contentViewControllers;
@property(nonatomic) long long currentStatus; // @synthesize currentStatus=_currentStatus;
@property(nonatomic) _Bool notReloadWhenViewLoaded; // @synthesize notReloadWhenViewLoaded=_notReloadWhenViewLoaded;
@property(nonatomic) long long visableIndex; // @synthesize visableIndex=_visableIndex;
@property(retain, nonatomic) QSViewController<QSContainerViewControllerContainedVCProtocol> *visableViewController; // @synthesize visableViewController=_visableViewController;
@property(nonatomic) _Bool notAutoReloadData; // @synthesize notAutoReloadData=_notAutoReloadData;
@property(retain, nonatomic) UIScrollView *contentWrapperView; // @synthesize contentWrapperView=_contentWrapperView;
- (void).cxx_destruct;
- (_Bool)shouldAutorotate;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (void)scrollViewDidEndScrollingAnimation:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)setCurrentSelectedIndex:(unsigned long long)arg1 animated:(_Bool)arg2;
- (void)updateContentViewControllerSinceScrollDidFinish;
- (void)clearContentViewController;
- (void)loadContentViewControllerAtIndex:(long long)arg1;
- (void)resetDidAppearDate;
- (void)logSelfImmediately;
- (void)logSelfImmediatelyWhenAppear;
- (void)setShouldAutoLog:(_Bool)arg1;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)processMemoryWarning;
- (void)resetCurrentViewController;
- (_Bool)canReloadWhenMemoryWarning;
- (void)didReceiveMemoryWarning;
- (void)reloadAllController;
- (void)resetCurrentVisableIndex:(unsigned long long)arg1;
- (void)viewDidLoad;
- (void)cacheWillBeCleaned:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (_Bool)interactivePopGestureShouldBegin;
- (void)dealloc;
- (void)createContentWrapperView;
- (id)identifierForViewControllerAtIndex:(unsigned long long)arg1;
- (long long)defaultContentViewControllerIndex;
- (id)viewControllerAtIndex:(long long)arg1;
- (long long)countOfContentViewControllers;
- (_Bool)shouldAutomaticallyForwardAppearanceMethods;
- (_Bool)shouldAutomaticallyForwardRotationMethods;
- (void)layoutAllContentViews;
- (_Bool)needBossReporter;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

