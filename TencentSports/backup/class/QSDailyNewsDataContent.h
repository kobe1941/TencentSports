//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "QSModel.h"

@class NSArray, NSString;

__attribute__((visibility("hidden")))
@interface QSDailyNewsDataContent : QSModel
{
    _Bool _isShare;
    NSString *_title;
    NSString *_summary;
    NSArray *_sections;
}

+ (Class)classForObjectInArrayProperty:(id)arg1;
@property(nonatomic) _Bool isShare; // @synthesize isShare=_isShare;
@property(retain, nonatomic) NSArray *sections; // @synthesize sections=_sections;
@property(retain, nonatomic) NSString *summary; // @synthesize summary=_summary;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
- (void).cxx_destruct;

@end
