//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "QSViewController.h"

@class NSString, UILabel;

__attribute__((visibility("hidden")))
@interface QSNavTestController : QSViewController
{
    _Bool _shouldPop;
    _Bool _shouldPush;
    NSString *_identifier;
    UILabel *_label;
}

@property(retain, nonatomic) UILabel *label; // @synthesize label=_label;
@property(nonatomic) _Bool shouldPush; // @synthesize shouldPush=_shouldPush;
@property(nonatomic) _Bool shouldPop; // @synthesize shouldPop=_shouldPop;
@property(copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
- (void).cxx_destruct;
- (unsigned long long)supportedInterfaceOrientations;
- (void)pop;
- (void)push;
- (void)popToRoot;
- (void)present;
- (void)close;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewWillLayoutSubviews;
- (void)viewDidLoad;

@end

