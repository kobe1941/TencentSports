//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "ProcessCallback-Protocol.h"
#import "WloginSelfCallBackProcotol-Protocol.h"

@class MemSig, NSData, NSMutableDictionary, NSString, ProcessLogReport, WloginCustomParam, WloginProtocol, WtloginCustomDataForV2;

@interface UserLoginProcess : NSObject <WloginSelfCallBackProcotol, ProcessCallback>
{
    NSString *tmpUserAccount;
    _Bool hasNewTGTGT;
    MemSig *tmpTGTGT;
    NSData *tmpNoPicSig;
    id tmpUserPasswd;
    unsigned int dwTmpBitmap;
    unsigned int tmpflag;
    unsigned int dwTmpAppid;
    unsigned int dwTmpSubAppid;
    unsigned int dwTmpOpenAppid;
    unsigned int dwTmpByAppid;
    MemSig *tmpD2;
    MemSig *tmpTGT;
    MemSig *tmpNewST;
    id sdkDelegate;
    int iLoginState;
    int iInProcess;
    WloginProtocol *wloginProtocol;
    id theDelegate;
    short nowRst;
    struct timeval nowStartTime;
    NSMutableDictionary *nowLoginDic;
    struct timeval nextStartTime;
    NSMutableDictionary *nextLoginDic;
    ProcessLogReport *processLog;
    unsigned int dwProcessIndex;
    _Bool isInUse;
    WtloginCustomDataForV2 *customUserData;
    id retryPara;
    id retryPara2;
    id retryPara3;
    BOOL cRetryFlag;
    unsigned int isEcdhBack;
    NSData *ecdhBackSig;
    unsigned short retryTimes;
    int nowCltFunction;
    _Bool bNewSTFlag;
    NSMutableDictionary *retryHost;
    WloginCustomParam *customParam;
    NSString *sPtInputAccount;
}

