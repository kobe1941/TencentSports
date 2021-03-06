//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"

@class NSArray, NSRecursiveLock, QSLinkedNode;
@protocol QSLinkedListDelegate;

@interface QSLinkedList : NSObject <NSCopying>
{
    _Bool _accessOrder;
    id <QSLinkedListDelegate> _delegate;
    QSLinkedNode *_firstNode;
    QSLinkedNode *_lastNode;
    void *_identifier;
    NSRecursiveLock *_lock;
}

+ (id)weakedLinkedList;
+ (id)weakedLinkedListWithObject:(id)arg1;
+ (id)weakedLinkedListWithArray:(id)arg1;
+ (id)linkedList;
+ (id)linkedListWithObject:(id)arg1;
+ (id)linkedListWithArray:(id)arg1;
@property(retain, nonatomic) NSRecursiveLock *lock; // @synthesize lock=_lock;
@property(nonatomic) void *identifier; // @synthesize identifier=_identifier;
@property(nonatomic) _Bool accessOrder; // @synthesize accessOrder=_accessOrder;
@property(retain, nonatomic) QSLinkedNode *lastNode; // @synthesize lastNode=_lastNode;
@property(retain, nonatomic) QSLinkedNode *firstNode; // @synthesize firstNode=_firstNode;
@property(nonatomic) __weak id <QSLinkedListDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)minusLinkedList:(id)arg1;
- (void)unionLinkedList:(id)arg1;
- (void)intersectLinkedList:(id)arg1;
- (void)remove:(id)arg1;
- (void)insertAtLast:(id)arg1;
- (void)insertAtFirst:(id)arg1;
- (void)insert:(id)arg1 toObject:(id)arg2;
- (id)linkedNodeWithObject:(id)arg1;
- (void)clear;
- (void)removeNode:(id)arg1;
- (void)willremoveNode:(id)arg1;
- (void)insertNodeAtFirst:(id)arg1;
- (void)insertNodeAtLast:(id)arg1;
- (void)insertNode:(id)arg1 toNode:(id)arg2;
- (void)enumerateFromObject:(id)arg1 withOptions:(unsigned long long)arg2 usingBlock:(CDUnknownBlockType)arg3;
- (void)enumerateObjectsWithOptions:(unsigned long long)arg1 usingBlock:(CDUnknownBlockType)arg2;
- (id)nextObjectFromObject:(id)arg1;
- (id)lastObject;
- (id)firstObject;
- (_Bool)hasObject:(id)arg1;
- (id)nodeFromObject:(id)arg1;
- (_Bool)isEmpty;
- (void)setAccessOrder;
- (id)init;
- (id)description;
@property(readonly, copy) NSArray *allObjects;
- (void)dealloc;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end

