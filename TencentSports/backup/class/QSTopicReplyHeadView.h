//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIControl.h>

@class UIActivityIndicatorView, UIButton, UIImageView, UILabel, UIView;

__attribute__((visibility("hidden")))
@interface QSTopicReplyHeadView : UIControl
{
    UIImageView *_triangleIV;
    UIButton *_loadPreviousBtn;
    UILabel *_replyLabel;
    UIView *_loadPreviousContainerView;
    UIActivityIndicatorView *_loadPreviousAIView;
    long long _optionIndex;
    long long _replyCount;
}

+ (double)heightWithHasPreviousData:(_Bool)arg1;
+ (double)fixedHeight;
@property(nonatomic) long long replyCount; // @synthesize replyCount=_replyCount;
@property(nonatomic) long long optionIndex; // @synthesize optionIndex=_optionIndex;
@property(retain, nonatomic) UIActivityIndicatorView *loadPreviousAIView; // @synthesize loadPreviousAIView=_loadPreviousAIView;
@property(retain, nonatomic) UIView *loadPreviousContainerView; // @synthesize loadPreviousContainerView=_loadPreviousContainerView;
@property(retain, nonatomic) UILabel *replyLabel; // @synthesize replyLabel=_replyLabel;
@property(retain, nonatomic) UIButton *loadPreviousBtn; // @synthesize loadPreviousBtn=_loadPreviousBtn;
@property(retain, nonatomic) UIImageView *triangleIV; // @synthesize triangleIV=_triangleIV;
- (void).cxx_destruct;
- (void)updateUIWithHasPreviousData:(_Bool)arg1 isLoadingPrevious:(_Bool)arg2;
- (void)updateUIWithReplyCount:(long long)arg1 optionIndex:(long long)arg2;
- (id)initWithFrame:(struct CGRect)arg1;

@end
