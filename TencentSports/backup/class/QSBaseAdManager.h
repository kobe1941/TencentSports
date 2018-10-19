//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, TADReportManager, TADStreamManager;

__attribute__((visibility("hidden")))
@interface QSBaseAdManager : NSObject
{
    NSString *_channelId;
    TADStreamManager *_streamMgr;
    TADReportManager *_adReportManager;
}

@property(retain, nonatomic) TADReportManager *adReportManager; // @synthesize adReportManager=_adReportManager;
@property(retain, nonatomic) TADStreamManager *streamMgr; // @synthesize streamMgr=_streamMgr;
@property(copy, nonatomic) NSString *channelId; // @synthesize channelId=_channelId;
- (void).cxx_destruct;
- (void)openLandingPageWithNavCtl:(id)arg1 item:(id)arg2;
- (void)cellLoaded:(id)arg1 inTableView:(id)arg2 indexPath:(id)arg3;
- (void)reportAdLoaded:(id)arg1 inView:(id)arg2 inTableView:(id)arg3 adImageView:(id)arg4;
- (void)posterClicked:(id)arg1;
- (void)leaveChannel;
- (void)enterChannel;
- (id)initWithChannel:(id)arg1;

@end
