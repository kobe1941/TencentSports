//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "QSPerformanceRecorderProtocol-Protocol.h"

@class NSString;

__attribute__((visibility("hidden")))
@interface QSPerformanceTestRecorder : NSObject <QSPerformanceRecorderProtocol>
{
    NSString *_identifer;
}

@property(copy, nonatomic) NSString *identifer; // @synthesize identifer=_identifer;
- (void).cxx_destruct;
- (void)updateData:(id)arg1 withDataType:(unsigned long long)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
