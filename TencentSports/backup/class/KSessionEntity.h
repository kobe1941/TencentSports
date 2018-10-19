//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCoding-Protocol.h"

@class NSString;

@interface KSessionEntity : NSObject <NSCoding>
{
    NSString *lat;
    NSString *lng;
    long long run_time;
    long long open_count;
    long long page_count;
}

@property(nonatomic) long long page_count; // @synthesize page_count;
@property(nonatomic) long long open_count; // @synthesize open_count;
@property(nonatomic) long long run_time; // @synthesize run_time;
@property(retain, nonatomic) NSString *lng; // @synthesize lng;
@property(retain, nonatomic) NSString *lat; // @synthesize lat;
- (void).cxx_destruct;
- (id)toJsonStr:(id)arg1 pages:(id)arg2 events:(id)arg3;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

