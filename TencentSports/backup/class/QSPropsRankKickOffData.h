//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "QSSportsHttpData.h"

@class NSString;

__attribute__((visibility("hidden")))
@interface QSPropsRankKickOffData : QSSportsHttpData
{
    NSString *_mid;
    long long _rankType;
    NSString *_propsid;
    NSString *_buyNum;
    NSString *_userId;
}

+ (Class)modelClass;
+ (long long)modelType;
@property(copy, nonatomic) NSString *userId; // @synthesize userId=_userId;
@property(copy, nonatomic) NSString *buyNum; // @synthesize buyNum=_buyNum;
@property(copy, nonatomic) NSString *propsid; // @synthesize propsid=_propsid;
@property(nonatomic) long long rankType; // @synthesize rankType=_rankType;
@property(copy, nonatomic) NSString *mid; // @synthesize mid=_mid;
- (void).cxx_destruct;
- (id)httpURLComponents;

@end

