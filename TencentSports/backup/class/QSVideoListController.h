//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "QSTableViewControllerEx.h"

#import "QSContainerViewControllerContainedVCProtocol-Protocol.h"
#import "QSMediaPlayerViewControllerDelegate-Protocol.h"

@class NSDictionary, NSString, QSHomeVideoBasePlayerCell, UIView;

__attribute__((visibility("hidden")))
@interface QSVideoListController : QSTableViewControllerEx <QSContainerViewControllerContainedVCProtocol, QSMediaPlayerViewControllerDelegate>
{
    QSHomeVideoBasePlayerCell *_preferredPlayingCell;
    QSHomeVideoBasePlayerCell *_currentPlayingVideoCell;
    NSString *_vid;
    NSString *_itemId;
    NSDictionary *_jumpParams;
    UIView *_visualRectView;
}

@property(retain, nonatomic) UIView *visualRectView; // @synthesize visualRectView=_visualRectView;
@property(retain, nonatomic) NSDictionary *jumpParams; // @synthesize jumpParams=_jumpParams;
@property(copy, nonatomic) NSString *itemId; // @synthesize itemId=_itemId;
@property(copy, nonatomic) NSString *vid; // @synthesize vid=_vid;
@property(nonatomic) __weak QSHomeVideoBasePlayerCell *currentPlayingVideoCell; // @synthesize currentPlayingVideoCell=_currentPlayingVideoCell;
@property(nonatomic) __weak QSHomeVideoBasePlayerCell *preferredPlayingCell; // @synthesize preferredPlayingCell=_preferredPlayingCell;
- (void).cxx_destruct;
- (void)mediaPlayerViewController:(id)arg1 progressUpdated:(double)arg2 playableDuration:(double)arg3 duration:(double)arg4;
- (void)mediaPlayerViewController:(id)arg1 willShowUI:(_Bool)arg2 animate:(_Bool)arg3;
- (void)mediaPlayerViewControllerDidChangeMediaPlayerState:(id)arg1;
- (_Bool)mediaPlayerViewControllerHasNextVideo:(id)arg1 nextVideoName:(id *)arg2;
- (_Bool)mediaPlayerViewControllerShowPreNextVideoButton:(id)arg1;
- (void)cellAction:(id)arg1 performedWithData:(id)arg2 inCell:(id)arg3;
- (void)playNextVisualItem;
- (void)scrollToNextCellWithCell:(id)arg1 animated:(_Bool)arg2;
- (id)nextCellWithCell:(id)arg1;
- (id)nextIndexWithCell:(id)arg1;
- (void)scrollToCell:(id)arg1 animated:(_Bool)arg2;
- (id)currentVisualItemWithVid:(id)arg1;
- (void)playCurrentVisualItemWithVid:(id)arg1;
- (void)playCurrentVisualItem;
- (_Bool)_isVisualCell:(id)arg1 useOffset:(_Bool)arg2 useVisualRect:(_Bool)arg3;
- (_Bool)isTotallyVisualCell:(id)arg1;
- (_Bool)isVisualCell:(id)arg1;
- (double)bottomVisualOffsetWithRect:(struct CGRect)arg1;
- (double)topVisualOffsetWithRect:(struct CGRect)arg1;
- (struct CGRect)visualRect;
- (void)playPreferredPlayingCell;
- (void)scrollViewDidScroll:(id)arg1;
- (_Bool)shouldStopWhenScroll;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidEndScrollingAnimation:(id)arg1;
- (void)scrollViewDidScrollToTop:(id)arg1;
- (void)tableView:(id)arg1 didEndDisplayingCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (_Bool)autoPlayNext;
- (_Bool)autoPlay;
- (id)externInfoForBossReporter;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

