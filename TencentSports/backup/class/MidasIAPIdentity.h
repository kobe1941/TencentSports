//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface MidasIAPIdentity : NSObject
{
    NSString *_name;
    unsigned long long _idType;
    NSString *_idNum;
    unsigned long long _provinceId;
    unsigned long long _cityId;
}

@property(nonatomic) unsigned long long cityId; // @synthesize cityId=_cityId;
@property(nonatomic) unsigned long long provinceId; // @synthesize provinceId=_provinceId;
@property(retain, nonatomic) NSString *idNum; // @synthesize idNum=_idNum;
@property(nonatomic) unsigned long long idType; // @synthesize idType=_idType;
@property(retain, nonatomic) NSString *name; // @synthesize name=_name;
- (void).cxx_destruct;

@end

