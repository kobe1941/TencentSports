//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSMutableArray, NSMutableDictionary, UILabel, UIScrollView;

__attribute__((visibility("hidden")))
@interface QSAttendTagBottomView : UIView
{
    CDUnknownBlockType _excuteWhenAnimationCompleted;
    CDUnknownBlockType _excuteWhenIconViewDidTouchUpInside;
    UILabel *_emptyHintLabel;
    UIScrollView *_scrollView;
    NSMutableArray *_iconViews;
    NSMutableDictionary *_iconViewToItemDict;
}

@property(retain, nonatomic) NSMutableDictionary *iconViewToItemDict; // @synthesize iconViewToItemDict=_iconViewToItemDict;
@property(retain, nonatomic) NSMutableArray *iconViews; // @synthesize iconViews=_iconViews;
@property(retain, nonatomic) UIScrollView *scrollView; // @synthesize scrollView=_scrollView;
@property(retain, nonatomic) UILabel *emptyHintLabel; // @synthesize emptyHintLabel=_emptyHintLabel;
@property(copy, nonatomic) CDUnknownBlockType excuteWhenIconViewDidTouchUpInside; // @synthesize excuteWhenIconViewDidTouchUpInside=_excuteWhenIconViewDidTouchUpInside;
@property(copy, nonatomic) CDUnknownBlockType excuteWhenAnimationCompleted; // @synthesize excuteWhenAnimationCompleted=_excuteWhenAnimationCompleted;
- (void).cxx_destruct;
- (void)iconViewDidTouchUpInside:(id)arg1;
- (void)updateWithModel:(id)arg1;
- (void)updateWithModel:(id)arg1 andAddedView:(id)arg2 animated:(_Bool)arg3;
- (void)setEmptyHintLabelHidden;
@property(readonly, nonatomic) struct CGPoint currentContentOffset;
@property(readonly, nonatomic) struct CGSize currentContentSize;
- (id)initWithFrame:(struct CGRect)arg1;

@end
