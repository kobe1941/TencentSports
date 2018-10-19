//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class UIColor;

__attribute__((visibility("hidden")))
@interface QSPageControl : UIView
{
    _Bool _hidesForSinglePage;
    long long _numberOfPages;
    long long _currentPage;
    double _normalWidth;
    double _highlightWidth;
    double _blank;
    long long _controlType;
    long long _direction;
    UIColor *_pageIndicatorTintColor;
    UIColor *_currentPageIndicatorTintColor;
}

@property(retain, nonatomic) UIColor *currentPageIndicatorTintColor; // @synthesize currentPageIndicatorTintColor=_currentPageIndicatorTintColor;
@property(retain, nonatomic) UIColor *pageIndicatorTintColor; // @synthesize pageIndicatorTintColor=_pageIndicatorTintColor;
@property(nonatomic) long long direction; // @synthesize direction=_direction;
@property(nonatomic) long long controlType; // @synthesize controlType=_controlType;
@property(nonatomic) _Bool hidesForSinglePage; // @synthesize hidesForSinglePage=_hidesForSinglePage;
@property(nonatomic) double blank; // @synthesize blank=_blank;
@property(nonatomic) double highlightWidth; // @synthesize highlightWidth=_highlightWidth;
@property(nonatomic) double normalWidth; // @synthesize normalWidth=_normalWidth;
@property(nonatomic) long long currentPage; // @synthesize currentPage=_currentPage;
@property(nonatomic) long long numberOfPages; // @synthesize numberOfPages=_numberOfPages;
- (void).cxx_destruct;
- (struct CGSize)sizeForNumberOfPages:(long long)arg1;
- (void)drawRect:(struct CGRect)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)init;

@end

