//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSMutableArray, NSURL, QSComPublishImageOrVideoCell;

@protocol QSComPublishImageOrVideoCellDelegate <NSObject>
- (void)comPublishImageOrVideoCell:(QSComPublishImageOrVideoCell *)arg1 setVideoFileURL:(NSURL *)arg2;
- (NSURL *)comPublishImageOrVideoCellVideoFileURL:(QSComPublishImageOrVideoCell *)arg1;
- (NSMutableArray *)comPublishImageOrVideoCellImages:(QSComPublishImageOrVideoCell *)arg1;
- (_Bool)comPublishImageOrVideoCellIsExceedTodayPublishVideoLimit:(QSComPublishImageOrVideoCell *)arg1 shouldShowAlertWhenExceedLimit:(_Bool)arg2;

@optional
- (void)comPublishImageOrVideoCellDidChange:(QSComPublishImageOrVideoCell *)arg1;
- (void)comPublishImageOrVideoCellDidTap:(QSComPublishImageOrVideoCell *)arg1;
@end
