//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "FLAnimatedImageView.h"

@class NSString, UIImage;

__attribute__((visibility("hidden")))
@interface QSWebGifImageView : FLAnimatedImageView
{
    UIImage *_defaultImage;
    NSString *_gifURL;
}

@property(retain, nonatomic) NSString *gifURL; // @synthesize gifURL=_gifURL;
@property(retain, nonatomic) UIImage *defaultImage; // @synthesize defaultImage=_defaultImage;
- (void).cxx_destruct;
- (void)dealloc;
- (void)clearGifImage;
- (void)setGifImageWithURL:(id)arg1;

@end

