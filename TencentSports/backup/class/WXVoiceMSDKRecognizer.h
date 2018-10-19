//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "WXRecorderDataDelegate-Protocol.h"
#import "WXVoiceDelegate-Protocol.h"

@class NSMutableData, NSString;
@protocol WXVoiceMSDKDelegate;

@interface WXVoiceMSDKRecognizer : NSObject <WXRecorderDataDelegate, WXVoiceDelegate>
{
    NSMutableData *recordData_;
    id <WXVoiceMSDKDelegate> delegate_;
}

+ (void)releaseWXVoice;
+ (id)sharedWXVoice;
@property(nonatomic) id <WXVoiceMSDKDelegate> delegate; // @synthesize delegate=delegate_;
- (void)recorderData:(id)arg1 withSampleRate:(int)arg2 isEnd:(_Bool)arg3;
- (void)voiceInputVolumn:(float)arg1;
- (void)voiceInputDidCancel;
- (void)voiceInputWaitForResult;
- (void)voiceInputMakeError:(long long)arg1;
- (void)voiceInputResultArray:(id)arg1;
- (id)processPackToPCM:(id)arg1 sampleRate:(int *)arg2;
- (void)cancel;
- (void)stop;
- (_Bool)start;
- (void)setAppID:(id)arg1;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

