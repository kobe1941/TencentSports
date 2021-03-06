//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, QSMatchDetailForeshowVideo, QSMatchStateMatchVideoInfo, QSMatchStateMatchVideoItem;

__attribute__((visibility("hidden")))
@interface QSMatchDetailDataVideoInfo : NSObject
{
    _Bool _isCurrentAfterVideoFromUser;
    _Bool _hasVideo;
    long long _livePeriod;
    QSMatchDetailForeshowVideo *_foreshowVideos;
    long long _liveType;
    NSString *_mid;
    QSMatchStateMatchVideoInfo *_afterVideos;
    QSMatchStateMatchVideoInfo *_afterRecord;
    QSMatchStateMatchVideoItem *_currentAfterVideo;
}

@property(nonatomic) _Bool hasVideo; // @synthesize hasVideo=_hasVideo;
@property(retain, nonatomic) QSMatchStateMatchVideoItem *currentAfterVideo; // @synthesize currentAfterVideo=_currentAfterVideo;
@property(nonatomic) _Bool isCurrentAfterVideoFromUser; // @synthesize isCurrentAfterVideoFromUser=_isCurrentAfterVideoFromUser;
@property(retain, nonatomic) QSMatchStateMatchVideoInfo *afterRecord; // @synthesize afterRecord=_afterRecord;
@property(retain, nonatomic) QSMatchStateMatchVideoInfo *afterVideos; // @synthesize afterVideos=_afterVideos;
@property(retain, nonatomic) NSString *mid; // @synthesize mid=_mid;
@property(nonatomic) long long liveType; // @synthesize liveType=_liveType;
@property(retain, nonatomic) QSMatchDetailForeshowVideo *foreshowVideos; // @synthesize foreshowVideos=_foreshowVideos;
@property(nonatomic) long long livePeriod; // @synthesize livePeriod=_livePeriod;
- (void).cxx_destruct;
- (void)resetWithMatchDetailInfo:(id)arg1;

@end

