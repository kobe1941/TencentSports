//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "QSModel.h"

@class NSDictionary, QSNewsListItem;

__attribute__((visibility("hidden")))
@interface QSNewsTopicNewsNewsItem : QSModel
{
    QSNewsListItem *_newsItem;
    NSDictionary *_jumpData;
}

@property(retain, nonatomic) NSDictionary *jumpData; // @synthesize jumpData=_jumpData;
@property(retain, nonatomic) QSNewsListItem *newsItem; // @synthesize newsItem=_newsItem;
- (void).cxx_destruct;

@end
