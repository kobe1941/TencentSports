//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "QSModel.h"

@class NSArray, NSString, QSComCircleRankItem, QSComCircleRankListIconsItem;

__attribute__((visibility("hidden")))
@interface QSComCircleRankListItem : QSModel
{
    _Bool _isFollowed;
    QSComCircleRankListIconsItem *_icons;
    NSString *_bulletin;
    long long _month;
    QSComCircleRankItem *_myRank;
    NSArray *_list;
}

+ (Class)classForObjectInArrayProperty:(id)arg1;
@property(retain, nonatomic) NSArray *list; // @synthesize list=_list;
@property(nonatomic) _Bool isFollowed; // @synthesize isFollowed=_isFollowed;
@property(retain, nonatomic) QSComCircleRankItem *myRank; // @synthesize myRank=_myRank;
@property(nonatomic) long long month; // @synthesize month=_month;
@property(retain, nonatomic) NSString *bulletin; // @synthesize bulletin=_bulletin;
@property(retain, nonatomic) QSComCircleRankListIconsItem *icons; // @synthesize icons=_icons;
- (void).cxx_destruct;

@end

