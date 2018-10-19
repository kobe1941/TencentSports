//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "GKGameCenterControllerDelegate-Protocol.h"

@class GKGameCenterViewController, NSString;

__attribute__((visibility("hidden")))
@interface AchievementWrapper : UIViewController <GKGameCenterControllerDelegate>
{
    GKGameCenterViewController *m_AchievementsView;
}

+ (void)reportProgressWithCache:(double)arg1 withIdentifier:(id)arg2 userCallback:(CDUnknownBlockType)arg3;
+ (void)reportSingleAchievement:(id)arg1 completion:(CDUnknownBlockType)arg2;
+ (void)reportProgress:(double)arg1 withIdentifier:(id)arg2 userCallback:(struct ScriptingObjectPtr)arg3;
+ (void)loadAchievements:(struct ScriptingObjectPtr)arg1;
+ (void)loadAchievementDescriptions:(struct ScriptingObjectPtr)arg1;
- (void).cxx_destruct;
- (void)gameCenterViewControllerDidFinish:(id)arg1;
- (void)showAchievementsUI;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

