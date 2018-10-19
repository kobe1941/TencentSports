//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSString, UIActivityIndicatorView, UILabel;
@protocol QSTableViewDelegate;

__attribute__((visibility("hidden")))
@interface QSPullToLoadPreviousView : UIView
{
    _Bool _isTriggerByDrag;
    id <QSTableViewDelegate> _delegate;
    long long _state;
    UILabel *_customTextLabel;
    UIActivityIndicatorView *_loadingView;
    NSString *_refreshNomoreText;
    NSString *_refreshNormalText;
    NSString *_refreshText;
    NSString *_refreshLoadingText;
}

@property(copy, nonatomic) NSString *refreshLoadingText; // @synthesize refreshLoadingText=_refreshLoadingText;
@property(copy, nonatomic) NSString *refreshText; // @synthesize refreshText=_refreshText;
@property(copy, nonatomic) NSString *refreshNormalText; // @synthesize refreshNormalText=_refreshNormalText;
@property(copy, nonatomic) NSString *refreshNomoreText; // @synthesize refreshNomoreText=_refreshNomoreText;
@property(retain, nonatomic) UIActivityIndicatorView *loadingView; // @synthesize loadingView=_loadingView;
@property(retain, nonatomic) UILabel *customTextLabel; // @synthesize customTextLabel=_customTextLabel;
@property(nonatomic) _Bool isTriggerByDrag; // @synthesize isTriggerByDrag=_isTriggerByDrag;
@property(nonatomic) long long state; // @synthesize state=_state;
@property(nonatomic) __weak id <QSTableViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)forceLoading:(id)arg1 animate:(_Bool)arg2;
- (void)scrollViewDataSourceDidFinishedLoading:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)scrollViewDidEndScrollingAnimation:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1;
- (double)offsetYOfScrollView:(id)arg1;
- (double)offsetStartY;
- (double)offsetEndY;
- (double)height;
- (void)layoutSubviews;
- (void)refresh;
- (id)initWithFrame:(struct CGRect)arg1;

@end

