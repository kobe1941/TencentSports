//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "QSModel.h"

@class NSDate, NSString;

__attribute__((visibility("hidden")))
@interface QSMatchCalendarItem : QSModel
{
    _Bool _isSelectedDay;
    _Bool _attend;
    long long _day;
    NSString *_dayStr;
    NSDate *_dayDate;
    long long _num;
}

@property(nonatomic) _Bool attend; // @synthesize attend=_attend;
@property(nonatomic) long long num; // @synthesize num=_num;
@property(retain, nonatomic) NSDate *dayDate; // @synthesize dayDate=_dayDate;
@property(retain, nonatomic) NSString *dayStr; // @synthesize dayStr=_dayStr;
@property(nonatomic) long long day; // @synthesize day=_day;
@property(nonatomic) _Bool isSelectedDay; // @synthesize isSelectedDay=_isSelectedDay;
- (void).cxx_destruct;

@end
