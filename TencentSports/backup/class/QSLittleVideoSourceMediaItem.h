//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "QSSourceMediaItem.h"

@class NSString;

__attribute__((visibility("hidden")))
@interface QSLittleVideoSourceMediaItem : QSSourceMediaItem
{
    _Bool _isPortrait;
    NSString *_vid;
    NSString *_cid;
    NSString *_url;
}

@property(nonatomic) _Bool isPortrait; // @synthesize isPortrait=_isPortrait;
@property(copy, nonatomic) NSString *url; // @synthesize url=_url;
@property(copy, nonatomic) NSString *cid; // @synthesize cid=_cid;
@property(copy, nonatomic) NSString *vid; // @synthesize vid=_vid;
- (void).cxx_destruct;
- (id)logDic;
- (_Bool)isEqual:(id)arg1;

@end
