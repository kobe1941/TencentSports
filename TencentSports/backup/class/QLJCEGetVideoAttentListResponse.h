//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "JceObjectV2.h"

@class NSArray;

@interface QLJCEGetVideoAttentListResponse : JceObjectV2
{
    int jcev2_p_0_r_errCode;
    int jcev2_p_2_o_updateFlag;
    int jcev2_p_3_o_total;
    long long jcev2_p_1_o_dataVersion;
    NSArray *jcev2_p_4_o_VideoAttentInfoList__b0x9i_VOQLJCEVideoAttentItem;
}

+ (id)jceType;
+ (void)initialize;
@property(retain, nonatomic, getter=jce_VideoAttentInfoList, setter=setJce_VideoAttentInfoList:) NSArray *jcev2_p_4_o_VideoAttentInfoList__b0x9i_VOQLJCEVideoAttentItem; // @synthesize jcev2_p_4_o_VideoAttentInfoList__b0x9i_VOQLJCEVideoAttentItem;
@property(nonatomic, getter=jce_total, setter=setJce_total:) int jcev2_p_3_o_total; // @synthesize jcev2_p_3_o_total;
@property(nonatomic, getter=jce_updateFlag, setter=setJce_updateFlag:) int jcev2_p_2_o_updateFlag; // @synthesize jcev2_p_2_o_updateFlag;
@property(nonatomic, getter=jce_dataVersion, setter=setJce_dataVersion:) long long jcev2_p_1_o_dataVersion; // @synthesize jcev2_p_1_o_dataVersion;
@property(nonatomic, getter=jce_errCode, setter=setJce_errCode:) int jcev2_p_0_r_errCode; // @synthesize jcev2_p_0_r_errCode;
- (void)dealloc;
- (id)init;

@end

