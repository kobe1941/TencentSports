//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "QSMyWalletCell.h"

#import "QSMyWalletCellDelegate-Protocol.h"

@class NSString, QSMyWalletHeaderItemView, UIView;
@protocol QSMyWalletHeaderCellDelegate;

__attribute__((visibility("hidden")))
@interface QSMyWalletHeaderCell : QSMyWalletCell <QSMyWalletCellDelegate>
{
    id <QSMyWalletHeaderCellDelegate> _delegate;
    QSMyWalletHeaderItemView *_leftItemView;
    UIView *_leftVerticalView;
    QSMyWalletHeaderItemView *_middleItemView;
    UIView *_rightVerticalView;
    QSMyWalletHeaderItemView *_rightItemView;
    UIView *_bottomHorizontalView;
}

+ (double)cellHeight;
+ (id)cellIdentifier;
@property(retain, nonatomic) UIView *bottomHorizontalView; // @synthesize bottomHorizontalView=_bottomHorizontalView;
@property(retain, nonatomic) QSMyWalletHeaderItemView *rightItemView; // @synthesize rightItemView=_rightItemView;
@property(retain, nonatomic) UIView *rightVerticalView; // @synthesize rightVerticalView=_rightVerticalView;
@property(retain, nonatomic) QSMyWalletHeaderItemView *middleItemView; // @synthesize middleItemView=_middleItemView;
@property(retain, nonatomic) UIView *leftVerticalView; // @synthesize leftVerticalView=_leftVerticalView;
@property(retain, nonatomic) QSMyWalletHeaderItemView *leftItemView; // @synthesize leftItemView=_leftItemView;
@property(nonatomic) __weak id <QSMyWalletHeaderCellDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)watchMatchTicketDidTap;
- (void)kCoinExchangeDidTap;
- (void)diamondPurchaseDidTap;
- (void)updateWithModel:(id)arg1;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
