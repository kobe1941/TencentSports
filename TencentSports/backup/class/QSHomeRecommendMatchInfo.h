//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "QSModel.h"

@class NSArray, NSString, QSHomeRecommendMoreNewsInfo, QSMoreMatchItem;

__attribute__((visibility("hidden")))
@interface QSHomeRecommendMatchInfo : QSModel
{
    _Bool _showHeadBanner;
    NSArray *_addtion;
    NSArray *_bottom_buttons;
    NSString *_head_tag;
    QSHomeRecommendMoreNewsInfo *_button_more_news;
    QSMoreMatchItem *_match;
    long long _livePeriod;
}

+ (Class)classForObjectInArrayProperty:(id)arg1;
@property(nonatomic) long long livePeriod; // @synthesize livePeriod=_livePeriod;
@property(nonatomic) _Bool showHeadBanner; // @synthesize showHeadBanner=_showHeadBanner;
@property(retain, nonatomic) QSMoreMatchItem *match; // @synthesize match=_match;
@property(retain, nonatomic) QSHomeRecommendMoreNewsInfo *button_more_news; // @synthesize button_more_news=_button_more_news;
@property(copy, nonatomic) NSString *head_tag; // @synthesize head_tag=_head_tag;
@property(retain, nonatomic) NSArray *bottom_buttons; // @synthesize bottom_buttons=_bottom_buttons;
@property(retain, nonatomic) NSArray *addtion; // @synthesize addtion=_addtion;
- (void).cxx_destruct;
- (_Bool)manualSetValue:(id)arg1 forKey:(id)arg2;

@end

