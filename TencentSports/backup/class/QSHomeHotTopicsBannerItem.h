//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "QSModel.h"

@class NSString, QSHomeHotTopicsBannerItemInfo;

__attribute__((visibility("hidden")))
@interface QSHomeHotTopicsBannerItem : QSModel
{
    long long _type;
    long long _openType;
    NSString *_url;
    NSString *_image;
    NSString *_image4app;
    NSString *_url4App;
    NSString *_title;
    QSHomeHotTopicsBannerItemInfo *_info;
}

@property(retain, nonatomic) QSHomeHotTopicsBannerItemInfo *info; // @synthesize info=_info;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(copy, nonatomic) NSString *url4App; // @synthesize url4App=_url4App;
@property(copy, nonatomic) NSString *image4app; // @synthesize image4app=_image4app;
@property(copy, nonatomic) NSString *image; // @synthesize image=_image;
@property(copy, nonatomic) NSString *url; // @synthesize url=_url;
@property(nonatomic) long long openType; // @synthesize openType=_openType;
@property(nonatomic) long long type; // @synthesize type=_type;
- (void).cxx_destruct;

@end

