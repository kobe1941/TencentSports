//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "JceObjectV2.h"

@class NSString;

@interface QLJCESTCheckLoginResponse : JceObjectV2
{
    unsigned short jcev2_p_0_r_wRetCode;
    NSString *jcev2_p_1_o_strErrMsg;
    long long jcev2_p_2_o_ddwUserid;
    long long jcev2_p_3_o_ddwUin;
    NSString *jcev2_p_4_o_strOpenid;
}

+ (id)jceType;
+ (void)initialize;
@property(retain, nonatomic, getter=jce_strOpenid, setter=setJce_strOpenid:) NSString *jcev2_p_4_o_strOpenid; // @synthesize jcev2_p_4_o_strOpenid;
@property(nonatomic, getter=jce_ddwUin, setter=setJce_ddwUin:) long long jcev2_p_3_o_ddwUin; // @synthesize jcev2_p_3_o_ddwUin;
@property(nonatomic, getter=jce_ddwUserid, setter=setJce_ddwUserid:) long long jcev2_p_2_o_ddwUserid; // @synthesize jcev2_p_2_o_ddwUserid;
@property(retain, nonatomic, getter=jce_strErrMsg, setter=setJce_strErrMsg:) NSString *jcev2_p_1_o_strErrMsg; // @synthesize jcev2_p_1_o_strErrMsg;
@property(nonatomic, getter=jce_wRetCode, setter=setJce_wRetCode:) unsigned short jcev2_p_0_r_wRetCode; // @synthesize jcev2_p_0_r_wRetCode;
- (void)dealloc;
- (id)init;

@end

