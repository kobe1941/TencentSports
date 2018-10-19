//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSArray, NSError, TVKMediaUrlRequest;

@protocol TVKMediaUrlRequestDelegate <NSObject>

@optional
- (void)didMediaUrlRequestFailed:(TVKMediaUrlRequest *)arg1 error:(NSError *)arg2;
- (void)didMediaUrlRequestUpdated:(TVKMediaUrlRequest *)arg1 videoUrls:(NSArray *)arg2 viedoDurations:(NSArray *)arg3;
- (void)didMediaUrlRequestFinished:(TVKMediaUrlRequest *)arg1 videoFormatList:(NSArray *)arg2;
- (void)didMediaUrlRequestFinished:(TVKMediaUrlRequest *)arg1 videoUrls:(NSArray *)arg2 viedoDurations:(NSArray *)arg3 fileSize:(long long)arg4;
@end

