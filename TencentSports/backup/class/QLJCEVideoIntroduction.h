//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "JceObjectV2.h"

@class NSArray, NSString, QLJCEPoster;

@interface QLJCEVideoIntroduction : JceObjectV2
{
    QLJCEPoster *jcev2_p_0_r_poster;
    NSString *jcev2_p_1_o_text;
    NSArray *jcev2_p_2_o_actorInfo__b0x9i_VOQLJCEActorList;
    NSArray *jcev2_p_3_o_lineLabel__b0x9i_VONSString;
}

+ (id)jceType;
+ (void)initialize;
@property(retain, nonatomic, getter=jce_lineLabel, setter=setJce_lineLabel:) NSArray *jcev2_p_3_o_lineLabel__b0x9i_VONSString; // @synthesize jcev2_p_3_o_lineLabel__b0x9i_VONSString;
@property(retain, nonatomic, getter=jce_actorInfo, setter=setJce_actorInfo:) NSArray *jcev2_p_2_o_actorInfo__b0x9i_VOQLJCEActorList; // @synthesize jcev2_p_2_o_actorInfo__b0x9i_VOQLJCEActorList;
@property(retain, nonatomic, getter=jce_text, setter=setJce_text:) NSString *jcev2_p_1_o_text; // @synthesize jcev2_p_1_o_text;
@property(retain, nonatomic, getter=jce_poster, setter=setJce_poster:) QLJCEPoster *jcev2_p_0_r_poster; // @synthesize jcev2_p_0_r_poster;
- (void)dealloc;
- (id)init;

@end

