//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSMutableArray, UIImage;

@interface TADTimerView : UIView
{
    NSMutableArray *_numImageViewList;
    NSMutableArray *_numViewList;
    UIImage *_image;
    double _digitWidth;
    double _digitHeight;
    unsigned long long _numbers;
}

@property(nonatomic) unsigned long long numbers; // @synthesize numbers=_numbers;
@property(nonatomic) double digitHeight; // @synthesize digitHeight=_digitHeight;
@property(nonatomic) double digitWidth; // @synthesize digitWidth=_digitWidth;
@property(retain, nonatomic) UIImage *image; // @synthesize image=_image;
@property(retain, nonatomic) NSMutableArray *numViewList; // @synthesize numViewList=_numViewList;
@property(retain, nonatomic) NSMutableArray *numImageViewList; // @synthesize numImageViewList=_numImageViewList;
- (void).cxx_destruct;
- (void)numToImage:(int)arg1;
- (void)setupTimeView;
- (void)dealloc;
- (id)initWithSize:(struct CGSize)arg1 Image:(id)arg2;

@end
