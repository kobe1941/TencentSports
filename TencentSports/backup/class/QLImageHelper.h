//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface QLImageHelper : NSObject
{
}

+ (id)imageByScaleToSize:(id)arg1 size:(struct CGSize)arg2;
+ (id)cutImageFromImage:(id)arg1 size:(struct CGSize)arg2;
+ (id)resizeWithImage:(id)arg1 scale:(double)arg2 compression:(double)arg3;
+ (id)compressImage:(id)arg1 inMode:(int)arg2;
+ (id)scaleImage:(id)arg1 inMode:(int)arg2;
+ (_Bool)isGif:(id)arg1;
+ (id)image:(id)arg1 fillForMinSize:(double)arg2;
+ (id)image:(id)arg1 scaleToFitSize:(struct CGSize)arg2;
+ (id)image:(id)arg1 scaleToFitSizeWithMaxLongSide:(double)arg2;
+ (id)image:(id)arg1 scaleToFitSizeWithMaxShortSide:(double)arg2;
+ (struct CGSize)fitImage:(id)arg1 withMaxLongSide:(double)arg2;
+ (struct CGSize)fitImage:(id)arg1 withMaxShortSide:(double)arg2;
+ (struct CGSize)fitSize:(struct CGSize)arg1 withMaxLongSide:(double)arg2;
+ (struct CGSize)fitSize:(struct CGSize)arg1 withMaxShortSide:(double)arg2;
+ (id)image:(id)arg1 scaleAspectFitSize:(struct CGSize)arg2 withOrientation:(long long)arg3;
+ (id)image:(id)arg1 scaleAspectFitSize:(struct CGSize)arg2;
+ (id)image:(id)arg1 fillView:(id)arg2;
+ (id)image:(id)arg1 fillForWidth:(double)arg2;
+ (void)image:(id)arg1 drawInRectWithFitSize:(struct CGRect)arg2;
+ (id)image:(id)arg1 fillSize:(struct CGSize)arg2;
+ (id)image:(id)arg1 centerInView:(id)arg2;
+ (id)image:(id)arg1 withResize:(struct CGSize)arg2 centerInSize:(struct CGSize)arg3;
+ (id)image:(id)arg1 centerInSize:(struct CGSize)arg2;
+ (id)image:(id)arg1 fitInView:(id)arg2;
+ (id)image:(id)arg1 fitInSize:(struct CGSize)arg2;
+ (id)unrotateImage:(id)arg1;
+ (id)doUnrotateImage:(id)arg1;
+ (struct CGRect)getFillIntSize:(struct CGSize)arg1 inSize:(struct CGSize)arg2;
+ (struct CGSize)getFitIntSize:(struct CGSize)arg1 inSize:(struct CGSize)arg2;
+ (struct CGSize)fitSize:(struct CGSize)arg1 inSize:(struct CGSize)arg2;
+ (id)imageForView:(id)arg1 clipToRect:(struct CGRect)arg2;
+ (id)image:(id)arg1 clipToRect:(struct CGRect)arg2;
+ (id)imageFromView:(id)arg1;
+ (id)imageFromColor:(id)arg1 size:(struct CGSize)arg2;
+ (id)alphaImageAxis_X:(id)arg1 alphaWidth:(double)arg2 Mode:(int)arg3;
+ (id)alphaImageAxis_Y:(id)arg1 alphaWidth:(double)arg2 Mode:(int)arg3;
+ (char *)bitmapFromImage:(id)arg1;
+ (id)imageWithBits:(char *)arg1 withSize:(struct CGSize)arg2;
+ (id)imageFromViewWithRect:(id)arg1 rect:(struct CGRect)arg2;

@end
