//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "QSModel.h"

@class NSString;

__attribute__((visibility("hidden")))
@interface QSCardModel : QSModel
{
    _Bool _isPay;
    NSString *_mid;
    NSString *_period;
    NSString *_clockInTime;
    NSString *_matchDesc;
    long long _matchType;
    NSString *_leftGoal;
    NSString *_leftColor;
    NSString *_leftName;
    NSString *_leftLogo;
    NSString *_rightGoal;
    NSString *_rightLogo;
    NSString *_rightName;
    NSString *_rightColor;
    NSString *_userRank;
    NSString *_startTime;
    NSString *_title;
    NSString *_logo;
}

@property(copy, nonatomic) NSString *logo; // @synthesize logo=_logo;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(copy, nonatomic) NSString *startTime; // @synthesize startTime=_startTime;
@property(copy, nonatomic) NSString *userRank; // @synthesize userRank=_userRank;
@property(nonatomic) _Bool isPay; // @synthesize isPay=_isPay;
@property(copy, nonatomic) NSString *rightColor; // @synthesize rightColor=_rightColor;
@property(copy, nonatomic) NSString *rightName; // @synthesize rightName=_rightName;
@property(copy, nonatomic) NSString *rightLogo; // @synthesize rightLogo=_rightLogo;
@property(copy, nonatomic) NSString *rightGoal; // @synthesize rightGoal=_rightGoal;
@property(copy, nonatomic) NSString *leftLogo; // @synthesize leftLogo=_leftLogo;
@property(copy, nonatomic) NSString *leftName; // @synthesize leftName=_leftName;
@property(copy, nonatomic) NSString *leftColor; // @synthesize leftColor=_leftColor;
@property(copy, nonatomic) NSString *leftGoal; // @synthesize leftGoal=_leftGoal;
@property(nonatomic) long long matchType; // @synthesize matchType=_matchType;
@property(copy, nonatomic) NSString *matchDesc; // @synthesize matchDesc=_matchDesc;
@property(copy, nonatomic) NSString *clockInTime; // @synthesize clockInTime=_clockInTime;
@property(copy, nonatomic) NSString *period; // @synthesize period=_period;
@property(copy, nonatomic) NSString *mid; // @synthesize mid=_mid;
- (void).cxx_destruct;
- (_Bool)isNonVsMatchType;

@end

