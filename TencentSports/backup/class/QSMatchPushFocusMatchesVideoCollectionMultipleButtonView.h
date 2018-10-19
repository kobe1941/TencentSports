//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSArray, UIButton;
@protocol QSMatchPushFocusMatchesVideoCollectionMultipleButtonViewDelegate;

__attribute__((visibility("hidden")))
@interface QSMatchPushFocusMatchesVideoCollectionMultipleButtonView : UIView
{
    _Bool _useNewLineStyle;
    id <QSMatchPushFocusMatchesVideoCollectionMultipleButtonViewDelegate> _delegate;
    NSArray *_tabArray;
    UIButton *_firstBtn;
    UIButton *_secondBtn;
    UIButton *_thirdBtn;
    UIView *_horizontalSeperatorLine;
    UIView *_verticalSeperatorLine1;
    UIView *_verticalSeperatorLine2;
}

@property(nonatomic) _Bool useNewLineStyle; // @synthesize useNewLineStyle=_useNewLineStyle;
@property(retain, nonatomic) UIView *verticalSeperatorLine2; // @synthesize verticalSeperatorLine2=_verticalSeperatorLine2;
@property(retain, nonatomic) UIView *verticalSeperatorLine1; // @synthesize verticalSeperatorLine1=_verticalSeperatorLine1;
@property(retain, nonatomic) UIView *horizontalSeperatorLine; // @synthesize horizontalSeperatorLine=_horizontalSeperatorLine;
@property(retain, nonatomic) UIButton *thirdBtn; // @synthesize thirdBtn=_thirdBtn;
@property(retain, nonatomic) UIButton *secondBtn; // @synthesize secondBtn=_secondBtn;
@property(retain, nonatomic) UIButton *firstBtn; // @synthesize firstBtn=_firstBtn;
@property(retain, nonatomic) NSArray *tabArray; // @synthesize tabArray=_tabArray;
@property(nonatomic) __weak id <QSMatchPushFocusMatchesVideoCollectionMultipleButtonViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)thirdBtnPressed:(id)arg1;
- (void)secondBtnPressed:(id)arg1;
- (void)firstBtnPressed:(id)arg1;
- (void)configButton:(id)arg1 tabItem:(id)arg2;
- (id)initWithFrame:(struct CGRect)arg1 customButtonColor:(id)arg2 useNewLineStyle:(_Bool)arg3;
- (id)initWithFrame:(struct CGRect)arg1;

@end
