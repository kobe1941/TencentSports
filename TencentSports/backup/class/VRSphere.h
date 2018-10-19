//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface VRSphere : NSObject
{
    float mAngleX;
    float mAngleY;
    float mDeltaY;
    float mNextDY;
    int NUMBER_OF_SLICES;
    _Bool inited;
    _Bool isBufferReady;
    float *vertices;
    float *textures;
    unsigned long long vCount;
    unsigned long long tCount;
    unsigned int programHandle;
    unsigned int _positionSlot;
    unsigned int _texCoordSlot;
    unsigned int _transformUniform;
    unsigned int _textureUinformY;
    unsigned int _textureUinformUV;
    unsigned int _colorRenderBuffer;
    unsigned int _frameBuffer;
    struct __CVBuffer *_lumaTexture;
    struct __CVBuffer *_chromaTexture;
    struct __CVOpenGLESTextureCache *_videoTextureCache;
    int angle;
    int mScreenWidth;
    int mScreenHeight;
    float fovy;
    float aspectRatio;
    int _backingWidth;
    int _backingHeight;
    int mVRtype;
    float _initAzimuth;
}

@property(nonatomic) float initAzimuth; // @synthesize initAzimuth=_initAzimuth;
- (void)checkError:(id)arg1 outPut:(_Bool)arg2;
- (void)checkError:(id)arg1;
- (void)compileShaders;
- (unsigned int)compileShader:(id)arg1 withType:(unsigned int)arg2;
- (void)setupVBOS;
- (int)getRenderbufferHeight;
- (int)getRenderbufferWidth;
- (void)setupBuffers:(id)arg1 layer:(id)arg2;
- (void)initShader:(id)arg1 layer:(id)arg2;
- (void)dealloc;
- (void)initVertexData:(float)arg1;
- (float)toRadians:(float)arg1;
- (void)cleanUpTextures;
- (void)draw:(const float *)arg1;
- (void)drawWithPixelBuffer:(struct __CVBuffer *)arg1;
- (void)setVRtype:(int)arg1;
- (void)setRotateX:(float)arg1 andY:(float)arg2;
- (void)setWidth:(int)arg1 andHeight:(int)arg2 andOrientation:(long long)arg3;
- (void)setScale:(float)arg1;
- (void)resetAngleXAndY;
- (id)init:(float)arg1 pieces:(unsigned int)arg2;

@end

