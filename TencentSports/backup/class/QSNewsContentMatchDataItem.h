//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "QSNewsContentItem.h"

@class NSArray, QSNewsContentMoreMatch;

__attribute__((visibility("hidden")))
@interface QSNewsContentMatchDataItem : QSNewsContentItem
{
    NSArray *_matchInfoArray;
    QSNewsContentMoreMatch *_moreMatch;
}

@property(retain, nonatomic) QSNewsContentMoreMatch *moreMatch; // @synthesize moreMatch=_moreMatch;
@property(retain, nonatomic) NSArray *matchInfoArray; // @synthesize matchInfoArray=_matchInfoArray;
- (void).cxx_destruct;
- (void)manualResetWithInfo:(id)arg1;

@end
