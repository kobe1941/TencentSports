//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TADBaseManager.h"

@class NSArray;

@interface TADSeedManager : TADBaseManager
{
    NSArray *_seedAds;
}

+ (void)preloadSeedAdForChannels:(id)arg1;
@property(retain, nonatomic) NSArray *seedAds; // @synthesize seedAds=_seedAds;
- (void).cxx_destruct;
- (void)handleAdDownloadedNotification:(id)arg1;
- (id)adTypeSeedForChannel;
- (id)requestSeedAd;
- (void)dealloc;
- (id)initWithChannelId:(id)arg1;

@end

