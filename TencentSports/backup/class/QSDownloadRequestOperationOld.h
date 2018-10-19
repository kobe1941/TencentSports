//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "QSHTTPRequestOperationOld.h"

#import "NSCoding-Protocol.h"
#import "NSCopying-Protocol.h"

@class NSOutputStream, NSString;

@interface QSDownloadRequestOperationOld : QSHTTPRequestOperationOld <NSCopying, NSCoding>
{
    NSOutputStream *_outputStream;
    NSString *_cachePath;
    CDUnknownBlockType _downloadProgressBlock;
}

@property(copy, nonatomic) CDUnknownBlockType downloadProgressBlock; // @synthesize downloadProgressBlock=_downloadProgressBlock;
@property(retain, nonatomic) NSString *cachePath; // @synthesize cachePath=_cachePath;
- (void)setOutputStream:(id)arg1;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)outputStream;

@end

