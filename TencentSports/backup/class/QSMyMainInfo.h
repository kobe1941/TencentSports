//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "QSModel.h"

@class NSArray, QSMyMainConfigInfo, QSMyMainEntranceItem, QSMyMainPopWindow, QSMyMainUserInfo;

__attribute__((visibility("hidden")))
@interface QSMyMainInfo : QSModel
{
    _Bool _dailyCheckPop;
    _Bool _beginnerRewardPop;
    QSMyMainUserInfo *_userInfo;
    QSMyMainEntranceItem *_vipEntrance;
    NSArray *_vEntrance;
    NSArray *_kEntrance;
    NSArray *_marquee;
    QSMyMainPopWindow *_popWindow;
    QSMyMainConfigInfo *_config;
}

+ (id)propertyNameFromParsedKey:(id)arg1;
+ (Class)classForObjectInArrayProperty:(id)arg1;
@property(nonatomic) _Bool beginnerRewardPop; // @synthesize beginnerRewardPop=_beginnerRewardPop;
@property(nonatomic) _Bool dailyCheckPop; // @synthesize dailyCheckPop=_dailyCheckPop;
@property(retain, nonatomic) QSMyMainConfigInfo *config; // @synthesize config=_config;
@property(retain, nonatomic) QSMyMainPopWindow *popWindow; // @synthesize popWindow=_popWindow;
@property(retain, nonatomic) NSArray *marquee; // @synthesize marquee=_marquee;
@property(retain, nonatomic) NSArray *kEntrance; // @synthesize kEntrance=_kEntrance;
@property(retain, nonatomic) NSArray *vEntrance; // @synthesize vEntrance=_vEntrance;
@property(retain, nonatomic) QSMyMainEntranceItem *vipEntrance; // @synthesize vipEntrance=_vipEntrance;
@property(retain, nonatomic) QSMyMainUserInfo *userInfo; // @synthesize userInfo=_userInfo;
- (void).cxx_destruct;

@end
