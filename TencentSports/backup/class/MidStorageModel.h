//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"

@class NSString;

@interface MidStorageModel : NSObject <NSCopying>
{
    NSString *mid;
    NSString *midRandom;
    NSString *midGenerateTime;
    NSString *midUpdateTime;
    NSString *appId;
    NSString *appBizId;
    NSString *appBizIdRandom;
    NSString *appBizIdGenerateTime;
    NSString *appBizIdUpdateTime;
}

@property(retain, nonatomic) NSString *appBizIdUpdateTime; // @synthesize appBizIdUpdateTime;
@property(retain, nonatomic) NSString *midUpdateTime; // @synthesize midUpdateTime;
@property(retain, nonatomic) NSString *appBizIdGenerateTime; // @synthesize appBizIdGenerateTime;
@property(retain, nonatomic) NSString *appBizIdRandom; // @synthesize appBizIdRandom;
@property(retain, nonatomic) NSString *appBizId; // @synthesize appBizId;
@property(retain, nonatomic) NSString *appId; // @synthesize appId;
@property(retain, nonatomic) NSString *midGenerateTime; // @synthesize midGenerateTime;
@property(retain, nonatomic) NSString *mid; // @synthesize mid;
@property(retain, nonatomic) NSString *midRandom; // @synthesize midRandom;
- (void).cxx_destruct;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)init;

@end

