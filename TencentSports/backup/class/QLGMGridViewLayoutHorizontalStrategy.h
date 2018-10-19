//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "QLGMGridViewLayoutStrategyBase.h"

#import "QLGMGridViewLayoutStrategy-Protocol.h"

@class NSString;

@interface QLGMGridViewLayoutHorizontalStrategy : QLGMGridViewLayoutStrategyBase <QLGMGridViewLayoutStrategy>
{
    long long _numberOfItemsPerColumn;
}

+ (_Bool)requiresEnablingPaging;
@property(readonly, nonatomic) long long numberOfItemsPerColumn; // @synthesize numberOfItemsPerColumn=_numberOfItemsPerColumn;
- (struct _NSRange)rangeOfPositionsInBoundsFromOffset:(struct CGPoint)arg1;
- (long long)itemPositionFromLocation:(struct CGPoint)arg1;
- (struct CGPoint)originForItemAtPosition:(long long)arg1;
- (void)rebaseWithItemCount:(long long)arg1 insideOfBounds:(struct CGRect)arg2;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

