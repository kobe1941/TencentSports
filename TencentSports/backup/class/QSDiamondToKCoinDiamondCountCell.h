//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

#import "UITextFieldDelegate-Protocol.h"

@class NSString, QSAddSubtractCounter, UIImageView, UILabel, UITextField, UIView;
@protocol QSDiamondToKCoinDiamondCountCellDelegate;

__attribute__((visibility("hidden")))
@interface QSDiamondToKCoinDiamondCountCell : UITableViewCell <UITextFieldDelegate>
{
    UILabel *_titleLabel;
    UIImageView *_borderView;
    QSAddSubtractCounter *_addSubtractCounter;
    UITextField *_textField;
    UIView *_separatorLine;
    long long _rate;
    long long _diamondCount;
    long long _minDiamondCount;
    long long _maxDiamondCount;
    id <QSDiamondToKCoinDiamondCountCellDelegate> _delegate;
}

+ (double)height;
@property(nonatomic) __weak id <QSDiamondToKCoinDiamondCountCellDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) long long maxDiamondCount; // @synthesize maxDiamondCount=_maxDiamondCount;
@property(nonatomic) long long minDiamondCount; // @synthesize minDiamondCount=_minDiamondCount;
@property(nonatomic) long long diamondCount; // @synthesize diamondCount=_diamondCount;
@property(nonatomic) long long rate; // @synthesize rate=_rate;
- (void).cxx_destruct;
- (void)hideKeyboard;
- (_Bool)addSubtractIsFirstResponder;
- (void)updateUI;
- (void)updateCount:(id)arg1;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
