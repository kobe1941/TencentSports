//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "QSModel.h"

@class NSString;

__attribute__((visibility("hidden")))
@interface QSDiamondPurchaseListInfoItem : QSModel
{
    NSString *_productId;
    NSString *_itemId;
    unsigned long long _moneyCount;
    unsigned long long _discount;
    unsigned long long _diamondCount;
    unsigned long long _vol;
    unsigned long long _payItem;
}

@property(nonatomic) unsigned long long payItem; // @synthesize payItem=_payItem;
@property(nonatomic) unsigned long long vol; // @synthesize vol=_vol;
@property(nonatomic) unsigned long long diamondCount; // @synthesize diamondCount=_diamondCount;
@property(nonatomic) unsigned long long discount; // @synthesize discount=_discount;
@property(nonatomic) unsigned long long moneyCount; // @synthesize moneyCount=_moneyCount;
@property(copy, nonatomic) NSString *itemId; // @synthesize itemId=_itemId;
@property(copy, nonatomic) NSString *productId; // @synthesize productId=_productId;
- (void).cxx_destruct;

@end

