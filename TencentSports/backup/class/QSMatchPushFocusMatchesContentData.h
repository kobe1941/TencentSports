//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "QSStatedData.h"

@class NSString, QSMatchPushFocusMatchesContentItem;

__attribute__((visibility("hidden")))
@interface QSMatchPushFocusMatchesContentData : QSStatedData
{
    NSString *_pushFocusMatchesId;
    QSMatchPushFocusMatchesContentItem *_pushFocusMatchesContentInfo;
}

@property(retain, nonatomic) QSMatchPushFocusMatchesContentItem *pushFocusMatchesContentInfo; // @synthesize pushFocusMatchesContentInfo=_pushFocusMatchesContentInfo;
@property(retain, nonatomic) NSString *pushFocusMatchesId; // @synthesize pushFocusMatchesId=_pushFocusMatchesId;
- (void).cxx_destruct;
- (void)resetWithResponseModel:(id)arg1;
- (id)identifier;
- (id)httpURLComponents;
- (double)cacheExpireTime;

@end

