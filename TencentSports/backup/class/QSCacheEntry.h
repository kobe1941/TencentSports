//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "QSLinkedNode.h"

@interface QSCacheEntry : QSLinkedNode
{
    unsigned long long _cost;
    id _key;
}

+ (id)cacheEntryWithObject:(id)arg1 cost:(unsigned long long)arg2 key:(id)arg3;
@property(nonatomic) __weak id key; // @synthesize key=_key;
@property(nonatomic) unsigned long long cost; // @synthesize cost=_cost;
- (void).cxx_destruct;

@end

