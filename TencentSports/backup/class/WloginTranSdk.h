//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface WloginTranSdk : NSObject
{
    id transport;
    id tranDelegate;
    int iInTranProcess;
    id wloginSdkHelper;
}

- (void)tranSelfFailed:(id)arg1 reslut:(int)arg2 withMsg:(id)arg3;
- (void)tranSelfSuccess:(id)arg1 withData:(id)arg2;
- (int)sendToWtloginTranGTKeyST:(unsigned int)arg1 andRole:(unsigned int)arg2 andData:(id)arg3;
- (int)sendToWtloginTranECDH:(unsigned int)arg1 andRole:(unsigned int)arg2 andData:(id)arg3;
- (int)sendToWtloginTran:(unsigned int)arg1 andRole:(unsigned int)arg2 andData:(id)arg3;
- (int)sendToWtloginTran:(unsigned int)arg1 andRole:(unsigned int)arg2 andData:(id)arg3 andIsECDH:(unsigned char)arg4;
- (int)sendToWtloginTranGTKeyST:(id)arg1 andAppid:(unsigned int)arg2 andRole:(unsigned int)arg3 andData:(id)arg4;
- (int)sendToWtloginTranECDH:(id)arg1 andAppid:(unsigned int)arg2 andRole:(unsigned int)arg3 andData:(id)arg4;
- (int)sendToWtloginTran:(id)arg1 andAppid:(unsigned int)arg2 andRole:(unsigned int)arg3 andData:(id)arg4;
- (int)sendToWtloginTran:(id)arg1 andAppid:(unsigned int)arg2 andRole:(unsigned int)arg3 andData:(id)arg4 andIsECDH:(unsigned char)arg5;
- (void)setTranDelegate:(id)arg1;
- (_Bool)resetTranProcess;
- (int)returnTranValue:(unsigned char)arg1;
- (void)dealloc;
- (id)initWithWtloginSdk:(id)arg1 andDelegate:(id)arg2;

@end

