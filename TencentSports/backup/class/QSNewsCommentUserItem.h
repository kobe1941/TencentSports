//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "QSModel.h"

@class NSString;

__attribute__((visibility("hidden")))
@interface QSNewsCommentUserItem : QSModel
{
    NSString *_userid;
    NSString *_uidex;
    NSString *_head;
    NSString *_nick;
    NSString *_region;
}

@property(retain, nonatomic) NSString *region; // @synthesize region=_region;
@property(retain, nonatomic) NSString *nick; // @synthesize nick=_nick;
@property(retain, nonatomic) NSString *head; // @synthesize head=_head;
@property(retain, nonatomic) NSString *uidex; // @synthesize uidex=_uidex;
@property(retain, nonatomic) NSString *userid; // @synthesize userid=_userid;
- (void).cxx_destruct;
- (_Bool)manualSetValue:(id)arg1 forKey:(id)arg2;

@end
