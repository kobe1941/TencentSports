//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface QSAIChatDogAnimationBaseModel : NSObject
{
    _Bool _isReadingFile;
    _Bool _allJsonReady;
    NSObject<OS_dispatch_queue> *_fileQueue;
    NSMutableArray *_pendingCompletions;
}

@property(nonatomic) _Bool allJsonReady; // @synthesize allJsonReady=_allJsonReady;
@property(retain, nonatomic) NSMutableArray *pendingCompletions; // @synthesize pendingCompletions=_pendingCompletions;
@property(nonatomic) _Bool isReadingFile; // @synthesize isReadingFile=_isReadingFile;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *fileQueue; // @synthesize fileQueue=_fileQueue;
- (void).cxx_destruct;
- (void)didFinishReadFile;
- (void)readJsonFileWithCompletion:(CDUnknownBlockType)arg1;
- (id)init;

@end

