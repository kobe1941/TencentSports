//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class QSRoundMapFinnalRound, QSStructMatchNode, QSStructThirdMatchNode;

__attribute__((visibility("hidden")))
@interface QSStructFinnalMatchNode : NSObject
{
    QSStructMatchNode *_structMatchNode;
    QSRoundMapFinnalRound *_finnalMatchInfo;
    QSStructThirdMatchNode *_thirdMatch;
    struct CGRect _leftFinnalBadgeFrame;
    struct CGRect _rightFinnalBadgeFrame;
}

@property(retain, nonatomic) QSStructThirdMatchNode *thirdMatch; // @synthesize thirdMatch=_thirdMatch;
@property(retain, nonatomic) QSRoundMapFinnalRound *finnalMatchInfo; // @synthesize finnalMatchInfo=_finnalMatchInfo;
@property(retain, nonatomic) QSStructMatchNode *structMatchNode; // @synthesize structMatchNode=_structMatchNode;
@property(nonatomic) struct CGRect rightFinnalBadgeFrame; // @synthesize rightFinnalBadgeFrame=_rightFinnalBadgeFrame;
@property(nonatomic) struct CGRect leftFinnalBadgeFrame; // @synthesize leftFinnalBadgeFrame=_leftFinnalBadgeFrame;
- (void).cxx_destruct;

@end
