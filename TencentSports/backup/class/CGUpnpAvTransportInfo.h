//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class CGUpnpAction;

@interface CGUpnpAvTransportInfo : NSObject
{
    CGUpnpAction *upnpAction;
}

@property(retain) CGUpnpAction *upnpAction; // @synthesize upnpAction;
- (id)transportState;
- (_Bool)isPauseing;
- (_Bool)isStopped;
- (_Bool)isPlaying;
- (void)dealloc;
- (id)initWithAction:(id)arg1;

@end

