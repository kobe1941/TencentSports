//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "DevLockTlv_base.h"

@interface Tlv_0x6_SmsInfo : DevLockTlv_base
{
    unsigned short wAvailMsgCnt;
    unsigned short wTimeLimit;
}

@property unsigned short wTimeLimit; // @synthesize wTimeLimit;
@property unsigned short wAvailMsgCnt; // @synthesize wAvailMsgCnt;
- (void)dealloc;
- (int)decode:(char **)arg1 andBuffLen:(int *)arg2;

@end

