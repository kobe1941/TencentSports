//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "QSModel.h"

@class NSArray, NSString;

__attribute__((visibility("hidden")))
@interface QSMPSeeBackPreviewInfo : QSModel
{
    NSString *_sid;
    NSString *_url_prefix;
    NSString *_url_suffix;
    NSString *_small_pic_size;
    double _small_pic_width;
    double _small_pic_height;
    long long _row_num;
    long long _colum_num;
    long long _big_pic_num;
    NSArray *_big_pics;
}

+ (Class)classForObjectInArrayProperty:(id)arg1;
@property(retain, nonatomic) NSArray *big_pics; // @synthesize big_pics=_big_pics;
@property(nonatomic) long long big_pic_num; // @synthesize big_pic_num=_big_pic_num;
@property(nonatomic) long long colum_num; // @synthesize colum_num=_colum_num;
@property(nonatomic) long long row_num; // @synthesize row_num=_row_num;
@property(nonatomic) double small_pic_height; // @synthesize small_pic_height=_small_pic_height;
@property(nonatomic) double small_pic_width; // @synthesize small_pic_width=_small_pic_width;
@property(copy, nonatomic) NSString *small_pic_size; // @synthesize small_pic_size=_small_pic_size;
@property(copy, nonatomic) NSString *url_suffix; // @synthesize url_suffix=_url_suffix;
@property(copy, nonatomic) NSString *url_prefix; // @synthesize url_prefix=_url_prefix;
@property(copy, nonatomic) NSString *sid; // @synthesize sid=_sid;
- (void).cxx_destruct;

@end

