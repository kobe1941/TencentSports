//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "QSHTTPRequestOperation.h"

@class NSString;

@interface QSDownloadRequestOperation : QSHTTPRequestOperation
{
    CDUnknownBlockType _downloadProgressBlock;
    NSString *_cachePath;
}

@property(retain, nonatomic) NSString *cachePath; // @synthesize cachePath=_cachePath;
@property(copy, nonatomic) CDUnknownBlockType downloadProgressBlock; // @synthesize downloadProgressBlock=_downloadProgressBlock;
- (void).cxx_destruct;
- (void)operationDidFinish;
- (void)didReceiveResponse;
- (void)mainOperation;

@end
