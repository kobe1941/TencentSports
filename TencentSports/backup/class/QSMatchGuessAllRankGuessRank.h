//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "QSModel.h"

@class NSArray, NSDictionary, NSString, QSMatchGuessAllRankGuessRankItem;

__attribute__((visibility("hidden")))
@interface QSMatchGuessAllRankGuessRank : QSModel
{
    _Bool _more;
    NSArray *_rankList;
    QSMatchGuessAllRankGuessRankItem *_own;
    NSDictionary *_jumpData;
    NSString *_adLogo;
}

+ (Class)classForObjectInArrayProperty:(id)arg1;
@property(retain, nonatomic) NSString *adLogo; // @synthesize adLogo=_adLogo;
@property(retain, nonatomic) NSDictionary *jumpData; // @synthesize jumpData=_jumpData;
@property(retain, nonatomic) QSMatchGuessAllRankGuessRankItem *own; // @synthesize own=_own;
@property(retain, nonatomic) NSArray *rankList; // @synthesize rankList=_rankList;
@property(nonatomic) _Bool more; // @synthesize more=_more;
- (void).cxx_destruct;

@end
