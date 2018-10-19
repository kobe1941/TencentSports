//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "QSModel.h"

@class NSArray, NSString, QSMatchDetailOlympicOrganisation;

__attribute__((visibility("hidden")))
@interface QSMatchDetailOlympicCompetitor : QSModel
{
    NSString *_competitorId;
    NSString *_type;
    NSString *_cnName;
    NSString *_enName;
    NSString *_logo;
    QSMatchDetailOlympicOrganisation *_organisation;
    NSArray *_athlete;
    NSString *_introUrl;
}

+ (id)propertyNameFromParsedKey:(id)arg1;
+ (Class)classForObjectInArrayProperty:(id)arg1;
@property(copy, nonatomic) NSString *introUrl; // @synthesize introUrl=_introUrl;
@property(retain, nonatomic) NSArray *athlete; // @synthesize athlete=_athlete;
@property(retain, nonatomic) QSMatchDetailOlympicOrganisation *organisation; // @synthesize organisation=_organisation;
@property(copy, nonatomic) NSString *logo; // @synthesize logo=_logo;
@property(copy, nonatomic) NSString *enName; // @synthesize enName=_enName;
@property(copy, nonatomic) NSString *cnName; // @synthesize cnName=_cnName;
@property(copy, nonatomic) NSString *type; // @synthesize type=_type;
@property(copy, nonatomic) NSString *competitorId; // @synthesize competitorId=_competitorId;
- (void).cxx_destruct;

@end

