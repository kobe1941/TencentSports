//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIControl.h>

#import "UITextFieldDelegate-Protocol.h"

@class NSString, UIColor, UIFont, UITextField;

__attribute__((visibility("hidden")))
@interface QSAddSubtractCounter : UIControl <UITextFieldDelegate>
{
    _Bool _canInputEdit;
    long long _minCount;
    long long _maxCount;
    long long _rate;
    long long _currentState;
    double _borderWidth;
    UIColor *_tintColor;
    UIColor *_highlightedColor;
    UIColor *_textColor;
    UIFont *_textFont;
    UITextField *_textField;
    long long _disableState;
}

@property(nonatomic) long long disableState; // @synthesize disableState=_disableState;
@property(retain, nonatomic) UITextField *textField; // @synthesize textField=_textField;
@property(nonatomic) _Bool canInputEdit; // @synthesize canInputEdit=_canInputEdit;
@property(retain, nonatomic) UIFont *textFont; // @synthesize textFont=_textFont;
@property(retain, nonatomic) UIColor *textColor; // @synthesize textColor=_textColor;
@property(retain, nonatomic) UIColor *highlightedColor; // @synthesize highlightedColor=_highlightedColor;
@property(retain, nonatomic) UIColor *tintColor; // @synthesize tintColor=_tintColor;
@property(nonatomic) double borderWidth; // @synthesize borderWidth=_borderWidth;
@property(nonatomic) long long currentState; // @synthesize currentState=_currentState;
@property(nonatomic) long long rate; // @synthesize rate=_rate;
@property(nonatomic) long long maxCount; // @synthesize maxCount=_maxCount;
@property(nonatomic) long long minCount; // @synthesize minCount=_minCount;
- (void).cxx_destruct;
- (void)drawRect:(struct CGRect)arg1;
@property(nonatomic) long long count; // @dynamic count;
- (void)cancelTrackingWithEvent:(id)arg1;
- (void)endTrackingWithTouch:(id)arg1 withEvent:(id)arg2;
- (_Bool)continueTrackingWithTouch:(id)arg1 withEvent:(id)arg2;
- (_Bool)beginTrackingWithTouch:(id)arg1 withEvent:(id)arg2;
- (void)addTarget:(id)arg1 action:(SEL)arg2 forControlEvents:(unsigned long long)arg3;
- (_Bool)resignFirstResponder;
- (_Bool)canBecomeFirstResponder;
- (_Bool)isFirstResponder;
- (_Bool)textField:(id)arg1 shouldChangeCharactersInRange:(struct _NSRange)arg2 replacementString:(id)arg3;
- (void)updateDisableState;
- (void)update;
- (void)convertToValidNumber;
- (void)textFieldTextDidChange:(id)arg1;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
