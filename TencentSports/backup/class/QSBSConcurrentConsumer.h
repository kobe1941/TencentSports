//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "QSBSCompositeConsumers.h"

@class NSObject;
@protocol OS_dispatch_group;

@interface QSBSConcurrentConsumer : QSBSCompositeConsumers
{
    NSObject<OS_dispatch_group> *_dispatchGroup;
}

@property(retain, nonatomic) NSObject<OS_dispatch_group> *dispatchGroup; // @synthesize dispatchGroup=_dispatchGroup;
- (void).cxx_destruct;
- (void)didConsumeEventFromBus:(id)arg1;
- (id)init;

@end
