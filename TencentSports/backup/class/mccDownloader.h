//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;

@interface mccDownloader : NSObject
{
    NSMutableDictionary *_downloadDict;
}

+ (id)getInstance;
@property(retain) NSMutableDictionary *downloadDict; // @synthesize downloadDict=_downloadDict;
- (void).cxx_destruct;
- (void)downloadFileData:(id)arg1 platform:(id)arg2 fileUrlString:(id)arg3 config:(id)arg4 responseInfo:(id)arg5;
- (id)init;

@end

