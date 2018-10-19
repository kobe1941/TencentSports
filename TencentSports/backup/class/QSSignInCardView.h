//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class CAGradientLayer, QSSignInCardModel, QSSignInCardNonVsContentView, QSSignInCardVsContentView, UIImageView, UILabel;

__attribute__((visibility("hidden")))
@interface QSSignInCardView : UIView
{
    QSSignInCardModel *_cardModel;
    UILabel *_timeLabel;
    UILabel *_descLabel;
    UIImageView *_vipImageView;
    UILabel *_rankingLabel;
    UIImageView *_background;
    CAGradientLayer *_gradientLayer;
    QSSignInCardVsContentView *_vsContentView;
    QSSignInCardNonVsContentView *_nonVsContentView;
}

@property(retain, nonatomic) QSSignInCardNonVsContentView *nonVsContentView; // @synthesize nonVsContentView=_nonVsContentView;
@property(retain, nonatomic) QSSignInCardVsContentView *vsContentView; // @synthesize vsContentView=_vsContentView;
@property(retain, nonatomic) CAGradientLayer *gradientLayer; // @synthesize gradientLayer=_gradientLayer;
@property(retain, nonatomic) UIImageView *background; // @synthesize background=_background;
@property(retain, nonatomic) UILabel *rankingLabel; // @synthesize rankingLabel=_rankingLabel;
@property(retain, nonatomic) UIImageView *vipImageView; // @synthesize vipImageView=_vipImageView;
@property(retain, nonatomic) UILabel *descLabel; // @synthesize descLabel=_descLabel;
@property(retain, nonatomic) UILabel *timeLabel; // @synthesize timeLabel=_timeLabel;
@property(retain, nonatomic) QSSignInCardModel *cardModel; // @synthesize cardModel=_cardModel;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (_Bool)isNonVs;
- (id)initWithFrame:(struct CGRect)arg1;

@end

