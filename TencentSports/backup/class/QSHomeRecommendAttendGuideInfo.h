//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "QSModel.h"

@class NSString, QSAttendTagItem;

__attribute__((visibility("hidden")))
@interface QSHomeRecommendAttendGuideInfo : QSModel
{
    NSString *_title;
    QSAttendTagItem *_tag;
}

@property(retain, nonatomic) QSAttendTagItem *tag; // @synthesize tag=_tag;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
- (void).cxx_destruct;

@end
