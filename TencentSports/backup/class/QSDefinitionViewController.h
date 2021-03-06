//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "QSViewController.h"

#import "QSMPVideoPlayerLayerViewControllerDelegate-Protocol.h"
#import "QSPlayerOptionCellDelegate-Protocol.h"
#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"

@class NSArray, NSString, QSBusSystem, QSMPLayersViewController, QSMPSharedItem, QSMediaFormatInfo, UITableView;

__attribute__((visibility("hidden")))
@interface QSDefinitionViewController : QSViewController <UITableViewDataSource, UITableViewDelegate, QSPlayerOptionCellDelegate, QSMPVideoPlayerLayerViewControllerDelegate>
{
    QSMPSharedItem *_sharedItem;
    QSBusSystem *_mediaPlayerBusSystem;
    QSMPLayersViewController *_videoPlayerViewController;
    QSMediaFormatInfo *_currentFormat;
    NSArray *_formats;
    UITableView *_tableView;
}

@property(retain, nonatomic) UITableView *tableView; // @synthesize tableView=_tableView;
@property(retain, nonatomic) NSArray *formats; // @synthesize formats=_formats;
@property(retain, nonatomic) QSMediaFormatInfo *currentFormat; // @synthesize currentFormat=_currentFormat;
@property(nonatomic) __weak QSMPLayersViewController *videoPlayerViewController; // @synthesize videoPlayerViewController=_videoPlayerViewController;
@property(retain, nonatomic) QSBusSystem *mediaPlayerBusSystem; // @synthesize mediaPlayerBusSystem=_mediaPlayerBusSystem;
@property(retain, nonatomic) QSMPSharedItem *sharedItem; // @synthesize sharedItem=_sharedItem;
- (void).cxx_destruct;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)hideControlUI;
- (void)didSelectRowAtIndexPath:(id)arg1;
- (void)titleDidTapInPlayerOptionCell:(id)arg1;
- (void)tap:(id)arg1;
- (void)didReceiveMemoryWarning;
- (void)dealloc;
- (void)viewDidLoad;
- (void)viewWillAppear:(_Bool)arg1;
- (long long)preferredStatusBarStyle;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(nonatomic, getter=isPlayerMuted) _Bool playerMuted;
@property(readonly) Class superclass;

@end

