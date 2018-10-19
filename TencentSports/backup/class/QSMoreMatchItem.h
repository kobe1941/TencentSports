//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "QSModel.h"

@class NSArray, NSDictionary, NSString, QSMatchAdItem, QSMatchItem;

__attribute__((visibility("hidden")))
@interface QSMoreMatchItem : QSModel
{
    _Bool _ifHasVideo;
    _Bool _ifHasPlayback;
    _Bool _ifHasHighlights;
    _Bool _hideSeparatorLine;
    _Bool _isChina;
    float _whRatio;
    NSString *_isPay;
    NSString *_liveId;
    NSString *_userNum;
    NSString *_matchDescEx;
    QSMatchItem *_matchInfo;
    QSMatchAdItem *_ad;
    NSDictionary *_jumpData;
    NSString *_matchPic;
    double _updateFrequency;
    NSString *_liveSource;
    NSArray *_medalInfo;
}

+ (Class)classForObjectInArrayProperty:(id)arg1;
@property(retain, nonatomic) NSArray *medalInfo; // @synthesize medalInfo=_medalInfo;
@property(nonatomic) _Bool isChina; // @synthesize isChina=_isChina;
@property(nonatomic) _Bool hideSeparatorLine; // @synthesize hideSeparatorLine=_hideSeparatorLine;
@property(nonatomic) _Bool ifHasHighlights; // @synthesize ifHasHighlights=_ifHasHighlights;
@property(nonatomic) _Bool ifHasPlayback; // @synthesize ifHasPlayback=_ifHasPlayback;
@property(retain, nonatomic) NSString *liveSource; // @synthesize liveSource=_liveSource;
@property(nonatomic) double updateFrequency; // @synthesize updateFrequency=_updateFrequency;
@property(nonatomic) float whRatio; // @synthesize whRatio=_whRatio;
@property(copy, nonatomic) NSString *matchPic; // @synthesize matchPic=_matchPic;
@property(nonatomic) _Bool ifHasVideo; // @synthesize ifHasVideo=_ifHasVideo;
@property(retain, nonatomic) NSDictionary *jumpData; // @synthesize jumpData=_jumpData;
@property(retain, nonatomic) QSMatchAdItem *ad; // @synthesize ad=_ad;
@property(retain, nonatomic) QSMatchItem *matchInfo; // @synthesize matchInfo=_matchInfo;
@property(retain, nonatomic) NSString *matchDescEx; // @synthesize matchDescEx=_matchDescEx;
@property(retain, nonatomic) NSString *userNum; // @synthesize userNum=_userNum;
@property(retain, nonatomic) NSString *liveId; // @synthesize liveId=_liveId;
@property(retain, nonatomic) NSString *isPay; // @synthesize isPay=_isPay;
- (void).cxx_destruct;
- (_Bool)manualSetValue:(id)arg1 forKey:(id)arg2;

@end

