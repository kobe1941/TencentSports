//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "QSModel.h"

@class NSArray, NSString;

__attribute__((visibility("hidden")))
@interface QSHomeRecommendSummaryInfo : QSModel
{
    _Bool _ifHasVideo;
    NSArray *_bottom_buttons;
    NSArray *_matchData;
    NSString *_matchPic;
    NSString *_tag;
    NSString *_title;
    NSString *_timeTitle;
    long long _summaryType;
}

+ (Class)classForObjectInArrayProperty:(id)arg1;
@property(nonatomic) long long summaryType; // @synthesize summaryType=_summaryType;
@property(copy, nonatomic) NSString *timeTitle; // @synthesize timeTitle=_timeTitle;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(copy, nonatomic) NSString *tag; // @synthesize tag=_tag;
@property(copy, nonatomic) NSString *matchPic; // @synthesize matchPic=_matchPic;
@property(retain, nonatomic) NSArray *matchData; // @synthesize matchData=_matchData;
@property(nonatomic) _Bool ifHasVideo; // @synthesize ifHasVideo=_ifHasVideo;
@property(retain, nonatomic) NSArray *bottom_buttons; // @synthesize bottom_buttons=_bottom_buttons;
- (void).cxx_destruct;

@end
