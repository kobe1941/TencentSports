//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;

@interface QQMediaPlayerSetting : NSObject
{
    _Bool _enableResourceLoader;
    int _playbackStuckCount;
    int _playerType;
    NSMutableDictionary *_infoDic;
    NSMutableDictionary *_playerSetting;
}

+ (id)sharedInstance;
@property(retain, nonatomic) NSMutableDictionary *playerSetting; // @synthesize playerSetting=_playerSetting;
@property(retain, nonatomic) NSMutableDictionary *infoDic; // @synthesize infoDic=_infoDic;
@property(nonatomic) _Bool enableResourceLoader; // @synthesize enableResourceLoader=_enableResourceLoader;
@property(nonatomic) int playerType; // @synthesize playerType=_playerType;
@property(nonatomic) int playbackStuckCount; // @synthesize playbackStuckCount=_playbackStuckCount;
- (void).cxx_destruct;
- (id)init;

@end

