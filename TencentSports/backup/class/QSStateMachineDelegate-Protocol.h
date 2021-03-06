//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class QSStateMachine, QSStateMachineEvent;

@protocol QSStateMachineDelegate <NSObject>

@optional
- (void)stateMachine:(QSStateMachine *)arg1 triggerEventFailed:(QSStateMachineEvent *)arg2;
- (void)stateMachine:(QSStateMachine *)arg1 enterStateFailed:(unsigned long long)arg2;
- (void)stateMachine:(QSStateMachine *)arg1 eventDidHappen:(QSStateMachineEvent *)arg2;
- (void)stateMachine:(QSStateMachine *)arg1 eventWillHappen:(QSStateMachineEvent *)arg2;
- (void)stateMachine:(QSStateMachine *)arg1 leaveState:(unsigned long long)arg2;
- (void)stateMachine:(QSStateMachine *)arg1 enterState:(unsigned long long)arg2;
@end

