//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface QLImagePool : NSObject
{
    int _deviceType;
    NSString *_defaultThemePath;
    NSString *_currentThemePath;
    NSString *rootPath;
}

+ (id)defaultPool;
@property(retain, nonatomic) NSString *rootPath; // @synthesize rootPath;
@property(nonatomic) int deviceType; // @synthesize deviceType=_deviceType;
- (int)deviceVersion;
- (void)setCurrentThemePath:(id)arg1;
- (void)setDefaultThemePath:(id)arg1;
- (int)navigationViewSkinsType;
- (void)removeImageForKey:(id)arg1;
- (id)GetImageForKey:(id)arg1;
- (_Bool)isInCache:(id)arg1;
- (void)addImage:(id)arg1 forKey:(id)arg2;
- (id)DefaultImageForName:(id)arg1 cache:(_Bool)arg2;
- (id)FaceImageForName:(id)arg1;
- (id)KeyboardImageForName:(id)arg1 cache:(_Bool)arg2;
- (id)ReserveImageForName:(id)arg1;
- (id)WebViewImageForName:(id)arg1;
- (id)QZoneIconImageForName:(id)arg1 cache:(_Bool)arg2;
- (id)ADIconImageForName:(id)arg1 cache:(_Bool)arg2;
- (id)PlayerIconImageForName:(id)arg1 cache:(_Bool)arg2;
- (id)IconImageForName:(id)arg1 cache:(_Bool)arg2;
- (id)SkinImageForName:(id)arg1 cache:(_Bool)arg2 key:(id)arg3 path:(id)arg4;
- (id)SkinImageForName:(id)arg1 cache:(_Bool)arg2 key:(id)arg3;
- (id)ImageForName:(id)arg1 basePath:(id)arg2 cache:(_Bool)arg3 key:(id)arg4 isReserve:(_Bool)arg5;
- (id)GifEmotionFormName:(id)arg1;
- (id)pathForName:(id)arg1 basePath:(id)arg2;
- (void)cleanSkinImageCache;
- (id)SecretFileImageForName:(id)arg1;
- (id)SecretFileImageForName:(id)arg1 cache:(_Bool)arg2;
- (void)dealloc;
- (id)getResPath:(id)arg1 basePath:(id)arg2;
- (id)init;

@end

