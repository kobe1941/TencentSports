//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

@class NSString;

@protocol QQSelfPlayerSoftwareOpenGLRenderView
- (BOOL)prepareRender;
- (void)setFrameWithNoPadding:(char *)arg1 framewidth:(int)arg2 frameheight:(int)arg3;
- (void)setFrame:(char **)arg1 linesize:(int *)arg2 framewidth:(int)arg3 frameheight:(int)arg4;
- (void)resolveUniforms:(unsigned int)arg1;
- (NSString *)fragmentShader;
- (BOOL)isValid;
@end

