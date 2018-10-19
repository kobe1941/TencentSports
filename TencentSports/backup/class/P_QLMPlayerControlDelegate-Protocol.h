//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class UITapGestureRecognizer;

@protocol P_QLMPlayerControlDelegate <NSObject>
- (void)playerDidClickBackButton:(id)arg1;
- (void)playerControlDidClickPlay:(id)arg1;
- (void)playerControlDidClickShare:(id)arg1;
- (void)playerControlDidClickDownload:(id)arg1;
- (void)playerControlDidClickFavorite:(_Bool)arg1;
- (void)playerControlSeekEnd:(double)arg1 duration:(double)arg2;
- (void)playerControlSeekTo:(double)arg1;
- (void)playerControlSeekBegin:(double)arg1;

@optional
- (void)playerControlDidHideAllControlViews;
- (void)playerControlDidShowAllControlViews;
- (void)playerControlPlayerDidSinggleTag:(UITapGestureRecognizer *)arg1;
- (void)playerControlActionStatus:(unsigned long long)arg1;
@end

