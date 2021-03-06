//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "QSStatedData.h"

@class NSDictionary, NSString, QSTopicDetailItem;

__attribute__((visibility("hidden")))
@interface QSComTopicDetailData : QSStatedData
{
    NSString *_tid;
    NSDictionary *_report;
}

+ (_Bool)cleanCacheWhenUserChanged;
+ (void)cleanCacheWhenCommunityUserAttendStatusChanged:(id)arg1;
+ (void)load;
@property(retain, nonatomic) NSDictionary *report; // @synthesize report=_report;
@property(copy, nonatomic) NSString *tid; // @synthesize tid=_tid;
- (void).cxx_destruct;
@property(readonly, nonatomic) __weak QSTopicDetailItem *topicDetailItem; // @dynamic topicDetailItem;
- (void)resetWithResponseModel:(id)arg1;
- (id)identifier;
- (id)httpURLComponents;
- (void)saveToFile;

@end

