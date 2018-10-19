//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "QSModel.h"

@class NSString, QSComTopicDetailReplyItem, QSComTopicItem;

__attribute__((visibility("hidden")))
@interface QSMessageInfo : QSModel
{
    _Bool _canReply;
    QSComTopicDetailReplyItem *_reply;
    QSComTopicDetailReplyItem *_preply;
    QSComTopicItem *_topic;
    NSString *_hfDelMsg;
    NSString *_ytDelMsg;
    NSString *_url;
    long long _imagesCount;
}

+ (id)messageInfoWithValue:(id)arg1;
@property(nonatomic) _Bool canReply; // @synthesize canReply=_canReply;
@property(nonatomic) long long imagesCount; // @synthesize imagesCount=_imagesCount;
@property(copy, nonatomic) NSString *url; // @synthesize url=_url;
@property(copy, nonatomic) NSString *ytDelMsg; // @synthesize ytDelMsg=_ytDelMsg;
@property(copy, nonatomic) NSString *hfDelMsg; // @synthesize hfDelMsg=_hfDelMsg;
@property(retain, nonatomic) QSComTopicItem *topic; // @synthesize topic=_topic;
@property(retain, nonatomic) QSComTopicDetailReplyItem *preply; // @synthesize preply=_preply;
@property(retain, nonatomic) QSComTopicDetailReplyItem *reply; // @synthesize reply=_reply;
- (void).cxx_destruct;

@end

