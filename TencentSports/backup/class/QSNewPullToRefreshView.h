//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "CAAnimationDelegate-Protocol.h"
#import "QSPullToRefreshProtocol-Protocol.h"

@class NSString, UIImageView, UILabel;
@protocol QSTableViewDelegate;

__attribute__((visibility("hidden")))
@interface QSNewPullToRefreshView : UIView <CAAnimationDelegate, QSPullToRefreshProtocol>
{
    _Bool _isLoading;
    _Bool _isForceReload;
    id <QSTableViewDelegate> _delegate;
    long long _state;
    NSString *_refreshNomoreText;
    NSString *_refreshNormalText;
    NSString *_refreshText;
    NSString *_refreshLoadingText;
    UIImageView *_bgImageView;
    UIImageView *_rimImageView;
    UIImageView *_ballImageView;
    UIImageView *_animationImageView;
    UILabel *_statusLabel;
}

@property(nonatomic) _Bool isForceReload; // @synthesize isForceReload=_isForceReload;
@property(nonatomic) _Bool isLoading; // @synthesize isLoading=_isLoading;
@property(retain, nonatomic) UILabel *statusLabel; // @synthesize statusLabel=_statusLabel;
@property(retain, nonatomic) UIImageView *animationImageView; // @synthesize animationImageView=_animationImageView;
@property(retain, nonatomic) UIImageView *ballImageView; // @synthesize ballImageView=_ballImageView;
@property(retain, nonatomic) UIImageView *rimImageView; // @synthesize rimImageView=_rimImageView;
@property(retain, nonatomic) UIImageView *bgImageView; // @synthesize bgImageView=_bgImageView;
@property(copy, nonatomic) NSString *refreshLoadingText; // @synthesize refreshLoadingText=_refreshLoadingText;
@property(copy, nonatomic) NSString *refreshText; // @synthesize refreshText=_refreshText;
@property(copy, nonatomic) NSString *refreshNormalText; // @synthesize refreshNormalText=_refreshNormalText;
@property(copy, nonatomic) NSString *refreshNomoreText; // @synthesize refreshNomoreText=_refreshNomoreText;
@property(nonatomic) long long state; // @synthesize state=_state;
@property(nonatomic) __weak id <QSTableViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)forceLoading:(id)arg1 animate:(_Bool)arg2;
- (void)scrollViewDidRemoveFromWindow:(id)arg1;
- (void)scrollViewDataSourceDidFinishedLoading:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)scrollViewDidEndScrollingAnimation:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1;
- (void)refresh;
- (void)performAnimation3;
- (void)performAnimation2;
- (void)animationDidStop:(id)arg1 finished:(_Bool)arg2;
- (void)performAnimation1;
- (void)updateRimImageViewWhenForceReloading;
- (void)updateRimImageViewWhenFinishLoading;
- (void)updateRimImageViewWhenDragging;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

