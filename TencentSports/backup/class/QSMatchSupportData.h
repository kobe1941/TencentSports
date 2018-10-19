//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;

__attribute__((visibility("hidden")))
@interface QSMatchSupportData : NSObject
{
    _Bool _shouldAnimateSupportedTeamLogoInMatchLiveChatVC;
    NSMutableDictionary *_supportInfo;
}

+ (id)sharedInstance;
@property(retain, nonatomic) NSMutableDictionary *supportInfo; // @synthesize supportInfo=_supportInfo;
@property(nonatomic) _Bool shouldAnimateSupportedTeamLogoInMatchLiveChatVC; // @synthesize shouldAnimateSupportedTeamLogoInMatchLiveChatVC=_shouldAnimateSupportedTeamLogoInMatchLiveChatVC;
- (void).cxx_destruct;
- (void)setSupportStatus:(long long)arg1 withMatchId:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)saveSupportStatus:(long long)arg1 withMatchId:(id)arg2;
- (long long)curSupportStatusWithMatchId:(id)arg1;
- (void)userChanged:(id)arg1;
- (void)dealloc;
- (id)init;

@end

