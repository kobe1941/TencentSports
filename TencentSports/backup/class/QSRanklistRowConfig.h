//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "QSModel.h"

@class NSString;

__attribute__((visibility("hidden")))
@interface QSRanklistRowConfig : QSModel
{
    long long _color;
    NSString *_detailUrl;
    NSString *_icon;
    unsigned long long _configId;
    NSString *_name;
    NSString *_serial;
    long long _type;
    long long _labelColorType;
    long long _bgColorType;
}

+ (id)propertyNameFromParsedKey:(id)arg1;
@property(nonatomic) long long bgColorType; // @synthesize bgColorType=_bgColorType;
@property(nonatomic) long long labelColorType; // @synthesize labelColorType=_labelColorType;
@property(nonatomic) long long type; // @synthesize type=_type;
@property(copy, nonatomic) NSString *serial; // @synthesize serial=_serial;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
@property(nonatomic) unsigned long long configId; // @synthesize configId=_configId;
@property(copy, nonatomic) NSString *icon; // @synthesize icon=_icon;
@property(copy, nonatomic) NSString *detailUrl; // @synthesize detailUrl=_detailUrl;
@property(nonatomic) long long color; // @synthesize color=_color;
- (void).cxx_destruct;

@end

