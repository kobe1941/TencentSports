//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "QSModel.h"

@class NSArray, NSString, QSMatchDetailRelatedStatData;

__attribute__((visibility("hidden")))
@interface QSMatchDetailRelatedStat : QSModel
{
    _Bool _hasStatDetail;
    NSString *_text;
    NSString *_detailText;
    QSMatchDetailRelatedStatData *_data;
    NSArray *_vs;
    NSArray *_odds;
}

+ (Class)classForObjectInArrayProperty:(id)arg1;
@property(retain, nonatomic) NSArray *odds; // @synthesize odds=_odds;
@property(retain, nonatomic) NSArray *vs; // @synthesize vs=_vs;
@property(retain, nonatomic) QSMatchDetailRelatedStatData *data; // @synthesize data=_data;
@property(nonatomic) _Bool hasStatDetail; // @synthesize hasStatDetail=_hasStatDetail;
@property(retain, nonatomic) NSString *detailText; // @synthesize detailText=_detailText;
@property(retain, nonatomic) NSString *text; // @synthesize text=_text;
- (void).cxx_destruct;

@end

