//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "QSStatedData.h"

#import "QSAutoUpdateProtocol-Protocol.h"

@class NSString, QSAppConfigInfo;

__attribute__((visibility("hidden")))
@interface QSAppConfigData : QSStatedData <QSAutoUpdateProtocol>
{
    _Bool _shouldUpdateData;
}

+ (id)sharedInstance;
+ (id)rootCachePath;
+ (void)cleanCache;
+ (id)cachePath;
@property(nonatomic) _Bool shouldUpdateData; // @synthesize shouldUpdateData=_shouldUpdateData;
- (void)updateInfo:(id)arg1;
- (double)minimumCallbackTimeInterval;
- (void)onAutoUpdate;
- (_Bool)canUpdate;
- (void)refreshDataDidFinishWithError:(id)arg1;
- (void)resetWithResponseModel:(id)arg1;
- (id)httpURLComponents;
- (id)identifier;
@property(readonly, nonatomic) __weak QSAppConfigInfo *config; // @dynamic config;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

