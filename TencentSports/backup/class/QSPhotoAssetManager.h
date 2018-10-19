//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "QSCleanCacheProtocol-Protocol.h"

@class NSMutableDictionary, QSCache;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface QSPhotoAssetManager : NSObject <QSCleanCacheProtocol>
{
    NSMutableDictionary *_fetchConfigs;
    QSCache *_imageCache;
    NSObject<OS_dispatch_queue> *_imageDataWriteToFileQueue;
}

+ (void)cleanCache;
+ (id)getDirectoryOfMediaExport;
+ (_Bool)isCameraRollAlbum:(id)arg1;
+ (struct CGSize)assetThumbnailSize;
+ (void)stopCachingImagesForAllAssets;
+ (void)stopCachingImagesForAssets:(id)arg1 options:(id)arg2;
+ (void)startCachingThumbnailForAssets:(id)arg1 options:(id)arg2;
+ (void)getCameraRollAlbumWithMediaFetchType:(long long)arg1 completion:(CDUnknownBlockType)arg2;
+ (id)getCameraRollAlbumWithMediaFetchType:(long long)arg1;
+ (void)getAllAlbumsWithMediaFetchType:(long long)arg1 completion:(CDUnknownBlockType)arg2;
+ (id)getAllAlbumsWithMediaFetchType:(long long)arg1;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *imageDataWriteToFileQueue; // @synthesize imageDataWriteToFileQueue=_imageDataWriteToFileQueue;
@property(retain, nonatomic) QSCache *imageCache; // @synthesize imageCache=_imageCache;
@property(retain, nonatomic) NSMutableDictionary *fetchConfigs; // @synthesize fetchConfigs=_fetchConfigs;
- (void).cxx_destruct;
- (void)clearImageMemeoryCache;
- (void)cacheImage:(id)arg1 withKey:(id)arg2;
- (id)cachedImageForKey:(id)arg1;
- (void)stopGetMediaWithIdentifier:(id)arg1;
- (int)exportVideoForAsset:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (int)exportVideoForAsset:(id)arg1 destinationFilePath:(id)arg2 needThumbnail:(_Bool)arg3 completion:(CDUnknownBlockType)arg4;
- (int)requestPlayerItemForVideo:(id)arg1 options:(id)arg2 requestConfig:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)getPlayerItemForAsset:(id)arg1 identifier:(id)arg2 progressHandler:(CDUnknownBlockType)arg3 completion:(CDUnknownBlockType)arg4;
- (struct CGSize)imageSizeForAsset:(id)arg1 maxPixelWidth:(double)arg2 maxPixelHeight:(double)arg3;
- (void)getImageForAsset:(id)arg1 identifier:(id)arg2 configKey:(id)arg3 photoSize:(struct CGSize)arg4 options:(id)arg5 needCache:(_Bool)arg6 progressHandler:(CDUnknownBlockType)arg7 completion:(CDUnknownBlockType)arg8;
- (int)exportImageForAsset:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)getPreviewImageForAsset:(id)arg1 identifier:(id)arg2 progressHandler:(CDUnknownBlockType)arg3 completion:(CDUnknownBlockType)arg4;
- (void)getThumbnailImageForAsset:(id)arg1 identifier:(id)arg2 options:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)getThumbnailImageForAsset:(id)arg1 identifier:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)dealloc;
- (id)init;

@end

