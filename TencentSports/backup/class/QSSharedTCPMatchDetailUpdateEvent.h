//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "QSBusEvent.h"

@class NSDictionary;

__attribute__((visibility("hidden")))
@interface QSSharedTCPMatchDetailUpdateEvent : QSBusEvent
{
    NSDictionary *_matchDetail;
    NSDictionary *_page;
}

@property(copy, nonatomic) NSDictionary *page; // @synthesize page=_page;
@property(copy, nonatomic) NSDictionary *matchDetail; // @synthesize matchDetail=_matchDetail;
- (void).cxx_destruct;
- (id)consumeQueue;

@end

