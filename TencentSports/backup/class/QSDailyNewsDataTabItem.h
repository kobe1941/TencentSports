//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "QSModel.h"

@class NSDictionary, NSString, UIImage;

__attribute__((visibility("hidden")))
@interface QSDailyNewsDataTabItem : QSModel
{
    NSString *_title;
    long long _button_type;
    UIImage *_image;
    NSDictionary *_jumpData;
}

+ (id)ignoredPropertiesWhenEncoding;
@property(retain, nonatomic) NSDictionary *jumpData; // @synthesize jumpData=_jumpData;
@property(retain, nonatomic) UIImage *image; // @synthesize image=_image;
@property(nonatomic) long long button_type; // @synthesize button_type=_button_type;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
- (void).cxx_destruct;

@end

