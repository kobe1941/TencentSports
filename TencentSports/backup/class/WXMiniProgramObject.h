//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSData, NSString;

@interface WXMiniProgramObject : NSObject
{
    _Bool _withShareTicket;
    NSString *webpageUrl;
    NSString *userName;
    NSString *path;
    NSData *hdImageData;
    unsigned long long _miniProgramType;
}

+ (id)object;
@property(nonatomic) unsigned long long miniProgramType; // @synthesize miniProgramType=_miniProgramType;
@property(nonatomic) _Bool withShareTicket; // @synthesize withShareTicket=_withShareTicket;
@property(retain, nonatomic) NSData *hdImageData; // @synthesize hdImageData;
@property(retain, nonatomic) NSString *path; // @synthesize path;
@property(retain, nonatomic) NSString *userName; // @synthesize userName;
@property(retain, nonatomic) NSString *webpageUrl; // @synthesize webpageUrl;
- (void)dealloc;
- (id)init;

@end

