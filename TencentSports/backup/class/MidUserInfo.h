//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary, NSString;

@interface MidUserInfo : NSObject
{
    NSString *_qqNum;
    NSString *_wxNum;
    NSDictionary *_otherUserInfo;
}

@property(retain, nonatomic) NSDictionary *otherUserInfo; // @synthesize otherUserInfo=_otherUserInfo;
@property(copy, nonatomic) NSString *wxNum; // @synthesize wxNum=_wxNum;
@property(copy, nonatomic) NSString *qqNum; // @synthesize qqNum=_qqNum;
- (void).cxx_destruct;
- (id)description;
- (id)init;

@end

