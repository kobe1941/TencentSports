//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "JceObjectV2.h"

@class NSString;

@interface QLJCEPersonalizeVideoReportRequest : JceObjectV2
{
    BOOL jcev2_p_0_r_type;
    NSString *jcev2_p_1_r_id;
    NSString *jcev2_p_2_r_reportKey;
}

+ (id)jceType;
+ (void)initialize;
@property(retain, nonatomic, getter=jce_reportKey, setter=setJce_reportKey:) NSString *jcev2_p_2_r_reportKey; // @synthesize jcev2_p_2_r_reportKey;
@property(retain, nonatomic, getter=jce_id, setter=setJce_id:) NSString *jcev2_p_1_r_id; // @synthesize jcev2_p_1_r_id;
@property(nonatomic, getter=jce_type, setter=setJce_type:) BOOL jcev2_p_0_r_type; // @synthesize jcev2_p_0_r_type;
- (void)dealloc;
- (id)init;

@end

