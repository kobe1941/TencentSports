//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "HTTPResponse-Protocol.h"

@class NSData;

@interface TADAvailabilityTestResponse : NSObject <HTTPResponse>
{
    NSData *_responseData;
}

@property(retain, nonatomic) NSData *responseData; // @synthesize responseData=_responseData;
- (void).cxx_destruct;
- (_Bool)isDone;
- (id)readDataOfLength:(unsigned long long)arg1;
- (void)setOffset:(unsigned long long)arg1;
- (unsigned long long)offset;
- (unsigned long long)contentLength;
- (id)init;

@end

