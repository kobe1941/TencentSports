//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "QSModel.h"

@class NSArray, NSDictionary, NSString;

__attribute__((visibility("hidden")))
@interface QSLiveMediaInfo : QSModel
{
    _Bool _isVideoPay;
    _Bool _isUserPayed;
    _Bool _hlsp2p;
    _Bool _live360;
    _Bool _bullet_flag;
    _Bool _queue_vip_jump;
    long long _iretcode;
    long long _iretdetailcode;
    NSString *_errinfo;
    NSString *_errtitle;
    NSString *_playurl;
    NSString *_currentFormat;
    NSArray *_formats;
    double _playtime;
    double _totalplaytime;
    long long _totalPreviewCount;
    long long _currentPreviewCount;
    long long _type;
    long long _watermark;
    double _serverTime;
    NSDictionary *_live360_info;
    NSString *_targetid;
    long long _queue_status;
    long long _queue_rank;
    NSString *_queue_session_key;
    NSString *_bakplayaddr;
    NSString *_cdn_name;
    NSDictionary *_clinfo;
    double _endplaytime;
}

+ (id)propertyNameFromParsedKey:(id)arg1;
@property(nonatomic) double endplaytime; // @synthesize endplaytime=_endplaytime;
@property(retain, nonatomic) NSDictionary *clinfo; // @synthesize clinfo=_clinfo;
@property(copy, nonatomic) NSString *cdn_name; // @synthesize cdn_name=_cdn_name;
@property(copy, nonatomic) NSString *bakplayaddr; // @synthesize bakplayaddr=_bakplayaddr;
@property(copy, nonatomic) NSString *queue_session_key; // @synthesize queue_session_key=_queue_session_key;
@property(nonatomic) _Bool queue_vip_jump; // @synthesize queue_vip_jump=_queue_vip_jump;
@property(nonatomic) long long queue_rank; // @synthesize queue_rank=_queue_rank;
@property(nonatomic) long long queue_status; // @synthesize queue_status=_queue_status;
@property(nonatomic) _Bool bullet_flag; // @synthesize bullet_flag=_bullet_flag;
@property(copy, nonatomic) NSString *targetid; // @synthesize targetid=_targetid;
@property(retain, nonatomic) NSDictionary *live360_info; // @synthesize live360_info=_live360_info;
@property(nonatomic) _Bool live360; // @synthesize live360=_live360;
@property(nonatomic) _Bool hlsp2p; // @synthesize hlsp2p=_hlsp2p;
@property(nonatomic) double serverTime; // @synthesize serverTime=_serverTime;
@property(nonatomic) long long watermark; // @synthesize watermark=_watermark;
@property(nonatomic) long long type; // @synthesize type=_type;
@property(nonatomic) long long currentPreviewCount; // @synthesize currentPreviewCount=_currentPreviewCount;
@property(nonatomic) long long totalPreviewCount; // @synthesize totalPreviewCount=_totalPreviewCount;
@property(nonatomic) double totalplaytime; // @synthesize totalplaytime=_totalplaytime;
@property(nonatomic) double playtime; // @synthesize playtime=_playtime;
@property(retain, nonatomic) NSArray *formats; // @synthesize formats=_formats;
@property(copy, nonatomic) NSString *currentFormat; // @synthesize currentFormat=_currentFormat;
@property(nonatomic) _Bool isUserPayed; // @synthesize isUserPayed=_isUserPayed;
@property(nonatomic) _Bool isVideoPay; // @synthesize isVideoPay=_isVideoPay;
@property(copy, nonatomic) NSString *playurl; // @synthesize playurl=_playurl;
@property(copy, nonatomic) NSString *errtitle; // @synthesize errtitle=_errtitle;
@property(copy, nonatomic) NSString *errinfo; // @synthesize errinfo=_errinfo;
@property(nonatomic) long long iretdetailcode; // @synthesize iretdetailcode=_iretdetailcode;
@property(nonatomic) long long iretcode; // @synthesize iretcode=_iretcode;
- (void).cxx_destruct;
- (id)formatWithInfo:(id)arg1;
- (_Bool)manualSetValue:(id)arg1 forKey:(id)arg2;

@end

