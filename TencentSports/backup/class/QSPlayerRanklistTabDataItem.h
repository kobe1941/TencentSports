//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "QSModel.h"

@class NSString;

__attribute__((visibility("hidden")))
@interface QSPlayerRanklistTabDataItem : QSModel
{
    NSString *_serial;
    NSString *_name;
    NSString *_playerId;
    NSString *_icon;
    NSString *_value;
    NSString *_teamName;
    NSString *_teamLogo;
    NSString *_detailUrl;
    long long _appearCount;
}

@property(nonatomic) long long appearCount; // @synthesize appearCount=_appearCount;
@property(retain, nonatomic) NSString *detailUrl; // @synthesize detailUrl=_detailUrl;
@property(retain, nonatomic) NSString *teamLogo; // @synthesize teamLogo=_teamLogo;
@property(retain, nonatomic) NSString *teamName; // @synthesize teamName=_teamName;
@property(retain, nonatomic) NSString *value; // @synthesize value=_value;
@property(retain, nonatomic) NSString *icon; // @synthesize icon=_icon;
@property(retain, nonatomic) NSString *playerId; // @synthesize playerId=_playerId;
@property(retain, nonatomic) NSString *name; // @synthesize name=_name;
@property(retain, nonatomic) NSString *serial; // @synthesize serial=_serial;
- (void).cxx_destruct;

@end

