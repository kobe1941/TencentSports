//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "QSModel.h"

@class NSArray, NSString;

__attribute__((visibility("hidden")))
@interface QSVideoCoverItem : QSModel
{
    NSString *_cid;
    NSString *_pic;
    NSString *_stitle;
    NSString *_title;
    NSString *_columnId;
    NSArray *_videos;
}

+ (Class)classForObjectInArrayProperty:(id)arg1;
@property(retain, nonatomic) NSArray *videos; // @synthesize videos=_videos;
@property(retain, nonatomic) NSString *columnId; // @synthesize columnId=_columnId;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
@property(retain, nonatomic) NSString *stitle; // @synthesize stitle=_stitle;
@property(retain, nonatomic) NSString *pic; // @synthesize pic=_pic;
@property(retain, nonatomic) NSString *cid; // @synthesize cid=_cid;
- (void).cxx_destruct;

@end

