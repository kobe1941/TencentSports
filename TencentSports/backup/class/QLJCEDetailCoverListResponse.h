//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "JceObjectV2.h"

@class NSArray, NSString;

@interface QLJCEDetailCoverListResponse : JceObjectV2
{
    _Bool jcev2_p_3_o_hasNextPage;
    int jcev2_p_0_r_errCode;
    NSString *jcev2_p_1_o_pageContext;
    NSArray *jcev2_p_2_o_coverList__b0x9i_VOQLJCECoverItemData;
}

+ (id)jceType;
+ (void)initialize;
@property(nonatomic, getter=jce_hasNextPage, setter=setJce_hasNextPage:) _Bool jcev2_p_3_o_hasNextPage; // @synthesize jcev2_p_3_o_hasNextPage;
@property(retain, nonatomic, getter=jce_coverList, setter=setJce_coverList:) NSArray *jcev2_p_2_o_coverList__b0x9i_VOQLJCECoverItemData; // @synthesize jcev2_p_2_o_coverList__b0x9i_VOQLJCECoverItemData;
@property(retain, nonatomic, getter=jce_pageContext, setter=setJce_pageContext:) NSString *jcev2_p_1_o_pageContext; // @synthesize jcev2_p_1_o_pageContext;
@property(nonatomic, getter=jce_errCode, setter=setJce_errCode:) int jcev2_p_0_r_errCode; // @synthesize jcev2_p_0_r_errCode;
- (void)dealloc;
- (id)init;

@end

