//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "QSNavigationController.h"

@protocol QSPhotoImagePickerControllerDelegate;

__attribute__((visibility("hidden")))
@interface QSPhotoImagePickerController : QSNavigationController
{
    _Bool _didCheckAuthorization;
    id <QSPhotoImagePickerControllerDelegate> _delegate;
    long long _fetchType;
    unsigned long long _maxSelectedImageNum;
}

@property(nonatomic) _Bool didCheckAuthorization; // @synthesize didCheckAuthorization=_didCheckAuthorization;
@property(nonatomic) unsigned long long maxSelectedImageNum; // @synthesize maxSelectedImageNum=_maxSelectedImageNum;
@property(nonatomic) long long fetchType; // @synthesize fetchType=_fetchType;
@property(nonatomic) __weak id <QSPhotoImagePickerControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)didSaveEditedVideoToPath:(id)arg1;
- (void)didPickAssetForVideo:(id)arg1;
- (void)didPickAssetsForImage:(id)arg1;
- (void)checkAuthorizationStatus:(long long)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)dealloc;
- (id)initWithFetchType:(long long)arg1 maxSelectedImageNum:(unsigned long long)arg2 delegate:(id)arg3;

@end

