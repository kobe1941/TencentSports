//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "QSModel.h"

@class NSString;

__attribute__((visibility("hidden")))
@interface QSLiveSeeBackMarkInfo : QSModel
{
    NSString *_desc;
    NSString *_event_id;
    NSString *_icon;
    long long _slices;
    long long _time;
    long long _time_now;
    NSString *_title;
}

@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(nonatomic) long long time_now; // @synthesize time_now=_time_now;
@property(nonatomic) long long time; // @synthesize time=_time;
@property(nonatomic) long long slices; // @synthesize slices=_slices;
@property(copy, nonatomic) NSString *icon; // @synthesize icon=_icon;
@property(copy, nonatomic) NSString *event_id; // @synthesize event_id=_event_id;
@property(copy, nonatomic) NSString *desc; // @synthesize desc=_desc;
- (void).cxx_destruct;

@end

