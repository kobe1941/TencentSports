//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCoding-Protocol.h"
#import "QSCleanCacheProtocol-Protocol.h"

@class NSMutableArray, NSOperationQueue;
@protocol QSAIChatHistoryDataDelegate;

__attribute__((visibility("hidden")))
@interface QSAIChatHistoryData : NSObject <QSCleanCacheProtocol, NSCoding>
{
    _Bool _didFinishLoad;
    id <QSAIChatHistoryDataDelegate> _delegate;
    NSMutableArray *_allHistory;
    NSOperationQueue *_fileQueue;
}

+ (void)cleanCache;
+ (id)rootCachePath;
@property(retain, nonatomic) NSOperationQueue *fileQueue; // @synthesize fileQueue=_fileQueue;
@property(retain, nonatomic) NSMutableArray *allHistory; // @synthesize allHistory=_allHistory;
@property(nonatomic) _Bool didFinishLoad; // @synthesize didFinishLoad=_didFinishLoad;
@property(nonatomic) __weak id <QSAIChatHistoryDataDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (id)cachePath;
- (void)saveToFile;
- (void)readHistory;
- (void)addHistoryItem:(id)arg1;
- (id)itemAtIndex:(unsigned long long)arg1;
- (unsigned long long)historyCount;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)dealloc;
- (id)init;

@end

