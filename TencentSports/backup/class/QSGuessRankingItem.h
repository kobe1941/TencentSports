//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "QSModel.h"

@class NSString;

__attribute__((visibility("hidden")))
@interface QSGuessRankingItem : QSModel
{
    NSString *_userId;
    NSString *_nick;
    NSString *_icon;
    NSString *_winKB;
    NSString *_winCnt;
    NSString *_loseCnt;
    NSString *_winP;
    NSString *_serial;
    NSString *_isMy;
}

@property(retain, nonatomic) NSString *isMy; // @synthesize isMy=_isMy;
@property(retain, nonatomic) NSString *serial; // @synthesize serial=_serial;
@property(retain, nonatomic) NSString *winP; // @synthesize winP=_winP;
@property(retain, nonatomic) NSString *loseCnt; // @synthesize loseCnt=_loseCnt;
@property(retain, nonatomic) NSString *winCnt; // @synthesize winCnt=_winCnt;
@property(retain, nonatomic) NSString *winKB; // @synthesize winKB=_winKB;
@property(retain, nonatomic) NSString *icon; // @synthesize icon=_icon;
@property(retain, nonatomic) NSString *nick; // @synthesize nick=_nick;
@property(retain, nonatomic) NSString *userId; // @synthesize userId=_userId;
- (void).cxx_destruct;

@end

