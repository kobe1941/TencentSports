//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSData, NSString;

@interface WloginDevLocStatusInfo : NSObject
{
    unsigned int dwDevSetup;
    BOOL cAllowSet;
    NSString *sProtectInfo;
    NSString *sWarnTitle;
    NSString *sWarnMsg;
    unsigned short wWarnInfoType;
    NSString *sWarnInfo;
    NSString *sCountryCode;
    NSString *sPhoneNo;
    unsigned int dwMbPhoneStatus;
    unsigned short wAvailMsgCnt;
    unsigned short wTimeLimit;
    unsigned short wMbGuideType;
    NSString *sMbGuideMsg;
    unsigned short wMbGuideInfoType;
    NSString *sMbGuideInfo;
    NSData *sTransferInfo;
}

@property(retain) NSData *sTransferInfo; // @synthesize sTransferInfo;
@property(copy) NSString *sMbGuideInfo; // @synthesize sMbGuideInfo;
@property unsigned short wMbGuideInfoType; // @synthesize wMbGuideInfoType;
@property(copy) NSString *sMbGuideMsg; // @synthesize sMbGuideMsg;
@property unsigned short wMbGuideType; // @synthesize wMbGuideType;
@property unsigned short wTimeLimit; // @synthesize wTimeLimit;
@property unsigned short wAvailMsgCnt; // @synthesize wAvailMsgCnt;
@property unsigned int dwMbPhoneStatus; // @synthesize dwMbPhoneStatus;
@property(copy) NSString *sPhoneNo; // @synthesize sPhoneNo;
@property(copy) NSString *sCountryCode; // @synthesize sCountryCode;
@property(copy) NSString *sWarnInfo; // @synthesize sWarnInfo;
@property unsigned short wWarnInfoType; // @synthesize wWarnInfoType;
@property(copy) NSString *sWarnMsg; // @synthesize sWarnMsg;
@property(copy) NSString *sWarnTitle; // @synthesize sWarnTitle;
@property(copy) NSString *sProtectInfo; // @synthesize sProtectInfo;
@property BOOL cAllowSet; // @synthesize cAllowSet;
@property unsigned int dwDevSetup; // @synthesize dwDevSetup;
- (void)dealloc;

@end

