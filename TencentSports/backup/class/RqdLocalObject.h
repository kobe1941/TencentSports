//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCoding-Protocol.h"

@interface RqdLocalObject : NSObject <NSCoding>
{
    long long md5;
    long long time;
    int dcount;
    long long encLen;
}

@property(nonatomic) long long encLen; // @synthesize encLen;
@property(nonatomic) long long md5; // @synthesize md5;
@property(nonatomic) int dcount; // @synthesize dcount;
@property(nonatomic) long long time; // @synthesize time;
- (_Bool)setEncodeData:(id)arg1;
- (id)encodeData;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;

@end

