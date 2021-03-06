//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class QSMatchItem, UILabel;

__attribute__((visibility("hidden")))
@interface QSMatchSimpleTitleView : UIView
{
    QSMatchItem *_itemInfo;
    UILabel *_homeGoalLabel;
    UILabel *_awayGoalLabel;
    UILabel *_tipLabel;
}

@property(retain, nonatomic) UILabel *tipLabel; // @synthesize tipLabel=_tipLabel;
@property(retain, nonatomic) UILabel *awayGoalLabel; // @synthesize awayGoalLabel=_awayGoalLabel;
@property(retain, nonatomic) UILabel *homeGoalLabel; // @synthesize homeGoalLabel=_homeGoalLabel;
@property(retain, nonatomic) QSMatchItem *itemInfo; // @synthesize itemInfo=_itemInfo;
- (void).cxx_destruct;
- (double)textHeight;
- (double)textCenterY;
- (double)textRight;
- (double)textLeft;
- (double)textTop;
- (void)update;
- (id)initWithFrame:(struct CGRect)arg1;

@end

