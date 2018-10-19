//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "QSMatchVideoAlbumViewController.h"

#import "QSMatchDetailRootViewControllerProtocol-Protocol.h"
#import "QSMediaPlayerViewControllerDelegate-Protocol.h"

@class NSString, QSMatchDetailDataPool, QSMediaPlayerViewController, QSVideoSourceMediaItem, UIView;

__attribute__((visibility("hidden")))
@interface QSMatchVideoAlbumDetailViewController : QSMatchVideoAlbumViewController <QSMediaPlayerViewControllerDelegate, QSMatchDetailRootViewControllerProtocol>
{
    _Bool _isNotFirstIn;
    NSString *_vid;
    NSString *_videoTitle;
    QSMatchDetailDataPool *_dataPool;
    UIView *_topMediaView;
    QSMediaPlayerViewController *_mediaPlayerController;
    QSVideoSourceMediaItem *_currentMediaItem;
    unsigned long long _currentPlayIndex;
}

@property(nonatomic) _Bool isNotFirstIn; // @synthesize isNotFirstIn=_isNotFirstIn;
@property(nonatomic) unsigned long long currentPlayIndex; // @synthesize currentPlayIndex=_currentPlayIndex;
@property(retain, nonatomic) QSVideoSourceMediaItem *currentMediaItem; // @synthesize currentMediaItem=_currentMediaItem;
@property(retain, nonatomic) QSMediaPlayerViewController *mediaPlayerController; // @synthesize mediaPlayerController=_mediaPlayerController;
@property(retain, nonatomic) UIView *topMediaView; // @synthesize topMediaView=_topMediaView;
@property(retain, nonatomic) QSMatchDetailDataPool *dataPool; // @synthesize dataPool=_dataPool;
@property(copy, nonatomic) NSString *videoTitle; // @synthesize videoTitle=_videoTitle;
@property(copy, nonatomic) NSString *vid; // @synthesize vid=_vid;
- (void).cxx_destruct;
- (void)mediaPlayerViewController:(id)arg1 willShowUI:(_Bool)arg2;
- (void)mediaPlayerViewControllerDidChangeMediaPlayerState:(id)arg1;
- (void)selectAndScrollToRow:(long long)arg1;
- (void)playNextVideo;
- (void)playVideoItem:(id)arg1 forceStart:(_Bool)arg2;
- (void)playCurrent;
- (void)readyToPlayCurrent;
- (void)refreshData;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)createAlbumData;
- (_Bool)shouldShowSelfDefinedNavigationBar;
- (void)dataPool:(id)arg1 dataDidUpdateWithType:(long long)arg2;
- (_Bool)canTransferToOtherRootViewController;
- (id)focusedProperties;
- (id)externInfoForBossReporter;
- (id)currentVid;
- (id)newPageDescription;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
