//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "QSStatedData.h"

@class NSString;

__attribute__((visibility("hidden")))
@interface QSMatchGuessSignedInCardData : QSStatedData
{
    NSString *_mid;
}

+ (_Bool)cleanCacheWhenUserChanged;
@property(retain, nonatomic) NSString *mid; // @synthesize mid=_mid;
- (void).cxx_destruct;
- (void)resetWithResponseModel:(id)arg1;
- (id)httpURLComponents;
- (id)identifier;
@property(readonly, nonatomic) __weak NSString *userRank; // @dynamic userRank;

@end

