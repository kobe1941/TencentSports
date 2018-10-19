//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class QSVideoPlayerProgressView;

@protocol QSVideoPlayerProgressViewDelegate <NSObject>

@optional
- (void)videoPlayerProgressView:(QSVideoPlayerProgressView *)arg1 didPressPannedLeaveMarkPositionBoundsAtCursorPositionPoint:(struct CGPoint)arg2 withMarkValue:(double)arg3 andMarkPositionPoint:(struct CGPoint)arg4;
- (void)videoPlayerProgressView:(QSVideoPlayerProgressView *)arg1 didPressPannedEnterMarkPositionBoundsAtCursorPositionPoint:(struct CGPoint)arg2 withMarkValue:(double)arg3 andMarkPositionPoint:(struct CGPoint)arg4;
- (void)videoPlayerProgressView:(QSVideoPlayerProgressView *)arg1 isPressPanningwithChangingCursorValue:(double)arg2 AtCursorPositionPoint:(struct CGPoint)arg3;
- (void)videoPlayerProgressView:(QSVideoPlayerProgressView *)arg1 didEndPressPannedAtCursorPositionPoint:(struct CGPoint)arg2 withCursorValue:(double)arg3 inMarkPositionBounds:(_Bool)arg4 withMarkValue:(double)arg5 andMarkPositionPoint:(struct CGPoint)arg6;
- (void)videoPlayerProgressView:(QSVideoPlayerProgressView *)arg1 didBeginPressPannedAtCursorPositionPoint:(struct CGPoint)arg2 withCursorValue:(double)arg3 inMarkPositionBounds:(_Bool)arg4 withMarkValue:(double)arg5 andMarkPositionPoint:(struct CGPoint)arg6;
- (void)videoPlayerProgressView:(QSVideoPlayerProgressView *)arg1 didBeginLongPressedButKeepLongPressedMovedAwayFromMarkPositionPoint:(struct CGPoint)arg2 withMarkValue:(double)arg3;
- (void)videoPlayerProgressView:(QSVideoPlayerProgressView *)arg1 didBeginLongPressedAndEndLongPressedAtMarkPositionPoint:(struct CGPoint)arg2 withMarkValue:(double)arg3;
- (void)videoPlayerProgressView:(QSVideoPlayerProgressView *)arg1 didBeginLongPressedAtMarkPositionPoint:(struct CGPoint)arg2 withMarkValue:(double)arg3;
- (void)videoPlayerProgressView:(QSVideoPlayerProgressView *)arg1 didTappedAtPoint:(struct CGPoint)arg2 withCursorValue:(double)arg3;
@end
