//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "QSModel.h"

@class NSDictionary, NSString;

__attribute__((visibility("hidden")))
@interface QSVideoListByColumnIdVideoInfo : QSModel
{
    NSString *_pic;
    NSString *_title;
    NSString *_commentNum;
    NSString *_vid;
    NSString *_isPay;
    NSString *_duration;
    NSString *_views;
    NSString *_targetId;
    NSString *_newsId;
    NSDictionary *_jumpData;
}

@property(retain, nonatomic) NSDictionary *jumpData; // @synthesize jumpData=_jumpData;
@property(retain, nonatomic) NSString *newsId; // @synthesize newsId=_newsId;
@property(retain, nonatomic) NSString *targetId; // @synthesize targetId=_targetId;
@property(retain, nonatomic) NSString *views; // @synthesize views=_views;
@property(retain, nonatomic) NSString *duration; // @synthesize duration=_duration;
@property(retain, nonatomic) NSString *isPay; // @synthesize isPay=_isPay;
@property(retain, nonatomic) NSString *vid; // @synthesize vid=_vid;
@property(retain, nonatomic) NSString *commentNum; // @synthesize commentNum=_commentNum;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
@property(retain, nonatomic) NSString *pic; // @synthesize pic=_pic;
- (void).cxx_destruct;

@end
