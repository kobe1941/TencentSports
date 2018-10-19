//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSString, UIViewController;

@protocol QLInteractiveVoteDelegate <NSObject>
@property(nonatomic) _Bool isWebviewShare;

@optional
- (void)setPlayerState:(_Bool)arg1;
- (NSString *)getH5Info:(NSString *)arg1;
- (void)saveH5Info:(NSString *)arg1 withValue:(NSString *)arg2;
- (void)openWebviewWith:(NSString *)arg1;
- (void)clickInteractiveVoteShareWith:(UIViewController *)arg1;
- (void)shareToMomentGroup;
- (long long)getCurrentTime;
- (_Bool)attentionCurrentPlayVideo:(_Bool)arg1;
- (_Bool)isAttentionCurrentPlayVideo;
- (NSString *)getSuperViewFrame;
- (NSString *)getHitPointInfos;
- (void)hideTransparentView;
- (void)showTransparentView;
- (void)closeTransparentView;
@end

