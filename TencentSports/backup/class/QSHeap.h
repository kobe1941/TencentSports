//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "QSBinaryTree.h"

@interface QSHeap : QSBinaryTree
{
    CDUnknownBlockType _comparator;
    void *_identifier;
}

@property(nonatomic) void *identifier; // @synthesize identifier=_identifier;
@property(copy, nonatomic) CDUnknownBlockType comparator; // @synthesize comparator=_comparator;
- (void).cxx_destruct;
- (_Bool)containObject:(id)arg1;
- (void)valueOfObjectDidDecreased:(id)arg1;
- (void)valueOfObjectDidIncreased:(id)arg1;
- (void)valueOfNodeDidDecreased:(id)arg1;
- (void)valudOfNodeDidIncreased:(id)arg1;
- (void)deleteRootNode;
- (void)insertNode:(id)arg1;
- (id)popRootObject;
- (void)replaceObject:(id)arg1 toNewObject:(id)arg2;
- (void)insert:(id)arg1;
- (void)resetWithObject:(id)arg1;
- (id)init;

@end

