//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class MPTipsMiniProgressView, UIImageView, UILabel;

@interface KKProgressTipsView : UIView
{
    UIImageView *_imgView;
    UILabel *_timelbl;
    UILabel *_desLbl;
    MPTipsMiniProgressView *_miniProgress;
}

@property(retain, nonatomic) MPTipsMiniProgressView *miniProgress; // @synthesize miniProgress=_miniProgress;
@property(retain, nonatomic) UILabel *desLbl; // @synthesize desLbl=_desLbl;
@property(retain, nonatomic) UILabel *timelbl; // @synthesize timelbl=_timelbl;
@property(retain, nonatomic) UIImageView *imgView; // @synthesize imgView=_imgView;
- (void)hideMiniProgress:(_Bool)arg1;
- (void)setPercent:(double)arg1;
- (void)dealloc;
- (void)showSimpleModel;
- (void)showLiveModel;
- (void)showTimeModel;
- (void)drawRect:(struct CGRect)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

