//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "QLAdThumbViewDelegate-Protocol.h"
#import "TADEventCenter-Protocol.h"

@class NSString;

@interface TADBaseManager : NSObject <TADEventCenter, QLAdThumbViewDelegate>
{
    NSString *_channelId;
    id _delegate;
}

@property(nonatomic) __weak id delegate; // @synthesize delegate=_delegate;
@property(copy, nonatomic) NSString *channelId; // @synthesize channelId=_channelId;
- (void).cxx_destruct;
- (void)adLandingViewDidAppear:(id)arg1;
- (void)adThumbViewClicked:(id)arg1;
- (void)onEvent:(long long)arg1 userInfo:(id)arg2;
- (void)dealloc;
- (id)initWithChannelId:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

