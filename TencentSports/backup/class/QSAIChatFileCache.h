//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "QSCleanCacheProtocol-Protocol.h"

@class NSMutableDictionary;

__attribute__((visibility("hidden")))
@interface QSAIChatFileCache : NSObject <QSCleanCacheProtocol>
{
    NSMutableDictionary *_httpInfo;
    NSMutableDictionary *_requests;
}

+ (void)cleanCache;
+ (id)sharedInstance;
@property(retain, nonatomic) NSMutableDictionary *requests; // @synthesize requests=_requests;
@property(retain, nonatomic) NSMutableDictionary *httpInfo; // @synthesize httpInfo=_httpInfo;
- (void).cxx_destruct;
- (void)stopGettingFile:(id)arg1 identifier:(id)arg2;
- (void)downloadFinishWithUrl:(id)arg1 success:(_Bool)arg2;
- (void)startDownloadFile:(id)arg1;
- (void)getFilePathWithURL:(id)arg1 requestConfigure:(id)arg2;
- (void)getFilePathWithURL:(id)arg1 identifier:(id)arg2 startDownloadBlock:(CDUnknownBlockType)arg3 completion:(CDUnknownBlockType)arg4;
- (void)getFilePathWithURL:(id)arg1 identifier:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (id)init;

@end

