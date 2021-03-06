//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "QSAVCaptureVideoMangementDelegate-Protocol.h"
#import "QSComPublishTakeVideoProgressViewDelegate-Protocol.h"
#import "UIViewControllerTransitioningDelegate-Protocol.h"

@class NSString, NSURL, QSAVCaptureVideoMangement, QSComPublishTakeVideoProgressView, QSFadeInPresentAnimation, UIButton, UILabel, UIView;

__attribute__((visibility("hidden")))
@interface QSComPublishTakeVideoViewController : UIViewController <QSAVCaptureVideoMangementDelegate, QSComPublishTakeVideoProgressViewDelegate, UIViewControllerTransitioningDelegate>
{
    _Bool _isTakePhotoMode;
    _Bool _shouldHaveCameraBtn;
    _Bool _shouldDismissFromPlayVideoVC;
    CDUnknownBlockType _dismissWithVideoFileURL;
    CDUnknownBlockType _dismissWithImage;
    UIView *_controlView;
    long long _controlViewCurrentOrientation;
    UIButton *_cameraBtn;
    UILabel *_hintLabel;
    QSComPublishTakeVideoProgressView *_recordProgressView;
    UIButton *_closeBtn;
    NSURL *_fileURL;
    QSAVCaptureVideoMangement *_captureVideoMangement;
    QSFadeInPresentAnimation *_fadeInPresentAnimation;
    double _takeVideoBeginTime;
    double _takeVideoFinishTime;
}

@property(nonatomic) double takeVideoFinishTime; // @synthesize takeVideoFinishTime=_takeVideoFinishTime;
@property(nonatomic) double takeVideoBeginTime; // @synthesize takeVideoBeginTime=_takeVideoBeginTime;
@property(nonatomic) _Bool shouldDismissFromPlayVideoVC; // @synthesize shouldDismissFromPlayVideoVC=_shouldDismissFromPlayVideoVC;
@property(retain, nonatomic) QSFadeInPresentAnimation *fadeInPresentAnimation; // @synthesize fadeInPresentAnimation=_fadeInPresentAnimation;
@property(retain, nonatomic) QSAVCaptureVideoMangement *captureVideoMangement; // @synthesize captureVideoMangement=_captureVideoMangement;
@property(retain, nonatomic) NSURL *fileURL; // @synthesize fileURL=_fileURL;
@property(retain, nonatomic) UIButton *closeBtn; // @synthesize closeBtn=_closeBtn;
@property(retain, nonatomic) QSComPublishTakeVideoProgressView *recordProgressView; // @synthesize recordProgressView=_recordProgressView;
@property(retain, nonatomic) UILabel *hintLabel; // @synthesize hintLabel=_hintLabel;
@property(retain, nonatomic) UIButton *cameraBtn; // @synthesize cameraBtn=_cameraBtn;
@property(nonatomic) _Bool shouldHaveCameraBtn; // @synthesize shouldHaveCameraBtn=_shouldHaveCameraBtn;
@property(nonatomic) long long controlViewCurrentOrientation; // @synthesize controlViewCurrentOrientation=_controlViewCurrentOrientation;
@property(retain, nonatomic) UIView *controlView; // @synthesize controlView=_controlView;
@property(nonatomic) _Bool isTakePhotoMode; // @synthesize isTakePhotoMode=_isTakePhotoMode;
@property(copy, nonatomic) CDUnknownBlockType dismissWithImage; // @synthesize dismissWithImage=_dismissWithImage;
@property(copy, nonatomic) CDUnknownBlockType dismissWithVideoFileURL; // @synthesize dismissWithVideoFileURL=_dismissWithVideoFileURL;
- (void).cxx_destruct;
- (void)didEnterBackground:(id)arg1;
- (id)animationControllerForPresentedController:(id)arg1 presentingController:(id)arg2 sourceController:(id)arg3;
- (void)comPublishTakeVideoProgressViewDidUserTap:(id)arg1;
- (void)comPublishTakeVideoProgressViewDidEndProgressChange:(id)arg1 reachMaximumDuration:(_Bool)arg2;
- (void)comPublishTakeVideoProgressViewWillBeginProgressChange:(id)arg1;
- (void)comPublishTakeVideoProgressViewDidUserBeginLongPress:(id)arg1;
- (void)excuteWhenCaptureVideoFailed;
- (void)captureVideoMangement:(id)arg1 didFinishTakingPhotoWithData:(id)arg2 success:(_Bool)arg3;
- (void)captureVideoMangement:(id)arg1 didFinishRecordingToOutputFileAtURL:(id)arg2 videoOrientation:(long long)arg3 success:(_Bool)arg4;
- (void)captureVideoMangement:(id)arg1 didChangeCameraSuccess:(_Bool)arg2;
- (void)captureVideoMangement:(id)arg1 didStartCaptureVideoMangementSuccess:(_Bool)arg2 withAlertErrorType:(long long)arg3;
- (void)closeBtnClicked:(id)arg1;
- (void)changeCamera:(id)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (unsigned long long)supportedInterfaceOrientations;
- (_Bool)shouldAutorotate;
- (_Bool)prefersStatusBarHidden;
- (void)hideHintLabel;
- (void)dealloc;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

