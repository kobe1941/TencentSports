//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TADCHitExtendButton.h"

@class UIImage;

__attribute__((visibility("hidden")))
@interface TADCSelectButton : TADCHitExtendButton
{
    UIImage *_normalImage;
    UIImage *_normalImageHighlight;
    UIImage *_selectImage;
    UIImage *_selectImageHighlight;
}

@property(retain, nonatomic) UIImage *selectImageHighlight; // @synthesize selectImageHighlight=_selectImageHighlight;
@property(retain, nonatomic) UIImage *selectImage; // @synthesize selectImage=_selectImage;
@property(retain, nonatomic) UIImage *normalImageHighlight; // @synthesize normalImageHighlight=_normalImageHighlight;
@property(retain, nonatomic) UIImage *normalImage; // @synthesize normalImage=_normalImage;
- (void).cxx_destruct;
- (void)dealloc;
- (void)setSelected:(_Bool)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

