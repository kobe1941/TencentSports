//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "QSModel.h"

@class NSArray, NSString;

__attribute__((visibility("hidden")))
@interface QSMatchSummaryRelatedNews : QSModel
{
    NSString *_text;
    NSArray *_items;
    long long _topicPosition;
}

+ (Class)classForObjectInArrayProperty:(id)arg1;
+ (id)propertyNameFromParsedKey:(id)arg1;
@property(nonatomic) long long topicPosition; // @synthesize topicPosition=_topicPosition;
@property(retain, nonatomic) NSArray *items; // @synthesize items=_items;
@property(retain, nonatomic) NSString *text; // @synthesize text=_text;
- (void).cxx_destruct;

@end

