//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "JceObjectV2.h"

@class NSArray, NSString, QLJCEAction, QLJCEPoster;

@interface QLJCEVideoItemData : JceObjectV2
{
    _Bool jcev2_p_5_o_isTrailor;
    _Bool jcev2_p_13_o_isIpLimit;
    _Bool jcev2_p_15_o_isHaveDM;
    _Bool jcev2_p_16_o_DMIsOpen;
    _Bool jcev2_p_22_o_isHaveInteract;
    _Bool jcev2_p_24_o_isNoStroeWatchedHistory;
    int jcev2_p_1_r_payStatus;
    int jcev2_p_3_o_skipStart;
    int jcev2_p_4_o_skipEnd;
    int jcev2_p_10_o_playCopyRight;
    int jcev2_p_12_o_downloadCopyRight;
    NSString *jcev2_p_0_r_vid;
    QLJCEPoster *jcev2_p_2_r_poster;
    QLJCEAction *jcev2_p_6_o_action;
    NSArray *jcev2_p_7_o_keyPointList__b0x9i_VONSNumber;
    NSString *jcev2_p_8_o_title;
    NSArray *jcev2_p_9_o_titleMarkLabelList__b0x9i_VOQLJCEMarkLabel;
    NSString *jcev2_p_11_o_webPlayUrl;
    NSString *jcev2_p_14_o_DMContentKey;
    NSString *jcev2_p_17_o_horizontalPosterImgUrl;
    NSString *jcev2_p_18_o_shareUrl;
    NSString *jcev2_p_19_o_shareTitle;
    NSString *jcev2_p_20_o_shareSubtitle;
    NSString *jcev2_p_21_o_shareImgUrl;
    NSString *jcev2_p_23_o_circleShareKey;
}

+ (id)jceType;
+ (void)initialize;
@property(nonatomic, getter=jce_isNoStroeWatchedHistory, setter=setJce_isNoStroeWatchedHistory:) _Bool jcev2_p_24_o_isNoStroeWatchedHistory; // @synthesize jcev2_p_24_o_isNoStroeWatchedHistory;
@property(retain, nonatomic, getter=jce_circleShareKey, setter=setJce_circleShareKey:) NSString *jcev2_p_23_o_circleShareKey; // @synthesize jcev2_p_23_o_circleShareKey;
@property(nonatomic, getter=jce_isHaveInteract, setter=setJce_isHaveInteract:) _Bool jcev2_p_22_o_isHaveInteract; // @synthesize jcev2_p_22_o_isHaveInteract;
@property(retain, nonatomic, getter=jce_shareImgUrl, setter=setJce_shareImgUrl:) NSString *jcev2_p_21_o_shareImgUrl; // @synthesize jcev2_p_21_o_shareImgUrl;
@property(retain, nonatomic, getter=jce_shareSubtitle, setter=setJce_shareSubtitle:) NSString *jcev2_p_20_o_shareSubtitle; // @synthesize jcev2_p_20_o_shareSubtitle;
@property(retain, nonatomic, getter=jce_shareTitle, setter=setJce_shareTitle:) NSString *jcev2_p_19_o_shareTitle; // @synthesize jcev2_p_19_o_shareTitle;
@property(retain, nonatomic, getter=jce_shareUrl, setter=setJce_shareUrl:) NSString *jcev2_p_18_o_shareUrl; // @synthesize jcev2_p_18_o_shareUrl;
@property(retain, nonatomic, getter=jce_horizontalPosterImgUrl, setter=setJce_horizontalPosterImgUrl:) NSString *jcev2_p_17_o_horizontalPosterImgUrl; // @synthesize jcev2_p_17_o_horizontalPosterImgUrl;
@property(nonatomic, getter=jce_DMIsOpen, setter=setJce_DMIsOpen:) _Bool jcev2_p_16_o_DMIsOpen; // @synthesize jcev2_p_16_o_DMIsOpen;
@property(nonatomic, getter=jce_isHaveDM, setter=setJce_isHaveDM:) _Bool jcev2_p_15_o_isHaveDM; // @synthesize jcev2_p_15_o_isHaveDM;
@property(retain, nonatomic, getter=jce_DMContentKey, setter=setJce_DMContentKey:) NSString *jcev2_p_14_o_DMContentKey; // @synthesize jcev2_p_14_o_DMContentKey;
@property(nonatomic, getter=jce_isIpLimit, setter=setJce_isIpLimit:) _Bool jcev2_p_13_o_isIpLimit; // @synthesize jcev2_p_13_o_isIpLimit;
@property(nonatomic, getter=jce_downloadCopyRight, setter=setJce_downloadCopyRight:) int jcev2_p_12_o_downloadCopyRight; // @synthesize jcev2_p_12_o_downloadCopyRight;
@property(retain, nonatomic, getter=jce_webPlayUrl, setter=setJce_webPlayUrl:) NSString *jcev2_p_11_o_webPlayUrl; // @synthesize jcev2_p_11_o_webPlayUrl;
@property(nonatomic, getter=jce_playCopyRight, setter=setJce_playCopyRight:) int jcev2_p_10_o_playCopyRight; // @synthesize jcev2_p_10_o_playCopyRight;
@property(retain, nonatomic, getter=jce_titleMarkLabelList, setter=setJce_titleMarkLabelList:) NSArray *jcev2_p_9_o_titleMarkLabelList__b0x9i_VOQLJCEMarkLabel; // @synthesize jcev2_p_9_o_titleMarkLabelList__b0x9i_VOQLJCEMarkLabel;
@property(retain, nonatomic, getter=jce_title, setter=setJce_title:) NSString *jcev2_p_8_o_title; // @synthesize jcev2_p_8_o_title;
@property(retain, nonatomic, getter=jce_keyPointList, setter=setJce_keyPointList:) NSArray *jcev2_p_7_o_keyPointList__b0x9i_VONSNumber; // @synthesize jcev2_p_7_o_keyPointList__b0x9i_VONSNumber;
@property(retain, nonatomic, getter=jce_action, setter=setJce_action:) QLJCEAction *jcev2_p_6_o_action; // @synthesize jcev2_p_6_o_action;
@property(nonatomic, getter=jce_isTrailor, setter=setJce_isTrailor:) _Bool jcev2_p_5_o_isTrailor; // @synthesize jcev2_p_5_o_isTrailor;
@property(nonatomic, getter=jce_skipEnd, setter=setJce_skipEnd:) int jcev2_p_4_o_skipEnd; // @synthesize jcev2_p_4_o_skipEnd;
@property(nonatomic, getter=jce_skipStart, setter=setJce_skipStart:) int jcev2_p_3_o_skipStart; // @synthesize jcev2_p_3_o_skipStart;
@property(retain, nonatomic, getter=jce_poster, setter=setJce_poster:) QLJCEPoster *jcev2_p_2_r_poster; // @synthesize jcev2_p_2_r_poster;
@property(nonatomic, getter=jce_payStatus, setter=setJce_payStatus:) int jcev2_p_1_r_payStatus; // @synthesize jcev2_p_1_r_payStatus;
@property(retain, nonatomic, getter=jce_vid, setter=setJce_vid:) NSString *jcev2_p_0_r_vid; // @synthesize jcev2_p_0_r_vid;
- (void)dealloc;
- (id)init;

@end

