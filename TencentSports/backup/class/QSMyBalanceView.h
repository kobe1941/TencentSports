//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class QSPartedRichTextLabel;

__attribute__((visibility("hidden")))
@interface QSMyBalanceView : UIView
{
    unsigned long long _numberOfDiamond;
    unsigned long long _numberOfKCoin;
    QSPartedRichTextLabel *_richTextLabel;
}

@property(retain, nonatomic) QSPartedRichTextLabel *richTextLabel; // @synthesize richTextLabel=_richTextLabel;
@property(nonatomic) unsigned long long numberOfKCoin; // @synthesize numberOfKCoin=_numberOfKCoin;
@property(nonatomic) unsigned long long numberOfDiamond; // @synthesize numberOfDiamond=_numberOfDiamond;
- (void).cxx_destruct;
- (void)updateRichTextLabel;
- (id)initWithFrame:(struct CGRect)arg1;

@end