@property(retain) NSString *sPtInputAccount; // @synthesize sPtInputAccount;
@property(retain) WloginCustomParam *customParam; // @synthesize customParam;
@property(retain, nonatomic) NSMutableDictionary *retryHost; // @synthesize retryHost;
@property _Bool bNewSTFlag; // @synthesize bNewSTFlag;
@property(readonly) NSData *ecdhBackSig; // @synthesize ecdhBackSig;
@property unsigned int isEcdhBack; // @synthesize isEcdhBack;
@property(retain) WtloginCustomDataForV2 *customUserData; // @synthesize customUserData;
@property(readonly) unsigned int dwProcessIndex; // @synthesize dwProcessIndex;
@property _Bool isInUse; // @synthesize isInUse;
@property(readonly) WloginProtocol *wloginProtocol; // @synthesize wloginProtocol;
@property unsigned int dwTmpByAppid; // @synthesize dwTmpByAppid;
@property unsigned int dwTmpOpenAppid; // @synthesize dwTmpOpenAppid;
@property unsigned int dwTmpSubAppid; // @synthesize dwTmpSubAppid;
@property unsigned int dwTmpAppid; // @synthesize dwTmpAppid;
@property unsigned int tmpflag; // @synthesize tmpflag;
@property unsigned int dwTmpBitmap; // @synthesize dwTmpBitmap;
@property(copy) MemSig *tmpNewST; // @synthesize tmpNewST;
@property(retain) MemSig *tmpTGT; // @synthesize tmpTGT;
@property(retain) MemSig *tmpD2; // @synthesize tmpD2;
@property(retain) id tmpUserPasswd; // @synthesize tmpUserPasswd;
@property(retain) MemSig *tmpTGTGT; // @synthesize tmpTGTGT;
@property(retain) NSString *tmpUserAccount; // @synthesize tmpUserAccount;
@property(retain) NSData *tmpNoPicSig; // @synthesize tmpNoPicSig;
@property _Bool hasNewTGTGT; // @synthesize hasNewTGTGT;
@property BOOL cRetryFlag; // @synthesize cRetryFlag;
@property int iInProcess; // @synthesize iInProcess;
@property int iLoginState; // @synthesize iLoginState;
@property id sdkDelegate; // @synthesize sdkDelegate;
- (int)checkPtSig;
- (int)negotiateSecGUID;
- (int)refreshSmsVerifyLoginCode;
- (int)checkSmsVerifyLoginCode;
- (int)checkSmsVerifyLoginAccount;
- (int)uploadLog:(id)arg1;
- (void)resetEcdhBackSig;
- (void)setEcdhBackSig:(id)arg1;
- (void)reportLoginInfoWithSdk:(id)arg1;
- (void)networkInfo:(CDStruct_7a5a57b9 *)arg1;
- (void)protocolSetPwdFlag:(id)arg1 andPwdFlag:(BOOL)arg2;
- (void)protocolInputSmsCodeBySmsVerifyLogin:(id)arg1;
- (void)protocolSmsCodeError:(id)arg1;
- (void)protocolInputSmsCode:(id)arg1 andMbPhone:(id)arg2;
- (void)caculateChallenge:(id)arg1;
- (void)protocolShowPicture:(id)arg1 picData:(id)arg2 wording:(id)arg3;
- (void)protocolLoginError:(id)arg1 result:(int)arg2 withErrInfo:(id)arg3;
- (void)protocolLoginFailed:(id)arg1 result:(int)arg2 withErrInfo:(id)arg3;
- (void)protocolNegotiateSecGUID:(id)arg1;
- (void)protocolVerifyPwdResult:(id)arg1 result:(int)arg2 withErrInfo:(id)arg3;
- (void)protocolLoginSuccessSig:(id)arg1 sig:(id)arg2 andBaseInfo:(id)arg3 andPasswdSig:(id)arg4;
- (id)reslutSigTlvList;
- (void)setOtherAppidList:(id)arg1 andBitmap:(unsigned int)arg2;
- (void)setOtherAppidList:(unsigned int *)arg1 andOtherAppidNum:(unsigned int)arg2 andBitmap:(unsigned int)arg3;
- (id)sigTlvDictByTag:(unsigned short)arg1;
- (id)basicTlvByTag:(unsigned short)arg1;
- (_Bool)addTransTlv:(id)arg1;
- (_Bool)addBasicTlv:(id)arg1;
- (_Bool)genTGTGTbyPasswd:(const char *)arg1 andUin:(unsigned long long)arg2 andFlag:(int)arg3 outTGTGT:(id)arg4 andSigSrc:(unsigned int)arg5 andMUin:(unsigned long long)arg6 andName:(id)arg7;
- (_Bool)genTGTGTbyPasswd:(const char *)arg1 andUin:(unsigned long long)arg2 andFlag:(int)arg3 outTGTGT:(id)arg4 andSigSrc:(unsigned int)arg5 andMUin:(unsigned long long)arg6;
- (void)disconnect;
- (int)connectToRemortServer;
- (unsigned int)pkgHeadUin;
- (void)setPkgNewSTKey:(id)arg1 andAppid:(unsigned int)arg2;
- (_Bool)canUseNewST;
- (void)setNewSTFlag:(_Bool)arg1;
- (void)setSrcAppid:(unsigned int)arg1 andSrcSubAppid:(unsigned int)arg2 andDstAppid:(unsigned int)arg3 andDstSubAppid:(unsigned int)arg4;
- (void)setPkgHeadUin:(unsigned int)arg1;
- (_Bool)setServerIp:(id)arg1 andPort:(unsigned short)arg2;
- (int)quickLogin:(id)arg1 withNoPicSig:(id)arg2;
- (int)exchangeSig:(id)arg1 byD2:(id)arg2;
- (int)exchangeSig:(id)arg1 withNoPicSig:(id)arg2;
- (int)exchangeSig:(id)arg1;
- (int)nameToUin;
- (int)refreshPic;
- (int)checkChallenge:(unsigned int)arg1;
- (int)refreshSmsCode;
- (int)checkSmsCode;
- (int)checkPic;
- (int)loginWithPasswd:(id)arg1 withNoPicSig:(id)arg2 andLoginFlag:(unsigned char)arg3;
- (_Bool)setProcessStep:(id)arg1 andResult:(short)arg2;
- (_Bool)setProcessEnd:(id)arg1 andResult:(short)arg2;
- (_Bool)setProcessBegin:(id)arg1 andType:(int)arg2 andName:(id)arg3;
- (_Bool)setProcessBegin:(id)arg1;
- (void)resetLoginProcess;
- (void)dealloc;
- (id)initWithClientVer:(unsigned short)arg1 andAppVer:(id)arg2 andPubNo:(unsigned int)arg3 andClientType:(unsigned int)arg4 andDelegate:(id)arg5;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

