//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, UIImage;

@interface QLActionItem : NSObject
{
    _Bool _selected;
    NSString *_title;
    UIImage *_icon;
    NSString *_selectTitle;
    UIImage *_selectIcon;
}

+ (id)itemWithTitle:(id)arg1 icon:(id)arg2;
@property(nonatomic) _Bool selected; // @synthesize selected=_selected;
@property(retain, nonatomic) UIImage *selectIcon; // @synthesize selectIcon=_selectIcon;
@property(retain, nonatomic) NSString *selectTitle; // @synthesize selectTitle=_selectTitle;
@property(retain, nonatomic) UIImage *icon; // @synthesize icon=_icon;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;

@end

