//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SPDYFrame.h"

__attribute__((visibility("hidden")))
@interface SPDYSettingsFrame : SPDYFrame
{
    CDStruct_2ea23212 _settings[9];
    _Bool _clearSettings;
}

@property(nonatomic) _Bool clearSettings; // @synthesize clearSettings=_clearSettings;
@property(readonly, nonatomic) CDStruct_2ea23212 *settings;
- (id)init;

@end

