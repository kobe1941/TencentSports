//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCoding-Protocol.h"
#import "QSCacheDataProtocol-Protocol.h"
#import "QSHttpDataProtocol-Protocol.h"

@class NSDate, NSString;

@interface QSHttpCacheModelData : NSObject <NSCoding, QSCacheDataProtocol, QSHttpDataProtocol>
{
    id _data;
    Class _dataClass;
    NSDate *_lastUpdateTime;
}

@property(retain, nonatomic) NSDate *lastUpdateTime; // @synthesize lastUpdateTime=_lastUpdateTime;
@property(retain, nonatomic) Class dataClass; // @synthesize dataClass=_dataClass;
@property(retain, nonatomic) id data; // @synthesize data=_data;
- (void).cxx_destruct;
- (double)updateFrequency;
- (_Bool)hasUpdateFrequency;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

