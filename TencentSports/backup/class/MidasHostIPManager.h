//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class MidasIAPIpHelper, NSString;

@interface MidasHostIPManager : NSObject
{
    MidasIAPIpHelper *_ipHelper;
    NSString *_env;
    NSString *_offerId;
}

@property(copy, nonatomic) NSString *offerId; // @synthesize offerId=_offerId;
- (void).cxx_destruct;
- (id)getHttpPrefix;
- (id)getDomain:(id)arg1;
- (void)updateIpList;
- (id)getWholeUrl:(id)arg1 prefix:(id)arg2 useDomain:(_Bool)arg3;
- (id)getHeartBeatUrl;
- (id)getSecurityProcUrl:(_Bool)arg1;
- (id)getPayResultUrl:(_Bool)arg1;
- (id)getGetIpListUrl:(_Bool)arg1;
- (id)getLogUrl:(_Bool)arg1;
- (id)getStandalongUrl:(_Bool)arg1;
- (id)getMpInfoUrl:(_Bool)arg1;
- (id)getCheckUrl:(_Bool)arg1;
- (id)getIapProcUrl:(_Bool)arg1 withDomain:(_Bool)arg2;
- (id)getGetConfigUrl:(_Bool)arg1;
- (id)getGetKeyUrl:(_Bool)arg1;
- (void)clearErrCount:(id)arg1;
- (void)increaseErrCount:(id)arg1;
- (id)initWithLocale:(id)arg1 env:(id)arg2;

@end

