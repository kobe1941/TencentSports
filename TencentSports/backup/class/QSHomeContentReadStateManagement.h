//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray, NSMutableSet, NSTimer;

__attribute__((visibility("hidden")))
@interface QSHomeContentReadStateManagement : NSObject
{
    _Bool _changed;
    NSMutableArray *_readList;
    NSMutableSet *_readSet;
    NSTimer *_timer;
}

+ (id)sharedInstance;
@property(retain, nonatomic) NSTimer *timer; // @synthesize timer=_timer;
@property(nonatomic, getter=isChanged) _Bool changed; // @synthesize changed=_changed;
@property(retain, nonatomic) NSMutableSet *readSet; // @synthesize readSet=_readSet;
@property(retain, nonatomic) NSMutableArray *readList; // @synthesize readList=_readList;
- (void).cxx_destruct;
- (id)readStateFileDirectory;
- (id)readStateFilePath;
- (void)saveReadList;
- (void)enterBackground:(id)arg1;
- (void)readCheck:(id)arg1;
- (id)identityOfCellInfo:(id)arg1;
- (void)contentHasBeenRead:(id)arg1;
- (void)showItemHasBeenRead:(id)arg1;
- (void)topicItemHasBeenRead:(id)arg1;
- (void)newsListItemHasBeenRead:(id)arg1;
- (_Bool)hasCellInfoBeenRead:(id)arg1;
- (void)cellInfoHasBeenRead:(id)arg1;
- (void)dealloc;
- (id)init;

@end

