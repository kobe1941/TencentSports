//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "QBJceObjectV2.h"

@class NSArray, NSString, QBWupUserBase;

__attribute__((visibility("hidden")))
@interface QBRouteIpListReq : QBJceObjectV2
{
    int jcev2_p_3_o_iSubType;
    QBWupUserBase *jcev2_p_0_r_stUB;
    NSArray *jcev2_p_1_r_vIPType__b0x9i_VONSNumber;
    NSString *jcev2_p_2_o_sTypeName;
    NSString *jcev2_p_4_o_sExtraInfo;
    NSString *jcev2_p_5_o_sMCCMNC;
}

+ (id)jceType;
+ (void)initialize;
@property(retain, nonatomic, getter=sMCCMNC, setter=setSMCCMNC:) NSString *jcev2_p_5_o_sMCCMNC; // @synthesize jcev2_p_5_o_sMCCMNC;
@property(retain, nonatomic, getter=sExtraInfo, setter=setSExtraInfo:) NSString *jcev2_p_4_o_sExtraInfo; // @synthesize jcev2_p_4_o_sExtraInfo;
@property(nonatomic, getter=iSubType, setter=setISubType:) int jcev2_p_3_o_iSubType; // @synthesize jcev2_p_3_o_iSubType;
@property(retain, nonatomic, getter=sTypeName, setter=setSTypeName:) NSString *jcev2_p_2_o_sTypeName; // @synthesize jcev2_p_2_o_sTypeName;
@property(retain, nonatomic, getter=vIPType, setter=setVIPType:) NSArray *jcev2_p_1_r_vIPType__b0x9i_VONSNumber; // @synthesize jcev2_p_1_r_vIPType__b0x9i_VONSNumber;
@property(retain, nonatomic, getter=stUB, setter=setStUB:) QBWupUserBase *jcev2_p_0_r_stUB; // @synthesize jcev2_p_0_r_stUB;
- (void).cxx_destruct;
- (id)init;

@end

