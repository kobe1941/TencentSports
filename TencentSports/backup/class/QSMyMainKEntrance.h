//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "QSModel.h"

@class NSArray, NSDictionary, NSString;

__attribute__((visibility("hidden")))
@interface QSMyMainKEntrance : QSModel
{
    NSString *_title;
    long long _type;
    NSDictionary *_moreJumpData;
    NSArray *_list;
}

+ (Class)classForObjectInArrayProperty:(id)arg1;
@property(retain, nonatomic) NSArray *list; // @synthesize list=_list;
@property(retain, nonatomic) NSDictionary *moreJumpData; // @synthesize moreJumpData=_moreJumpData;
@property(nonatomic) long long type; // @synthesize type=_type;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
- (void).cxx_destruct;

@end

