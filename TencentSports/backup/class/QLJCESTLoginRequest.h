//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "JceObjectV2.h"

@class NSArray, QLJCESTDevInfo;

@interface QLJCESTLoginRequest : JceObjectV2
{
    int jcev2_p_1_o_from;
    NSArray *jcev2_p_0_o_curLoginTokenList__b0x9i_VOQLJCECurLoginToken;
    QLJCESTDevInfo *jcev2_p_2_o_stDevInfo;
}

+ (id)jceType;
+ (void)initialize;
@property(retain, nonatomic, getter=jce_stDevInfo, setter=setJce_stDevInfo:) QLJCESTDevInfo *jcev2_p_2_o_stDevInfo; // @synthesize jcev2_p_2_o_stDevInfo;
@property(nonatomic, getter=jce_from, setter=setJce_from:) int jcev2_p_1_o_from; // @synthesize jcev2_p_1_o_from;
@property(retain, nonatomic, getter=jce_curLoginTokenList, setter=setJce_curLoginTokenList:) NSArray *jcev2_p_0_o_curLoginTokenList__b0x9i_VOQLJCECurLoginToken; // @synthesize jcev2_p_0_o_curLoginTokenList__b0x9i_VOQLJCECurLoginToken;
- (void)dealloc;
- (id)init;

@end

