//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "JceObjectV2.h"

@class NSArray, QLJCESTDevInfo;

@interface QLJCESTWxRefreshTokenRequest : JceObjectV2
{
    QLJCESTDevInfo *jcev2_p_1_o_stDevInfo;
    NSArray *jcev2_p_2_o_vecLoginToken__b0x9i_VOQLJCECurLoginToken;
}

+ (id)jceType;
+ (void)initialize;
@property(retain, nonatomic, getter=jce_vecLoginToken, setter=setJce_vecLoginToken:) NSArray *jcev2_p_2_o_vecLoginToken__b0x9i_VOQLJCECurLoginToken; // @synthesize jcev2_p_2_o_vecLoginToken__b0x9i_VOQLJCECurLoginToken;
@property(retain, nonatomic, getter=jce_stDevInfo, setter=setJce_stDevInfo:) QLJCESTDevInfo *jcev2_p_1_o_stDevInfo; // @synthesize jcev2_p_1_o_stDevInfo;
- (void)dealloc;
- (id)init;

@end

