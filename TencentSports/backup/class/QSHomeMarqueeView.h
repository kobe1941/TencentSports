//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "QSBusEventConsumerDelegate-Protocol.h"

@class NSArray, NSDictionary, NSString, QSAutoBusEvent, QSHomeMarqueeContentView;
@protocol QSHomeMarqueeViewDelegate;

__attribute__((visibility("hidden")))
@interface QSHomeMarqueeView : UIView <QSBusEventConsumerDelegate>
{
    id <QSHomeMarqueeViewDelegate> _delegate;
    NSArray *_marqueeInfos;
    QSHomeMarqueeContentView *_currentMarqueeContentView;
    QSHomeMarqueeContentView *_nextMarqueeContentView;
    UIView *_bottomLine;
    long long _currentIndex;
    NSDictionary *_currentJumpData;
    NSDictionary *_nextJumpData;
    QSAutoBusEvent *_marqueeEvent;
}

@property(retain, nonatomic) QSAutoBusEvent *marqueeEvent; // @synthesize marqueeEvent=_marqueeEvent;
@property(retain, nonatomic) NSDictionary *nextJumpData; // @synthesize nextJumpData=_nextJumpData;
@property(retain, nonatomic) NSDictionary *currentJumpData; // @synthesize currentJumpData=_currentJumpData;
@property(nonatomic) long long currentIndex; // @synthesize currentIndex=_currentIndex;
@property(retain, nonatomic) UIView *bottomLine; // @synthesize bottomLine=_bottomLine;
@property(retain, nonatomic) QSHomeMarqueeContentView *nextMarqueeContentView; // @synthesize nextMarqueeContentView=_nextMarqueeContentView;
@property(retain, nonatomic) QSHomeMarqueeContentView *currentMarqueeContentView; // @synthesize currentMarqueeContentView=_currentMarqueeContentView;
@property(copy, nonatomic) NSArray *marqueeInfos; // @synthesize marqueeInfos=_marqueeInfos;
@property(nonatomic) __weak id <QSHomeMarqueeViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)didConsumeEventFromBus:(id)arg1;
- (void)stopTimer;
- (void)startTimer;
- (void)handleTap:(id)arg1;
- (void)didMoveToSuperview;
- (void)didMoveToWindow;
- (void)dealloc;
- (void)commonInit;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
