//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "QSModel.h"

@class NSDictionary, NSString;

__attribute__((visibility("hidden")))
@interface QSHomeRecommendBottomButtonInfo : QSModel
{
    long long _button_type;
    NSDictionary *_jumpData;
    NSString *_title;
}

@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(retain, nonatomic) NSDictionary *jumpData; // @synthesize jumpData=_jumpData;
@property(nonatomic) long long button_type; // @synthesize button_type=_button_type;
- (void).cxx_destruct;

@end

