//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface TADOfflineAdStrategyEntity : NSObject
{
    int _duration;
    int _length;
    long long _start;
    long long _end;
}

+ (id)entityFromString:(id)arg1;
@property(nonatomic) int length; // @synthesize length=_length;
@property(nonatomic) int duration; // @synthesize duration=_duration;
@property(nonatomic) long long end; // @synthesize end=_end;
@property(nonatomic) long long start; // @synthesize start=_start;
- (id)description;
- (_Bool)containsDuration:(unsigned long long)arg1;
- (id)init;

@end

