//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "QLBaseHeadStatusLoadingView.h"

@class UIImageView;

@interface QLHeadStatusLoadingView : QLBaseHeadStatusLoadingView
{
    UIImageView *_imgLoading1;
    UIImageView *_holdImgView;
    _Bool _animatinStarted;
    _Bool _canceled;
}

+ (id)getLoadingImages:(id)arg1;
+ (void)AddLoadingDelegate:(id)arg1;
+ (void)loadLoadingImages;
+ (void)initialize;
@property(nonatomic) _Bool canceled; // @synthesize canceled=_canceled;
@property(nonatomic) _Bool animatinStarted; // @synthesize animatinStarted=_animatinStarted;
- (void)resumeAnimation;
- (void)stopAnimation;
- (void)startAnimation;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)dealloc;

@end

