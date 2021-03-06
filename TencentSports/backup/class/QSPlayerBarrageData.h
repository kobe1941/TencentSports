//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "QSStatedData.h"

#import "QSAutoUpdateProtocol-Protocol.h"

@class NSString, QSBarrageInfo;

__attribute__((visibility("hidden")))
@interface QSPlayerBarrageData : QSStatedData <QSAutoUpdateProtocol>
{
    NSString *_targetId;
    NSString *_userIdx;
}

@property(copy, nonatomic) NSString *userIdx; // @synthesize userIdx=_userIdx;
@property(copy, nonatomic) NSString *targetId; // @synthesize targetId=_targetId;
- (void).cxx_destruct;
- (double)updateTimeInterval;
- (void)onAutoUpdate;
- (void)postBarrage:(id)arg1;
- (void)resetWithResponseModel:(id)arg1;
- (id)autoUpdateHttpURLComponents;
- (id)httpURLComponents;
@property(readonly, nonatomic) QSBarrageInfo *info; // @dynamic info;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

