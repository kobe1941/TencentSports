//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "JceObjectV2.h"

@class NSString, QLJCEAction;

@interface QLJCEONANoSearchHit : JceObjectV2
{
    NSString *jcev2_p_0_r_title;
    NSString *jcev2_p_1_r_details;
    QLJCEAction *jcev2_p_2_o_action;
}

+ (id)jceType;
+ (void)initialize;
@property(retain, nonatomic, getter=jce_action, setter=setJce_action:) QLJCEAction *jcev2_p_2_o_action; // @synthesize jcev2_p_2_o_action;
@property(retain, nonatomic, getter=jce_details, setter=setJce_details:) NSString *jcev2_p_1_r_details; // @synthesize jcev2_p_1_r_details;
@property(retain, nonatomic, getter=jce_title, setter=setJce_title:) NSString *jcev2_p_0_r_title; // @synthesize jcev2_p_0_r_title;
- (void)dealloc;
- (id)init;

@end

