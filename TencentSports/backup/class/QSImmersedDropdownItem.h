//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "QSModel.h"

@class NSDictionary, NSString;

__attribute__((visibility("hidden")))
@interface QSImmersedDropdownItem : QSModel
{
    _Bool _isAnchor;
    unsigned long long _type;
    NSString *_date;
    NSDictionary *_jumpParams;
    NSString *_title;
}

@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(retain, nonatomic) NSDictionary *jumpParams; // @synthesize jumpParams=_jumpParams;
@property(nonatomic) _Bool isAnchor; // @synthesize isAnchor=_isAnchor;
@property(copy, nonatomic) NSString *date; // @synthesize date=_date;
@property(nonatomic) unsigned long long type; // @synthesize type=_type;
- (void).cxx_destruct;

@end
