//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "JceObjectV2.h"

@class NSString, QLJCETempletItem;

@interface QLJCETempletLine : JceObjectV2
{
    NSString *jcev2_p_0_r_lineId;
    NSString *jcev2_p_1_r_groupId;
    QLJCETempletItem *jcev2_p_2_r_item;
}

+ (id)jceType;
+ (void)initialize;
@property(retain, nonatomic, getter=jce_item, setter=setJce_item:) QLJCETempletItem *jcev2_p_2_r_item; // @synthesize jcev2_p_2_r_item;
@property(retain, nonatomic, getter=jce_groupId, setter=setJce_groupId:) NSString *jcev2_p_1_r_groupId; // @synthesize jcev2_p_1_r_groupId;
@property(retain, nonatomic, getter=jce_lineId, setter=setJce_lineId:) NSString *jcev2_p_0_r_lineId; // @synthesize jcev2_p_0_r_lineId;
- (void)dealloc;
- (id)init;

@end
