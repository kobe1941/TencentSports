//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface QSMatchGuessSignedInCardDisplayInfo : NSObject
{
    long long _matchType;
    NSString *_matchDesc;
    NSString *_title;
    NSString *_logo;
    NSString *_startTime;
    NSString *_cardBonus;
    NSString *_userRankString;
    NSString *_leftLogo;
    NSString *_rightLogo;
    NSString *_mid;
}

@property(retain, nonatomic) NSString *mid; // @synthesize mid=_mid;
@property(retain, nonatomic) NSString *rightLogo; // @synthesize rightLogo=_rightLogo;
@property(retain, nonatomic) NSString *leftLogo; // @synthesize leftLogo=_leftLogo;
@property(retain, nonatomic) NSString *userRankString; // @synthesize userRankString=_userRankString;
@property(retain, nonatomic) NSString *cardBonus; // @synthesize cardBonus=_cardBonus;
@property(retain, nonatomic) NSString *startTime; // @synthesize startTime=_startTime;
@property(retain, nonatomic) NSString *logo; // @synthesize logo=_logo;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
@property(retain, nonatomic) NSString *matchDesc; // @synthesize matchDesc=_matchDesc;
@property(nonatomic) long long matchType; // @synthesize matchType=_matchType;
- (void).cxx_destruct;

@end
