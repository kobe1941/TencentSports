//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WloginTlv.h"

@interface QRCodeTlv_28 : WloginTlv
{
    unsigned int dwExpireTime;
    unsigned short wQueryTime;
}

@property(nonatomic) unsigned short wQueryTime; // @synthesize wQueryTime;
@property(nonatomic) unsigned int dwExpireTime; // @synthesize dwExpireTime;
- (void)dealloc;
- (int)decode:(char **)arg1 andBuffLen:(int *)arg2;

@end

