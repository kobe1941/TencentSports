//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "QSStatedData.h"

#import "QSAutoUpdateProtocol-Protocol.h"

@class NSString, QSWorldCupCategoryScheduleModel;

__attribute__((visibility("hidden")))
@interface QSWorldCupCategoryScheduleData : QSStatedData <QSAutoUpdateProtocol>
{
    _Bool _canForceUpdate;
    _Bool _needForceUpdate;
    long long _scheduleType;
}

@property(nonatomic) _Bool needForceUpdate; // @synthesize needForceUpdate=_needForceUpdate;
@property(nonatomic) long long scheduleType; // @synthesize scheduleType=_scheduleType;
@property(nonatomic) _Bool canForceUpdate; // @synthesize canForceUpdate=_canForceUpdate;
- (void)resetWithAutoRefreshModels:(id)arg1;
- (id)autoUpdateHttpURLComponents;
- (double)updateTimeInterval;
- (_Bool)updateTimeTriggered;
- (void)onAutoUpdate;
@property(readonly, nonatomic) QSWorldCupCategoryScheduleModel *model;
- (void)resetWithResponseModel:(id)arg1;
- (id)httpURLComponents;
- (id)identifier;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

