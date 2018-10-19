//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSString;

@interface QQSelfPlayerOpenGLAdapterView : UIView
{
    UIView *_openGLView;
    int _videoWidth;
    int _videoHeight;
    int _fillMode;
    BOOL _isOpenGLViewReady;
    BOOL _isDuringCreating;
    NSString *_videoGravity;
}

@property(copy) NSString *videoGravity; // @synthesize videoGravity=_videoGravity;
- (void).cxx_destruct;
- (void)dealloc;
- (int)getOpenGLViewType;
- (void)resetOpenGLView;
- (id)fillModeIntToNSString:(int)arg1;
- (int)updateOpenGLViewWithViewType:(int)arg1 andWidth:(int)arg2 andHeight:(int)arg3;
- (void)renderFrameOnHardOpenGLView:(struct __CVBuffer *)arg1;
- (void)renderFrameOnSoftOpenGLViewNoPadding:(char *)arg1 framewidth:(int)arg2 frameheight:(int)arg3;
- (void)renderFrameOnSoftOpenGLView:(char **)arg1 linesize:(int *)arg2 framewidth:(int)arg3 frameheight:(int)arg4;
- (int)initOpenGLViewInMainThreadWithViewType:(int)arg1 andWidth:(int)arg2 andHeight:(int)arg3;
- (int)initOpenGLViewWithViewType:(int)arg1 andWidth:(int)arg2 andHeight:(int)arg3;
- (id)initWithFrame:(struct CGRect)arg1;

@end
