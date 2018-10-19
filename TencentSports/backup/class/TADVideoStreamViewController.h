//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "TADPlayerViewDelegate-Protocol.h"
#import "TADVid2UrlHandlerDelegate-Protocol.h"

@class NSMutableArray, NSString, TADItemInfo, TADPlayerView, TADVid2UrlHandler, TADVideoItemInfo;
@protocol TADTKVPlayerDelegate;

@interface TADVideoStreamViewController : UIViewController <TADVid2UrlHandlerDelegate, TADPlayerViewDelegate>
{
    int _playStatus;
    id <TADTKVPlayerDelegate> _delegate;
    TADItemInfo *_adItem;
    TADVideoItemInfo *_videoInfo;
    TADPlayerView *_playerView;
    NSMutableArray *_videoStatusReportUrls;
    double _currentSec;
    double _bufferSec;
    double _totalSec;
    NSString *_videoUrl;
    TADVid2UrlHandler *_vid2UrlHandler;
    CDUnknownBlockType _vid2UrlSuccessBlock;
}

@property(copy, nonatomic) CDUnknownBlockType vid2UrlSuccessBlock; // @synthesize vid2UrlSuccessBlock=_vid2UrlSuccessBlock;
@property(retain, nonatomic) TADVid2UrlHandler *vid2UrlHandler; // @synthesize vid2UrlHandler=_vid2UrlHandler;
@property(retain, nonatomic) NSString *videoUrl; // @synthesize videoUrl=_videoUrl;
@property(nonatomic) double totalSec; // @synthesize totalSec=_totalSec;
@property(nonatomic) double bufferSec; // @synthesize bufferSec=_bufferSec;
@property(nonatomic) double currentSec; // @synthesize currentSec=_currentSec;
@property(retain, nonatomic) NSMutableArray *videoStatusReportUrls; // @synthesize videoStatusReportUrls=_videoStatusReportUrls;
@property(retain, nonatomic) TADPlayerView *playerView; // @synthesize playerView=_playerView;
@property(retain, nonatomic) TADVideoItemInfo *videoInfo; // @synthesize videoInfo=_videoInfo;
@property(retain, nonatomic) TADItemInfo *adItem; // @synthesize adItem=_adItem;
@property(nonatomic) int playStatus; // @synthesize playStatus=_playStatus;
@property(nonatomic) __weak id <TADTKVPlayerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)reportPlayStatus;
- (void)pingVideoStatusForRestUrls;
- (void)reportVideoStatusForProgress:(double)arg1 duration:(double)arg2;
- (void)updateProgressBar;
- (void)setMuted:(_Bool)arg1;
- (void)progressControlProgress:(double)arg1;
- (void)reset;
- (void)pause;
- (void)play;
- (void)p_prepareVideoInfo;
- (void)videoPlayProgressChanged:(id)arg1 current:(double)arg2;
- (void)videoBufferProgressChanged:(id)arg1 current:(double)arg2;
- (void)videoPlayError:(id)arg1 error:(id)arg2;
- (void)videoPlayFinished:(id)arg1;
- (void)videoReadyToPlay:(id)arg1;
- (void)didLoadVideosWithUrl:(id)arg1 duration:(double)arg2;
- (void)updateFrame:(struct CGRect)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
