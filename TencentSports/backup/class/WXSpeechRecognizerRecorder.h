//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@protocol WXSpeechRecognizerRecorderDelegate;

@interface WXSpeechRecognizerRecorder : NSObject
{
    struct AudioStreamBasicDescription _format;
    struct OpaqueAudioQueue *_queue;
    struct AudioQueueBuffer *_buffers[5];
    _Bool _onlyRecord;
    _Bool _isRecording;
    id <WXSpeechRecognizerRecorderDelegate> _delegate;
}

@property(readonly, nonatomic) _Bool isRecording; // @synthesize isRecording=_isRecording;
@property(nonatomic) id <WXSpeechRecognizerRecorderDelegate> delegate; // @synthesize delegate=_delegate;
- (void)recordingBytes:(void *)arg1 length:(unsigned int)arg2;
- (void)stop;
- (int)start;
- (void)setSampleRate:(double)arg1;
- (id)init;
- (void)dealloc;

@end

