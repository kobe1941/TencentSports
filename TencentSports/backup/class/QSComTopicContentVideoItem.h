//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "QSModel.h"

@class NSString;

__attribute__((visibility("hidden")))
@interface QSComTopicContentVideoItem : QSModel
{
    _Bool _isPay;
    _Bool _isUserVideo;
    NSString *_url;
    NSString *_vid;
    NSString *_title;
    NSString *_desc;
    NSString *_picUrl;
    NSString *_duration;
    NSString *_imageSmall;
    NSString *_imageMiddle;
    NSString *_imageLarge;
    double _aspect;
}

@property(nonatomic) _Bool isUserVideo; // @synthesize isUserVideo=_isUserVideo;
@property(nonatomic) double aspect; // @synthesize aspect=_aspect;
@property(retain, nonatomic) NSString *imageLarge; // @synthesize imageLarge=_imageLarge;
@property(retain, nonatomic) NSString *imageMiddle; // @synthesize imageMiddle=_imageMiddle;
@property(retain, nonatomic) NSString *imageSmall; // @synthesize imageSmall=_imageSmall;
@property(nonatomic) _Bool isPay; // @synthesize isPay=_isPay;
@property(retain, nonatomic) NSString *duration; // @synthesize duration=_duration;
@property(retain, nonatomic) NSString *picUrl; // @synthesize picUrl=_picUrl;
@property(retain, nonatomic) NSString *desc; // @synthesize desc=_desc;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
@property(retain, nonatomic) NSString *vid; // @synthesize vid=_vid;
@property(retain, nonatomic) NSString *url; // @synthesize url=_url;
- (void).cxx_destruct;

@end

