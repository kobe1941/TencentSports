//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "QSStatedData.h"

@class NSString, QSRoundVS;

__attribute__((visibility("hidden")))
@interface QSRoundVSData : QSStatedData
{
    NSString *_leftId;
    NSString *_rightId;
    NSString *_competitionId;
    QSRoundVS *_roundVS;
}

@property(retain, nonatomic) QSRoundVS *roundVS; // @synthesize roundVS=_roundVS;
@property(retain, nonatomic) NSString *competitionId; // @synthesize competitionId=_competitionId;
@property(retain, nonatomic) NSString *rightId; // @synthesize rightId=_rightId;
@property(retain, nonatomic) NSString *leftId; // @synthesize leftId=_leftId;
- (void).cxx_destruct;
- (void)resetWithResponseModel:(id)arg1;
- (id)httpURLComponents;
- (id)identifier;

@end

