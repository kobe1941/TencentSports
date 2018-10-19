//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

@class QSLiveChatMallAdItem, QSMatchDetailInfo, QSWebImageViewEx, UIButton, UIImageView, UILabel, UIView;

__attribute__((visibility("hidden")))
@interface QSLiveChatMallAdCell : UITableViewCell
{
    QSLiveChatMallAdItem *_item;
    QSMatchDetailInfo *_matchDetailInfo;
    UIImageView *_bgView;
    QSWebImageViewEx *_goodsIcon;
    UILabel *_nameLabel;
    UILabel *_discountLabel;
    UIView *_discountLine;
    UILabel *_tipLabel;
    UIButton *_priceButton;
}

+ (double)heightWithItem:(id)arg1;
@property(retain, nonatomic) UIButton *priceButton; // @synthesize priceButton=_priceButton;
@property(retain, nonatomic) UILabel *tipLabel; // @synthesize tipLabel=_tipLabel;
@property(retain, nonatomic) UIView *discountLine; // @synthesize discountLine=_discountLine;
@property(retain, nonatomic) UILabel *discountLabel; // @synthesize discountLabel=_discountLabel;
@property(retain, nonatomic) UILabel *nameLabel; // @synthesize nameLabel=_nameLabel;
@property(retain, nonatomic) QSWebImageViewEx *goodsIcon; // @synthesize goodsIcon=_goodsIcon;
@property(retain, nonatomic) UIImageView *bgView; // @synthesize bgView=_bgView;
@property(retain, nonatomic) QSMatchDetailInfo *matchDetailInfo; // @synthesize matchDetailInfo=_matchDetailInfo;
@property(retain, nonatomic) QSLiveChatMallAdItem *item; // @synthesize item=_item;
- (void).cxx_destruct;
- (void)priceButtonClicked:(id)arg1;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end
