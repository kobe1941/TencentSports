//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCoding-Protocol.h"
#import "NSCopying-Protocol.h"
#import "QSModelProtocol-Protocol.h"

@class NSString;

@interface QSModel : NSObject <NSCoding, NSCopying, QSModelProtocol>
{
}

+ (id)modelWithInfo:(id)arg1;
+ (id)modelsWithInfos:(id)arg1;
+ (id)parsedArrayFromInfos:(id)arg1;
+ (_Bool)isValidValue:(id)arg1 settingToProperty:(id)arg2;
+ (void)initialize;
+ (id)propertyInfoWithName:(id)arg1;
+ (id)allPropertiesInfo;
@property(readonly, copy) NSString *description;
- (id)modelInfo;
- (id)initWithInfo:(id)arg1;
- (void)resetWithModel:(id)arg1;
- (void)resetWithInfo:(id)arg1;
- (void)automaticParseFromInfo:(id)arg1;
- (void)parseFromInfo:(id)arg1;
- (void)securedSetValue:(id)arg1 forKey:(id)arg2;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

