//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSString, QSComTopicContentImageItem;

__attribute__((visibility("hidden")))
@interface QSNewsListItemCellInfo : NSObject
{
    _Bool _isVideo;
    _Bool _hasRead;
    int _picCount;
    int _commentsNum;
    int _newsTypeColor;
    NSString *_identity;
    long long _cellType;
    NSString *_title;
    QSComTopicContentImageItem *_smallPic;
    NSString *_pubTime;
    NSString *_views;
    NSArray *_thumbnails;
    NSString *_newsType;
    NSString *_tagKey;
    NSString *_replyNum;
    NSString *_supportNum;
    NSString *_videoTime;
}

@property(nonatomic) _Bool hasRead; // @synthesize hasRead=_hasRead;
@property(copy, nonatomic) NSString *videoTime; // @synthesize videoTime=_videoTime;
@property(nonatomic) _Bool isVideo; // @synthesize isVideo=_isVideo;
@property(copy, nonatomic) NSString *supportNum; // @synthesize supportNum=_supportNum;
@property(copy, nonatomic) NSString *replyNum; // @synthesize replyNum=_replyNum;
@property(copy, nonatomic) NSString *tagKey; // @synthesize tagKey=_tagKey;
@property(nonatomic) int newsTypeColor; // @synthesize newsTypeColor=_newsTypeColor;
@property(copy, nonatomic) NSString *newsType; // @synthesize newsType=_newsType;
@property(nonatomic) int commentsNum; // @synthesize commentsNum=_commentsNum;
@property(copy, nonatomic) NSArray *thumbnails; // @synthesize thumbnails=_thumbnails;
@property(nonatomic) int picCount; // @synthesize picCount=_picCount;
@property(copy, nonatomic) NSString *views; // @synthesize views=_views;
@property(copy, nonatomic) NSString *pubTime; // @synthesize pubTime=_pubTime;
@property(retain, nonatomic) QSComTopicContentImageItem *smallPic; // @synthesize smallPic=_smallPic;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(nonatomic) long long cellType; // @synthesize cellType=_cellType;
@property(copy, nonatomic) NSString *identity; // @synthesize identity=_identity;
- (void).cxx_destruct;
- (id)init;

@end

