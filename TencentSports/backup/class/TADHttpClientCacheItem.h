//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCoding-Protocol.h"

@class NSDate, NSDictionary, NSMutableArray, NSMutableData, NSString;

@interface TADHttpClientCacheItem : NSObject <NSCoding>
{
    _Bool _shouldAddRetryCode;
    int _failedTimes;
    NSString *_url;
    NSMutableData *_postData;
    NSMutableArray *_cookies;
    NSDate *_date;
    NSDictionary *_headers;
}

@property(nonatomic) int failedTimes; // @synthesize failedTimes=_failedTimes;
@property(retain, nonatomic) NSDictionary *headers; // @synthesize headers=_headers;
@property(nonatomic) _Bool shouldAddRetryCode; // @synthesize shouldAddRetryCode=_shouldAddRetryCode;
@property(retain, nonatomic) NSDate *date; // @synthesize date=_date;
@property(retain, nonatomic) NSMutableArray *cookies; // @synthesize cookies=_cookies;
@property(retain, nonatomic) NSMutableData *postData; // @synthesize postData=_postData;
@property(retain, nonatomic) NSString *url; // @synthesize url=_url;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)dealloc;

@end

