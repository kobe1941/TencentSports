//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "QSBaseHttpData.h"

@class NSString, QSMatchLivePropsList;

__attribute__((visibility("hidden")))
@interface QSMatchLivePropsListData : QSBaseHttpData
{
    _Bool _fullScreen;
    NSString *_mid;
    NSString *_version;
}

+ (long long)modelType;
+ (Class)modelClass;
@property(copy, nonatomic) NSString *version; // @synthesize version=_version;
@property(copy, nonatomic) NSString *mid; // @synthesize mid=_mid;
@property(nonatomic) _Bool fullScreen; // @synthesize fullScreen=_fullScreen;
- (void).cxx_destruct;
@property(readonly, nonatomic) QSMatchLivePropsList *propsList; // @dynamic propsList;
- (id)startRequestWithURLComponents:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)httpURLComponents;

@end

