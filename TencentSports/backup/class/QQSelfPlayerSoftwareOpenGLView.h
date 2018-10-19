//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class EAGLContext, NSLock, NSMutableArray, NSRecursiveLock;
@protocol QQSelfPlayerSoftwareOpenGLRenderView;

@interface QQSelfPlayerSoftwareOpenGLView : UIView
{
    EAGLContext *_context;
    unsigned int _framebuffer;
    unsigned int _renderbuffer;
    int _backingWidth;
    int _backingHeight;
    unsigned int _program;
    int _uniformMatrix;
    float _vertices[8];
    unsigned long long _frameWidth;
    unsigned long long _frameHeight;
    id <QQSelfPlayerSoftwareOpenGLRenderView> _renderer;
    BOOL _didSetupGL;
    BOOL _didStopGL;
    int _tryLockErrorCount;
    NSMutableArray *_registeredNotifications;
    BOOL _glActivePaused;
    NSLock *_appActivityLock;
    double _fps;
    double _scaleFactor;
    id _softWareDelegate;
    NSRecursiveLock *_glActiveLock;
}

+ (Class)layerClass;
@property BOOL glActivePaused; // @synthesize glActivePaused=_glActivePaused;
@property(retain) NSRecursiveLock *glActiveLock; // @synthesize glActiveLock=_glActiveLock;
@property(nonatomic) id softWareDelegate; // @synthesize softWareDelegate=_softWareDelegate;
@property(nonatomic) double scaleFactor; // @synthesize scaleFactor=_scaleFactor;
@property(nonatomic) double fps; // @synthesize fps=_fps;
@property(retain, nonatomic) NSLock *appActivityLock; // @synthesize appActivityLock=_appActivityLock;
- (void).cxx_destruct;
- (id)snapshotInternalOnIOS6AndBefore;
- (id)snapshotInternalOnIOS7AndLater;
- (id)snapshotInternal;
- (id)snapshot;
- (void)applicationWillTerminate;
- (void)applicationDidEnterBackground;
- (void)applicationWillResignActive;
- (void)applicationDidBecomeActive;
- (void)applicationWillEnterForeground;
- (void)unregisterApplicationObservers;
- (void)registerApplicationObservers;
- (void)toggleGLPaused:(BOOL)arg1;
- (BOOL)tryLockGLActive;
- (void)unlockGLActive;
- (void)lockGLActive;
- (void)updateVertices;
- (void)renderInternalFrameWithNoPadding:(char *)arg1 framewidth:(int)arg2 frameheight:(int)arg3 dstwidth:(int)arg4 dstheight:(int)arg5;
- (void)renderFrameWithNoPadding:(char *)arg1 framewidth:(int)arg2 frameheight:(int)arg3 dstwidth:(int)arg4 dstheight:(int)arg5;
- (void)renderInternal:(char **)arg1 linesize:(int *)arg2 framewidth:(int)arg3 frameheight:(int)arg4;
- (void)render:(char **)arg1 linesize:(int *)arg2 framewidth:(int)arg3 frameheight:(int)arg4;
- (BOOL)setupRenderer;
- (void)layoutSubviews;
- (void)dealloc;
- (BOOL)isApplicationActive;
- (BOOL)setupGLOnce;
- (BOOL)loadShaders;
- (BOOL)setupGL;
- (id)eaglLayer;
- (BOOL)setupEAGLContext:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end
