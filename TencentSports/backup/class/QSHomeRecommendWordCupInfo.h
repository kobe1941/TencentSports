//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "QSModel.h"

@class NSArray, QSHomeRecommendWordCupMatchInfo;

__attribute__((visibility("hidden")))
@interface QSHomeRecommendWordCupInfo : QSModel
{
    NSArray *_menu1;
    NSArray *_menu2;
    QSHomeRecommendWordCupMatchInfo *_matchDays;
}

+ (Class)classForObjectInArrayProperty:(id)arg1;
@property(retain, nonatomic) QSHomeRecommendWordCupMatchInfo *matchDays; // @synthesize matchDays=_matchDays;
@property(retain, nonatomic) NSArray *menu2; // @synthesize menu2=_menu2;
@property(retain, nonatomic) NSArray *menu1; // @synthesize menu1=_menu1;
- (void).cxx_destruct;

@end

