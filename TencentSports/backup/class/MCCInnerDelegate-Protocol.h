//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSDictionary, NSString, mccResponseInfo;

@protocol MCCInnerDelegate <NSObject>
- (void)didInsertIntoDB:(NSString *)arg1;
- (void)didGotError:(NSString *)arg1 teamID:(NSString *)arg2 errorCode:(long long)arg3;
- (void)didDownloadedConfig:(NSString *)arg1 teamID:(NSString *)arg2 config:(NSDictionary *)arg3 response:(mccResponseInfo *)arg4;
- (void)didFoundNewConfig:(NSString *)arg1 hasFile:(_Bool)arg2 downloadTeamID:(NSString *)arg3 config:(NSDictionary *)arg4 response:(mccResponseInfo *)arg5;
@end

