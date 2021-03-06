//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "QSMatchGuessQuestionOptionSelectedDelegage-Protocol.h"

@class NSString, QSMatchGuessOptionsFloatView, QSMatchGuessQuestion, QSWebImageView, UILabel;
@protocol QSMatchGuessWagerDelegate;

__attribute__((visibility("hidden")))
@interface QSMatchGuessFloatView : UIView <QSMatchGuessQuestionOptionSelectedDelegage>
{
    _Bool _isOpen;
    QSMatchGuessQuestion *_question;
    NSString *_mid;
    NSString *_userChoiceId;
    id <QSMatchGuessWagerDelegate> _delegate;
    QSWebImageView *_ad58IconImageView;
    UILabel *_ad58Label;
    UILabel *_titleLabel;
    UILabel *_participantCountLabel;
    QSMatchGuessOptionsFloatView *_optionsView;
}

+ (_Bool)hasAd58:(id)arg1;
@property(retain, nonatomic) QSMatchGuessOptionsFloatView *optionsView; // @synthesize optionsView=_optionsView;
@property(retain, nonatomic) UILabel *participantCountLabel; // @synthesize participantCountLabel=_participantCountLabel;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UILabel *ad58Label; // @synthesize ad58Label=_ad58Label;
@property(retain, nonatomic) QSWebImageView *ad58IconImageView; // @synthesize ad58IconImageView=_ad58IconImageView;
@property(nonatomic) _Bool isOpen; // @synthesize isOpen=_isOpen;
@property(nonatomic) __weak id <QSMatchGuessWagerDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) NSString *userChoiceId; // @synthesize userChoiceId=_userChoiceId;
@property(retain, nonatomic) NSString *mid; // @synthesize mid=_mid;
@property(retain, nonatomic) QSMatchGuessQuestion *question; // @synthesize question=_question;
- (void).cxx_destruct;
- (void)didSelectIndex:(long long)arg1;
- (void)layoutSubviews;
- (void)update;
- (double)heightWithQuestion:(id)arg1;
- (double)titleLabelHeightWithTitle:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

