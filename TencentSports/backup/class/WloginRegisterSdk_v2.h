//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "WloginTranCallbackProtocol-Protocol.h"

@class NSString;

@interface WloginRegisterSdk_v2 : NSObject <WloginTranCallbackProtocol>
{
    unsigned short retryTimes;
    NSString *retryParams_account;
    int retryParams_type;
    NSString *retryParams_phoneNo;
    NSString *retryParams_appName;
    NSString *retryParams_appVer;
    NSString *retryParams_smsCode;
    NSString *retryParams_userPwd;
    unsigned int regryParams_dwSubAppid;
}

- (int)registerGetSmsVerifyLoginAccount:(unsigned int)arg1;
- (id)phoneNoForReg;
- (void)tranFailed:(int)arg1 withMsg:(id)arg2;
- (void)tranSuccessWithData:(id)arg1;
- (id)getRegAccountTlvDataBy:(int)arg1;
- (id)getSmsVerifyTlvDataBy:(int)arg1;
- (int)quickRegisterGetAccount:(id)arg1 andAppid:(unsigned int)arg2 andUserPwd:(id)arg3;
- (int)quickRegisterCheckAccount:(id)arg1 andAppid:(unsigned int)arg2;
- (_Bool)registerEmailHandleOpenURL:(id)arg1;
- (int)registerGetAccount:(id)arg1;
- (int)registerGetAccount:(id)arg1 andType:(int)arg2;
- (int)registerSubmitSmsCode:(id)arg1;
- (int)registerResendSms;
- (int)registerCheckUpSmsState:(id)arg1;
- (int)registerSubmitPhoneNo:(id)arg1 andAppName:(id)arg2 andAppVer:(id)arg3;
- (int)registerSubmitPhoneNo:(id)arg1 andAppName:(id)arg2 andAppVer:(id)arg3 withVerifyCodeSig:(id)arg4;
- (int)registerCheckAccount:(id)arg1 andType:(int)arg2;
- (_Bool)checkEmailFormat:(id)arg1;
- (void)resetRegProcess;
- (void)setRegSupportBitmap:(unsigned int)arg1;
- (void)setRegDevLockFlag:(unsigned int)arg1;
- (void)setUserNick:(id)arg1;
- (void)setAppUrl:(id)arg1;
- (void)setPicType:(int)arg1;
- (void)setCountry:(int)arg1 andLanguage:(int)arg2;
- (void)dealloc;
- (id)initWithRegWtloginSdk:(id)arg1 andCountry:(int)arg2 andLang:(int)arg3 andAppid:(unsigned int)arg4 andDelegate:(id)arg5;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
