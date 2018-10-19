//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSData, NSNumber, NSString, TADItemInfo;

@interface TADSplashItem : NSObject
{
    _Bool _isRichMedia;
    NSString *_idStr;
    NSData *_splashImageData;
    NSString *_splashVideo;
    NSString *_adBrandName;
    NSString *_adDescription;
    NSString *_link;
    double _duration;
    double _videoDuration;
    double _h5Duration;
    TADItemInfo *_tadItem;
    NSString *_zipFilePath;
    NSNumber *_margin;
}

@property(nonatomic) _Bool isRichMedia; // @synthesize isRichMedia=_isRichMedia;
@property(retain, nonatomic) NSNumber *margin; // @synthesize margin=_margin;
@property(retain, nonatomic) NSString *zipFilePath; // @synthesize zipFilePath=_zipFilePath;
@property(retain, nonatomic) TADItemInfo *tadItem; // @synthesize tadItem=_tadItem;
@property(nonatomic) double h5Duration; // @synthesize h5Duration=_h5Duration;
@property(nonatomic) double videoDuration; // @synthesize videoDuration=_videoDuration;
@property(nonatomic) double duration; // @synthesize duration=_duration;
@property(retain, nonatomic) NSString *link; // @synthesize link=_link;
@property(retain, nonatomic) NSString *adDescription; // @synthesize adDescription=_adDescription;
@property(retain, nonatomic) NSString *adBrandName; // @synthesize adBrandName=_adBrandName;
@property(retain, nonatomic) NSString *splashVideo; // @synthesize splashVideo=_splashVideo;
@property(retain, nonatomic) NSData *splashImageData; // @synthesize splashImageData=_splashImageData;
@property(retain, nonatomic) NSString *idStr; // @synthesize idStr=_idStr;
- (void).cxx_destruct;
- (void)dealloc;

@end
