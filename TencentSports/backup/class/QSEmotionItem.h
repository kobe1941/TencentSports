//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, UIImage;

__attribute__((visibility("hidden")))
@interface QSEmotionItem : NSObject
{
    int _index;
    NSString *_name;
    UIImage *_largeImage;
    UIImage *_middleImage;
    UIImage *_smallImage;
    NSString *_pathName;
}

@property(nonatomic) int index; // @synthesize index=_index;
@property(retain, nonatomic) NSString *pathName; // @synthesize pathName=_pathName;
@property(retain, nonatomic) UIImage *smallImage; // @synthesize smallImage=_smallImage;
@property(retain, nonatomic) UIImage *middleImage; // @synthesize middleImage=_middleImage;
@property(retain, nonatomic) UIImage *largeImage; // @synthesize largeImage=_largeImage;
@property(retain, nonatomic) NSString *name; // @synthesize name=_name;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSString *display;

@end

