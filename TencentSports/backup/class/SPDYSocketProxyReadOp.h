//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SPDYSocketReadOp.h"

@class NSString;

__attribute__((visibility("hidden")))
@interface SPDYSocketProxyReadOp : SPDYSocketReadOp
{
    NSString *_version;
    long long _statusCode;
    NSString *_remaining;
    unsigned long long _bytesParsed;
}

- (void).cxx_destruct;
- (_Bool)needsAuth;
- (_Bool)success;
- (_Bool)tryParseResponse;
- (id)initWithTimeout:(double)arg1;

@end
