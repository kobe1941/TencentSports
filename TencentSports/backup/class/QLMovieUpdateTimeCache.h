//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;

@interface QLMovieUpdateTimeCache : NSObject
{
    NSMutableDictionary *_cacheDict;
}

+ (id)sharedInstance;
- (id)serverField:(long long)arg1;
- (long long)getTypeTVUpdateNum:(id)arg1;
- (id)updateCache:(id)arg1 MovieType:(long long)arg2 UpdateTime:(id)arg3;
- (id)findUpdateTime:(id)arg1;
- (id)init;
- (void)dealloc;

@end

