//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCoding-Protocol.h"

@class NSDictionary, NSMutableDictionary, NSString;

@interface TADFrequency : NSObject <NSCoding>
{
    NSDictionary *_orderDataMap;
    NSString *_date;
    NSMutableDictionary *_adFreeIntervalDict;
    NSDictionary *_reportedOrderMap;
}

@property(retain, nonatomic) NSDictionary *reportedOrderMap; // @synthesize reportedOrderMap=_reportedOrderMap;
@property(retain, nonatomic) NSMutableDictionary *adFreeIntervalDict; // @synthesize adFreeIntervalDict=_adFreeIntervalDict;
@property(copy, nonatomic) NSString *date; // @synthesize date=_date;
@property(retain, nonatomic) NSDictionary *orderDataMap; // @synthesize orderDataMap=_orderDataMap;
- (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;

@end
