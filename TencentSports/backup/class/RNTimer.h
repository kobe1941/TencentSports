//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface RNTimer : NSObject
{
    CDUnknownBlockType _block;
    struct dispatch_source_s *_source;
}

+ (id)repeatingTimerWithTimeInterval:(double)arg1 block:(CDUnknownBlockType)arg2;
@property(nonatomic) struct dispatch_source_s *source; // @synthesize source=_source;
@property(copy, nonatomic) CDUnknownBlockType block; // @synthesize block=_block;
- (void).cxx_destruct;
- (void)fire;
- (void)dealloc;
- (void)invalidate;

@end
