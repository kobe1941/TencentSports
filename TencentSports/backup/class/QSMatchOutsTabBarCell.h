//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UICollectionViewCell.h>

@class QSNewMessageTipView, UIButton;

__attribute__((visibility("hidden")))
@interface QSMatchOutsTabBarCell : UICollectionViewCell
{
    _Bool _userSelected;
    UIButton *_iconButton;
    QSNewMessageTipView *_newsTipView;
}

@property(retain, nonatomic) QSNewMessageTipView *newsTipView; // @synthesize newsTipView=_newsTipView;
@property(nonatomic) _Bool userSelected; // @synthesize userSelected=_userSelected;
@property(retain, nonatomic) UIButton *iconButton; // @synthesize iconButton=_iconButton;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect)arg1;

@end
