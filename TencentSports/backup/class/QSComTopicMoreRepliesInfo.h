//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "QSModel.h"

@class NSArray, NSString, QSComTopicDetailReplyItem;

__attribute__((visibility("hidden")))
@interface QSComTopicMoreRepliesInfo : QSModel
{
    _Bool _isAdmin;
    _Bool _isMaster;
    NSString *_lastId;
    NSArray *_list;
    QSComTopicDetailReplyItem *_preply;
}

+ (Class)classForObjectInArrayProperty:(id)arg1;
@property(retain, nonatomic) QSComTopicDetailReplyItem *preply; // @synthesize preply=_preply;
@property(retain, nonatomic) NSArray *list; // @synthesize list=_list;
@property(copy, nonatomic) NSString *lastId; // @synthesize lastId=_lastId;
@property(nonatomic) _Bool isMaster; // @synthesize isMaster=_isMaster;
@property(nonatomic) _Bool isAdmin; // @synthesize isAdmin=_isAdmin;
- (void).cxx_destruct;

@end
