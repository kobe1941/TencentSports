//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, TADVideoInfo;

@interface TADDownloadTask : NSObject
{
    _Bool _isDone;
    _Bool _isCanceled;
    NSString *_taskId;
    NSString *_url;
    NSString *_uniqueUrlKey;
    unsigned long long _completedLength;
    id _delegate;
    NSString *_downlaodDestinationPath;
    NSString *_tmpDownlaodDestinationPath;
    NSString *_md5;
    TADVideoInfo *_video;
    struct _NSRange _range;
}

+ (id)createTaskWithVideo:(id)arg1;
@property(retain, nonatomic) TADVideoInfo *video; // @synthesize video=_video;
@property(retain, nonatomic) NSString *md5; // @synthesize md5=_md5;
@property(retain, nonatomic) NSString *tmpDownlaodDestinationPath; // @synthesize tmpDownlaodDestinationPath=_tmpDownlaodDestinationPath;
@property(retain, nonatomic) NSString *downlaodDestinationPath; // @synthesize downlaodDestinationPath=_downlaodDestinationPath;
@property __weak id delegate; // @synthesize delegate=_delegate;
@property _Bool isCanceled; // @synthesize isCanceled=_isCanceled;
@property _Bool isDone; // @synthesize isDone=_isDone;
@property(nonatomic) unsigned long long completedLength; // @synthesize completedLength=_completedLength;
@property(nonatomic) struct _NSRange range; // @synthesize range=_range;
@property(retain, nonatomic) NSString *uniqueUrlKey; // @synthesize uniqueUrlKey=_uniqueUrlKey;
@property(retain, nonatomic) NSString *url; // @synthesize url=_url;
@property(retain, nonatomic) NSString *taskId; // @synthesize taskId=_taskId;
- (void).cxx_destruct;
- (id)description;
- (void)cancel;
- (void)execute;
- (void)dealloc;
- (id)init;

@end

