//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "QSModel.h"

@class NSString;

__attribute__((visibility("hidden")))
@interface QSSystemMessageUser : QSModel
{
    NSString *_userId;
    NSString *_name;
    NSString *_avatar;
    long long _type;
    long long _vipType;
}

+ (id)propertyNameFromParsedKey:(id)arg1;
@property(nonatomic) long long vipType; // @synthesize vipType=_vipType;
@property(nonatomic) long long type; // @synthesize type=_type;
@property(copy, nonatomic) NSString *avatar; // @synthesize avatar=_avatar;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
@property(copy, nonatomic) NSString *userId; // @synthesize userId=_userId;
- (void).cxx_destruct;

@end

