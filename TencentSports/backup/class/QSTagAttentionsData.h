//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "QSStatedData.h"

#import "QSAutoUpdateProtocol-Protocol.h"

@class NSArray, NSMutableDictionary, NSMutableSet, NSString, QSHTTPRequestOperation;

__attribute__((visibility("hidden")))
@interface QSTagAttentionsData : QSStatedData <QSAutoUpdateProtocol>
{
    NSMutableDictionary *_allTagsWithTagId;
    NSMutableDictionary *_allTagsWithTeamId;
    NSMutableSet *_waitingAttendTags;
    NSMutableSet *_waitingUnattendTags;
    NSMutableSet *_cacheWaitingAttendTags;
    NSMutableSet *_cacheWaitingUnattendTags;
    NSMutableSet *_waitingBatchAttendTags;
    NSMutableSet *_waitingBatchUnattendTags;
    QSHTTPRequestOperation *_currentOperation;
}

+ (id)sharedInstance;
+ (id)cachePath;
+ (_Bool)cleanCacheWhenUserChanged;
@property(retain, nonatomic) QSHTTPRequestOperation *currentOperation; // @synthesize currentOperation=_currentOperation;
@property(retain, nonatomic) NSMutableSet *waitingBatchUnattendTags; // @synthesize waitingBatchUnattendTags=_waitingBatchUnattendTags;
@property(retain, nonatomic) NSMutableSet *waitingBatchAttendTags; // @synthesize waitingBatchAttendTags=_waitingBatchAttendTags;
@property(retain, nonatomic) NSMutableSet *cacheWaitingUnattendTags; // @synthesize cacheWaitingUnattendTags=_cacheWaitingUnattendTags;
@property(retain, nonatomic) NSMutableSet *cacheWaitingAttendTags; // @synthesize cacheWaitingAttendTags=_cacheWaitingAttendTags;
@property(retain, nonatomic) NSMutableSet *waitingUnattendTags; // @synthesize waitingUnattendTags=_waitingUnattendTags;
@property(retain, nonatomic) NSMutableSet *waitingAttendTags; // @synthesize waitingAttendTags=_waitingAttendTags;
@property(retain, nonatomic) NSMutableDictionary *allTagsWithTeamId; // @synthesize allTagsWithTeamId=_allTagsWithTeamId;
@property(retain, nonatomic) NSMutableDictionary *allTagsWithTagId; // @synthesize allTagsWithTagId=_allTagsWithTagId;
- (void).cxx_destruct;
- (void)userChanged:(id)arg1;
- (void)appEnterForerground:(id)arg1;
- (id)tagsStringForTagsSet:(id)arg1;
- (id)tagsStringForTagsArray:(id)arg1;
- (id)parseAllAttendedTagsWithString:(id)arg1;
- (void)createModelData;
- (id)allAttendedTags;
- (void)unattendWithTagId:(id)arg1;
- (void)attendWithTagId:(id)arg1;
- (void)uploadData;
- (_Bool)hasDataWaitingUpload;
- (void)uploadDataWithWaitingAttendTags:(id)arg1 waitingUnattendTags:(id)arg2 start:(CDUnknownBlockType)arg3 completion:(CDUnknownBlockType)arg4;
- (void)refreshWithAllTagModel:(id)arg1;
- (void)refreshWithFollowedTagModel:(id)arg1;
- (_Bool)isTeamAttendedWithTeamId:(id)arg1;
- (_Bool)isTagAttendedWithTagId:(id)arg1;
- (_Bool)updateTimeTriggered;
- (double)updateTimeInterval;
- (_Bool)canUpdate;
- (void)onAutoUpdate;
- (void)resetWithResponseModel:(id)arg1;
- (id)httpURLComponents;
- (double)cacheExpireTime;
- (id)identifier;
- (void)resetFromCacheObject:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
@property(readonly, nonatomic) NSArray *followedTeams;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

