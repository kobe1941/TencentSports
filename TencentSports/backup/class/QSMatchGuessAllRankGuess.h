//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "QSModel.h"

@class NSArray, NSDictionary;

__attribute__((visibility("hidden")))
@interface QSMatchGuessAllRankGuess : QSModel
{
    _Bool _more;
    NSArray *_joinList;
    NSDictionary *_jumpData;
}

+ (Class)classForObjectInArrayProperty:(id)arg1;
@property(retain, nonatomic) NSDictionary *jumpData; // @synthesize jumpData=_jumpData;
@property(retain, nonatomic) NSArray *joinList; // @synthesize joinList=_joinList;
@property(nonatomic) _Bool more; // @synthesize more=_more;
- (void).cxx_destruct;

@end

