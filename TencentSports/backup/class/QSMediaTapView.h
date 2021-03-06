//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@protocol QSMediaTapViewDelegate;

__attribute__((visibility("hidden")))
@interface QSMediaTapView : UIView
{
    _Bool _isSelfShowing;
    id <QSMediaTapViewDelegate> _delegate;
    UIView *_tapResponseView;
}

@property(nonatomic) _Bool isSelfShowing; // @synthesize isSelfShowing=_isSelfShowing;
@property(retain, nonatomic) UIView *tapResponseView; // @synthesize tapResponseView=_tapResponseView;
@property(nonatomic) __weak id <QSMediaTapViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)dismiss;
- (void)showInView:(id)arg1;
- (void)tapResponseViewDidTap;
- (void)tap:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

