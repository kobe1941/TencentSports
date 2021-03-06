//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class QSAIChatActionManager, QSAIChatDogBaseAnimationAction, QSAIChatDogGroupAnimationAction;

@protocol QSAIChatActionManagerDelegate <NSObject>
- (void)actionManagerWantsToRunBoredAnimation:(QSAIChatActionManager *)arg1;
- (void)actionManager:(QSAIChatActionManager *)arg1 didChageFromState:(long long)arg2 toState:(long long)arg3;

@optional
- (QSAIChatDogGroupAnimationAction *)actionManagerWantsNextGroupAction:(QSAIChatActionManager *)arg1;
- (void)actionManager:(QSAIChatActionManager *)arg1 didRunAction:(QSAIChatDogBaseAnimationAction *)arg2;
- (void)actionManager:(QSAIChatActionManager *)arg1 willRunAction:(QSAIChatDogBaseAnimationAction *)arg2;
@end

