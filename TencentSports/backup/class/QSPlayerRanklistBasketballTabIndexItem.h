//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "QSModel.h"

@class NSString;

__attribute__((visibility("hidden")))
@interface QSPlayerRanklistBasketballTabIndexItem : QSModel
{
    _Bool _isChild;
    _Bool _hasMore;
    long long _tabType;
    NSString *_desc;
    NSString *_enDesc;
    long long _category;
}

@property(nonatomic) _Bool hasMore; // @synthesize hasMore=_hasMore;
@property(nonatomic) long long category; // @synthesize category=_category;
@property(nonatomic) _Bool isChild; // @synthesize isChild=_isChild;
@property(retain, nonatomic) NSString *enDesc; // @synthesize enDesc=_enDesc;
@property(retain, nonatomic) NSString *desc; // @synthesize desc=_desc;
@property(nonatomic) long long tabType; // @synthesize tabType=_tabType;
- (void).cxx_destruct;

@end

