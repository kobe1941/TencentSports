//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "QSModel.h"

@class NSArray, NSString, QSVideoListPlayerModel, QSVideoListSetInfo, QSVideoListVideoIconInfo;

__attribute__((visibility("hidden")))
@interface QSVideoListVideoModel : QSModel
{
    _Bool _isPay;
    _Bool _isThumb;
    _Bool _needRecommend;
    NSString *_vid;
    NSString *_cid;
    NSString *_title;
    NSString *_stitle;
    NSString *_pic;
    NSString *_pic2;
    NSString *_views;
    NSString *_duration;
    NSString *_tl;
    NSString *_targetId;
    NSString *_publishTime;
    NSString *_setId;
    NSString *_tag;
    NSArray *_jumpTag;
    unsigned long long _commentNum;
    unsigned long long _thumbUpNum;
    QSVideoListPlayerModel *_playerInfo;
    QSVideoListSetInfo *_setInfo;
    QSVideoListVideoIconInfo *_iconInfo;
    QSVideoListVideoIconInfo *_ad;
}

+ (Class)classForObjectInArrayProperty:(id)arg1;
+ (id)propertyNameFromParsedKey:(id)arg1;
@property(retain, nonatomic) QSVideoListVideoIconInfo *ad; // @synthesize ad=_ad;
@property(retain, nonatomic) QSVideoListVideoIconInfo *iconInfo; // @synthesize iconInfo=_iconInfo;
@property(retain, nonatomic) QSVideoListSetInfo *setInfo; // @synthesize setInfo=_setInfo;
@property(retain, nonatomic) QSVideoListPlayerModel *playerInfo; // @synthesize playerInfo=_playerInfo;
@property(nonatomic) _Bool needRecommend; // @synthesize needRecommend=_needRecommend;
@property(nonatomic) _Bool isThumb; // @synthesize isThumb=_isThumb;
@property(nonatomic) unsigned long long thumbUpNum; // @synthesize thumbUpNum=_thumbUpNum;
@property(nonatomic) unsigned long long commentNum; // @synthesize commentNum=_commentNum;
@property(retain, nonatomic) NSArray *jumpTag; // @synthesize jumpTag=_jumpTag;
@property(copy, nonatomic) NSString *tag; // @synthesize tag=_tag;
@property(copy, nonatomic) NSString *setId; // @synthesize setId=_setId;
@property(copy, nonatomic) NSString *publishTime; // @synthesize publishTime=_publishTime;
@property(copy, nonatomic) NSString *targetId; // @synthesize targetId=_targetId;
@property(copy, nonatomic) NSString *tl; // @synthesize tl=_tl;
@property(copy, nonatomic) NSString *duration; // @synthesize duration=_duration;
@property(copy, nonatomic) NSString *views; // @synthesize views=_views;
@property(nonatomic) _Bool isPay; // @synthesize isPay=_isPay;
@property(copy, nonatomic) NSString *pic2; // @synthesize pic2=_pic2;
@property(copy, nonatomic) NSString *pic; // @synthesize pic=_pic;
@property(copy, nonatomic) NSString *stitle; // @synthesize stitle=_stitle;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(copy, nonatomic) NSString *cid; // @synthesize cid=_cid;
@property(copy, nonatomic) NSString *vid; // @synthesize vid=_vid;
- (void).cxx_destruct;
- (_Bool)isEqual:(id)arg1;

@end

