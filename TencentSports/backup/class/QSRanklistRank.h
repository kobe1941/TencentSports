//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "QSModel.h"

@class NSArray, NSString;

__attribute__((visibility("hidden")))
@interface QSRanklistRank : QSModel
{
    NSString *_title;
    NSArray *_head;
    NSArray *_rows;
}

+ (Class)classForObjectInArrayProperty:(id)arg1;
@property(readonly, nonatomic) NSArray *rows; // @synthesize rows=_rows;
@property(readonly, nonatomic) NSArray *head; // @synthesize head=_head;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
- (void).cxx_destruct;

@end

