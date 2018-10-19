//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

@class NSArray, NSMutableArray, UIImageView, UIView;

__attribute__((visibility("hidden")))
@interface QSGuessRotateCell : UITableViewCell
{
    _Bool _needReload;
    NSArray *_notices;
    NSMutableArray *_buttons;
    UIView *_bgBlueView;
    UIView *_maskView;
    long long _currentIndex;
    double _labelWidth;
    UIImageView *_icon1;
    UIImageView *_icon2;
}

+ (double)height;
@property(nonatomic) _Bool needReload; // @synthesize needReload=_needReload;
@property(retain, nonatomic) UIImageView *icon2; // @synthesize icon2=_icon2;
@property(retain, nonatomic) UIImageView *icon1; // @synthesize icon1=_icon1;
@property(nonatomic) double labelWidth; // @synthesize labelWidth=_labelWidth;
@property(nonatomic) long long currentIndex; // @synthesize currentIndex=_currentIndex;
@property(retain, nonatomic) UIView *maskView; // @synthesize maskView=_maskView;
@property(retain, nonatomic) UIView *bgBlueView; // @synthesize bgBlueView=_bgBlueView;
@property(retain, nonatomic) NSMutableArray *buttons; // @synthesize buttons=_buttons;
@property(retain, nonatomic) NSArray *notices; // @synthesize notices=_notices;
- (void).cxx_destruct;
- (void)openUrl:(id)arg1 withTitle:(id)arg2;
- (void)prepareNextAnimation;
- (void)update;
- (void)dealloc;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

