//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "QSModel.h"

@class NSArray, NSString;

__attribute__((visibility("hidden")))
@interface QSWorldCupTeamModel : QSModel
{
    NSString *_area;
    NSString *_logo;
    NSArray *_teamList;
}

+ (Class)classForObjectInArrayProperty:(id)arg1;
@property(retain, nonatomic) NSArray *teamList; // @synthesize teamList=_teamList;
@property(copy, nonatomic) NSString *logo; // @synthesize logo=_logo;
@property(copy, nonatomic) NSString *area; // @synthesize area=_area;
- (void).cxx_destruct;

@end

