//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCoding-Protocol.h"
#import "NSCopying-Protocol.h"

@class NSDictionary, NSString;

@interface QLDLNADevice : NSObject <NSCoding, NSCopying>
{
    _Bool _valid;
    int _activedCount;
    NSString *_udn;
    NSString *_manufactor;
    NSString *_modelName;
    NSString *_modelNumber;
    NSString *_name;
    NSString *_host;
}

@property(retain, nonatomic) NSString *host; // @synthesize host=_host;
@property(nonatomic) int activedCount; // @synthesize activedCount=_activedCount;
@property(nonatomic) _Bool valid; // @synthesize valid=_valid;
@property(retain, nonatomic) NSString *name; // @synthesize name=_name;
@property(retain, nonatomic) NSString *modelNumber; // @synthesize modelNumber=_modelNumber;
@property(retain, nonatomic) NSString *modelName; // @synthesize modelName=_modelName;
@property(retain, nonatomic) NSString *manufactor; // @synthesize manufactor=_manufactor;
@property(retain, nonatomic) NSString *udn; // @synthesize udn=_udn;
@property(readonly, nonatomic) NSDictionary *infoDic;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (_Bool)isEqual:(id)arg1;
- (void)dealloc;
- (id)initWithCoder:(id)arg1;

@end

