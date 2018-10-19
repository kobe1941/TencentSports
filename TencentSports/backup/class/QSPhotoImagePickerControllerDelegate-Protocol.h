//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSArray, NSError, NSString, QSPhotoImagePickerController, UIImage;

@protocol QSPhotoImagePickerControllerDelegate <NSObject>

@optional
- (void)qsImagePickerController:(QSPhotoImagePickerController *)arg1 didFinishPickingVideo:(NSString *)arg2 thumbnail:(UIImage *)arg3 error:(NSError *)arg4;
- (void)qsImagePickerController:(QSPhotoImagePickerController *)arg1 didFinishPickingImages:(NSArray *)arg2;
@end
