//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

@class QSDiamondPurchaseListInfoItem, QSImageTextButton, QSKCoinExchangeListInfoItem, UIImage, UIImageView, UILabel;
@protocol QSDiamondInfoCellDelegate;

__attribute__((visibility("hidden")))
@interface QSDiamondInfoCell : UITableViewCell
{
    long long _amountType;
    unsigned long long _kCoinCount;
    unsigned long long _presentKCoinCount;
    unsigned long long _diamondCount;
    long long _purchaseType;
    id <QSDiamondInfoCellDelegate> _delegate;
    UIImageView *_thumbnail;
    UILabel *_topTextLabel;
    UILabel *_bottomTextLabel;
    QSImageTextButton *_purchaseButton;
    UIImage *_purchaseWithMoneyImage;
    UIImage *_purchaseWithDiamondImage;
    QSDiamondPurchaseListInfoItem *_diamondPurchaseListInfoItem;
    QSKCoinExchangeListInfoItem *_kCoinExchangeListInfoItem;
    long long _currentPurchaseType;
}

+ (id)getReuseIdentifier;
@property(nonatomic) long long currentPurchaseType; // @synthesize currentPurchaseType=_currentPurchaseType;
@property(retain, nonatomic) QSKCoinExchangeListInfoItem *kCoinExchangeListInfoItem; // @synthesize kCoinExchangeListInfoItem=_kCoinExchangeListInfoItem;
@property(retain, nonatomic) QSDiamondPurchaseListInfoItem *diamondPurchaseListInfoItem; // @synthesize diamondPurchaseListInfoItem=_diamondPurchaseListInfoItem;
@property(retain, nonatomic) UIImage *purchaseWithDiamondImage; // @synthesize purchaseWithDiamondImage=_purchaseWithDiamondImage;
@property(retain, nonatomic) UIImage *purchaseWithMoneyImage; // @synthesize purchaseWithMoneyImage=_purchaseWithMoneyImage;
@property(retain, nonatomic) QSImageTextButton *purchaseButton; // @synthesize purchaseButton=_purchaseButton;
@property(retain, nonatomic) UILabel *bottomTextLabel; // @synthesize bottomTextLabel=_bottomTextLabel;
@property(retain, nonatomic) UILabel *topTextLabel; // @synthesize topTextLabel=_topTextLabel;
@property(retain, nonatomic) UIImageView *thumbnail; // @synthesize thumbnail=_thumbnail;
@property(nonatomic) __weak id <QSDiamondInfoCellDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) long long purchaseType; // @synthesize purchaseType=_purchaseType;
@property(nonatomic) unsigned long long diamondCount; // @synthesize diamondCount=_diamondCount;
@property(nonatomic) unsigned long long presentKCoinCount; // @synthesize presentKCoinCount=_presentKCoinCount;
@property(nonatomic) unsigned long long kCoinCount; // @synthesize kCoinCount=_kCoinCount;
@property(nonatomic) long long amountType; // @synthesize amountType=_amountType;
- (void).cxx_destruct;
- (void)purchaseDidTap;
- (void)updateLayoutWithDiamondPurchaseListInfoItem:(id)arg1;
- (void)updateLayoutWithKCoinExchangeListInfoItem:(id)arg1;
- (void)layoutSubviews;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

