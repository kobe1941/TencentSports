//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;

@interface MMA_Switch : NSObject
{
    unsigned char _isTrackLocation;
    long long _offlineCacheExpiration;
    NSMutableDictionary *_encrypt;
}

@property(retain, nonatomic) NSMutableDictionary *encrypt; // @synthesize encrypt=_encrypt;
@property(nonatomic) long long offlineCacheExpiration; // @synthesize offlineCacheExpiration=_offlineCacheExpiration;
@property(nonatomic) unsigned char isTrackLocation; // @synthesize isTrackLocation=_isTrackLocation;
- (void).cxx_destruct;

@end

