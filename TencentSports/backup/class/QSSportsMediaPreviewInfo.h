//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "QSModel.h"

__attribute__((visibility("hidden")))
@interface QSSportsMediaPreviewInfo : QSModel
{
    double _playtime;
    double _totalPlaytime;
    long long _previewCnt;
    long long _resetPreviewCnt;
}

@property(nonatomic) long long resetPreviewCnt; // @synthesize resetPreviewCnt=_resetPreviewCnt;
@property(nonatomic) long long previewCnt; // @synthesize previewCnt=_previewCnt;
@property(nonatomic) double totalPlaytime; // @synthesize totalPlaytime=_totalPlaytime;
@property(nonatomic) double playtime; // @synthesize playtime=_playtime;

@end
