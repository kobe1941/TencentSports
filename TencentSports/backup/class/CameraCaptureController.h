//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "AVCaptureVideoDataOutputSampleBufferDelegate-Protocol.h"

@class AVCaptureDevice, AVCaptureDeviceInput, AVCaptureSession, AVCaptureVideoDataOutput, NSString;

__attribute__((visibility("hidden")))
@interface CameraCaptureController : NSObject <AVCaptureVideoDataOutputSampleBufferDelegate>
{
    AVCaptureDevice *_captureDevice;
    AVCaptureSession *_captureSession;
    AVCaptureDeviceInput *_captureInput;
    AVCaptureVideoDataOutput *_captureOutput;
    struct CMVideoSampling _cmVideoSampling;
    void *_userData;
    unsigned long long _width;
    unsigned long long _height;
}

@property(retain, nonatomic) AVCaptureDeviceInput *captureInput; // @synthesize captureInput=_captureInput;
@property(retain, nonatomic) AVCaptureVideoDataOutput *captureOutput; // @synthesize captureOutput=_captureOutput;
@property(retain, nonatomic) AVCaptureSession *captureSession; // @synthesize captureSession=_captureSession;
@property(retain, nonatomic) AVCaptureDevice *captureDevice; // @synthesize captureDevice=_captureDevice;
- (void).cxx_destruct;
- (id)pickFrameRateRange:(float)arg1;
- (id)pickPresetFromWidth:(int)arg1 height:(int)arg2;
- (void)stop;
- (void)pause;
- (void)start;
- (void)captureOutput:(id)arg1 didOutputSampleBuffer:(struct opaqueCMSampleBuffer *)arg2 fromConnection:(id)arg3;
- (_Bool)initCapture:(id)arg1 width:(int)arg2 height:(int)arg3 fps:(float)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
