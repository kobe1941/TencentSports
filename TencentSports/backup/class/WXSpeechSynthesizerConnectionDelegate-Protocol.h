//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSData;

@protocol WXSpeechSynthesizerConnectionDelegate <NSObject>
- (void)connectionDidCancel;
- (void)connectionResultSpeechData:(NSData *)arg1 speechFormat:(int)arg2;
- (void)connectionErrorCode:(long long)arg1 andHttpStatus:(long long)arg2;
@end
