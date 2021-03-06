//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "VRDegelate-Protocol.h"

@class NSString, UIImageView, VRGLView;
@protocol VRManagerDegelate;

@interface VRManager : NSObject <VRDegelate>
{
    int mVRtype;
    _Bool mEnableBD;
    UIImageView *_maskView;
    _Bool _isVREnabled;
    _Bool _isBackground;
    NSString *_lastPlayUUID;
    VRGLView *_vrView;
    id <VRManagerDegelate> _delegate;
}

@property(nonatomic) __weak id <VRManagerDegelate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) VRGLView *vrView; // @synthesize vrView=_vrView;
@property(copy, nonatomic) NSString *lastPlayUUID; // @synthesize lastPlayUUID=_lastPlayUUID;
@property(nonatomic) _Bool isBackground; // @synthesize isBackground=_isBackground;
@property(nonatomic) _Bool isVREnabled; // @synthesize isVREnabled=_isVREnabled;
- (void).cxx_destruct;
- (void)requestChangedForEmptyPixelBuffer;
- (void)onAppWillEnterForeground:(id)arg1;
- (void)onAppDidEnterBackground:(id)arg1;
- (void)enableVR:(_Bool)arg1;
- (void)setScale:(float)arg1;
- (void)doRotateX:(float)arg1 andY:(float)arg2;
- (id)getVRViewWithFrame:(struct CGRect)arg1;
- (void)dealloc;
- (void)setEnableBarrelDistoron:(_Bool)arg1;
- (void)setVRconfig:(_Bool)arg1 VRtype:(int)arg2;
- (int)currentVRtype;
- (void)setVRtype:(int)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

