//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "QSStatedData.h"

@class NSString, QSSportsMediaInfo;

__attribute__((visibility("hidden")))
@interface QSMatchAuthenticationData : QSStatedData
{
    NSString *_mid;
}

+ (_Bool)cleanCacheWhenUserChanged;
@property(copy, nonatomic) NSString *mid; // @synthesize mid=_mid;
- (void).cxx_destruct;
- (void)resetWithResponseModel:(id)arg1;
- (id)httpURLComponents;
- (id)identifier;
- (double)cacheExpireTime;
@property(readonly, nonatomic) QSSportsMediaInfo *authenticationInfo; // @dynamic authenticationInfo;

@end

