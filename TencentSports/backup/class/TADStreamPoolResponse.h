//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TADBaseResponse.h"

@class NSArray, NSDate;

@interface TADStreamPoolResponse : TADBaseResponse
{
    NSArray *_comingPoolAds;
    NSDate *_baseDate;
}

@property(retain, nonatomic) NSDate *baseDate; // @synthesize baseDate=_baseDate;
@property(retain, nonatomic) NSArray *comingPoolAds; // @synthesize comingPoolAds=_comingPoolAds;
- (void).cxx_destruct;
- (id)initWithResponse:(id)arg1 requestItem:(id)arg2;

@end

