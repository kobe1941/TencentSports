//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface TVKVideoKeyData : NSObject
{
    NSString *fileKey;
    NSString *shaKey;
    long long fileIdx;
}

@property(nonatomic) long long fileIdx; // @synthesize fileIdx;
@property(copy, nonatomic) NSString *shaKey; // @synthesize shaKey;
@property(copy, nonatomic) NSString *fileKey; // @synthesize fileKey;
- (void)dealloc;

@end
