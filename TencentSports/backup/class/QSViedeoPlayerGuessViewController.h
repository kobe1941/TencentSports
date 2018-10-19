//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "QSViewController.h"

#import "QSBusEventConsumerDelegate-Protocol.h"
#import "QSInMatchGuessDataDelegate-Protocol.h"
#import "QSMatchGuessViewDelegate-Protocol.h"
#import "QSMediaHitTestViewDelegate-Protocol.h"

@class NSString, QSBusSystem, QSInMatchGuessData, QSMPSharedItem, QSMatchGuessJoinPreData, QSMatchGuessQuestion, QSMatchGuessView;

__attribute__((visibility("hidden")))
@interface QSViedeoPlayerGuessViewController : QSViewController <QSInMatchGuessDataDelegate, QSMatchGuessViewDelegate, QSMediaHitTestViewDelegate, QSBusEventConsumerDelegate>
{
    QSMPSharedItem *_sharedItem;
    QSBusSystem *_mediaPlayerBusSystem;
    QSInMatchGuessData *_inMatchGuessData;
    QSMatchGuessQuestion *_lastGuess;
    QSMatchGuessJoinPreData *_matchGuessJoinPreData;
    QSMatchGuessView *_matchGuessView;
}

@property(retain, nonatomic) QSMatchGuessView *matchGuessView; // @synthesize matchGuessView=_matchGuessView;
@property(retain, nonatomic) QSMatchGuessJoinPreData *matchGuessJoinPreData; // @synthesize matchGuessJoinPreData=_matchGuessJoinPreData;
@property(retain, nonatomic) QSMatchGuessQuestion *lastGuess; // @synthesize lastGuess=_lastGuess;
@property(retain, nonatomic) QSInMatchGuessData *inMatchGuessData; // @synthesize inMatchGuessData=_inMatchGuessData;
@property(retain, nonatomic) QSBusSystem *mediaPlayerBusSystem; // @synthesize mediaPlayerBusSystem=_mediaPlayerBusSystem;
@property(retain, nonatomic) QSMPSharedItem *sharedItem; // @synthesize sharedItem=_sharedItem;
- (void).cxx_destruct;
- (_Bool)shouldReceiveTouchEventsWithPoint:(struct CGPoint)arg1;
- (void)didConsumeEventFromBus:(id)arg1;
- (void)guessDidFinishWithError:(id)arg1;
- (_Bool)dataCanAutoUpdate:(id)arg1;
- (void)data:(id)arg1 didFinishFinallyWithError:(id)arg2;
- (void)data:(id)arg1 didFinishLoadWithError:(id)arg2;
- (void)dataWillStartLoad:(id)arg1;
- (void)revertToSmallScreenFromMatchGuessView:(id)arg1;
- (void)matchGuessView:(id)arg1 kbInsufficientWithNeededKBCount:(unsigned long long)arg2;
- (void)matchGuessViewDidDismiss:(id)arg1;
- (void)matchGuessView:(id)arg1 didSelectOptionAtIndex:(unsigned long long)arg2;
- (void)updateGuessInfo;
- (void)viewDidAppear:(_Bool)arg1;
- (void)didReceiveMemoryWarning;
- (void)viewDidLoad;
- (void)loadView;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
