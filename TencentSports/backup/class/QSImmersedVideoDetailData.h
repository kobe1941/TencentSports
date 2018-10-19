//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "QSVideoDetailData.h"

#import "QSBaseDataDelegate-Protocol.h"
#import "QSTableViewDataResultProtocol-Protocol.h"

@class NSString, QSNewsCommentData, QSVideoItem, QSVideoListItemModel;

__attribute__((visibility("hidden")))
@interface QSImmersedVideoDetailData : QSVideoDetailData <QSTableViewDataResultProtocol, QSBaseDataDelegate>
{
    _Bool _commentInvalid;
    unsigned long long _displayType;
    QSNewsCommentData *_commentData;
    QSVideoItem *_currentVideoItem;
    QSVideoListItemModel *_itemModel;
}

@property(retain, nonatomic) QSVideoListItemModel *itemModel; // @synthesize itemModel=_itemModel;
@property(retain, nonatomic) QSVideoItem *currentVideoItem; // @synthesize currentVideoItem=_currentVideoItem;
@property(nonatomic) _Bool commentInvalid; // @synthesize commentInvalid=_commentInvalid;
@property(retain, nonatomic) QSNewsCommentData *commentData; // @synthesize commentData=_commentData;
@property(nonatomic) unsigned long long displayType; // @synthesize displayType=_displayType;
- (void).cxx_destruct;
- (void)data:(id)arg1 didFinishLoadWithError:(id)arg2;
- (void)dataWillStartLoad:(id)arg1;
- (id)modelWithIndexPath:(id)arg1;
- (long long)numberOfRowsInSection:(long long)arg1;
- (long long)numberOfSections;
- (id)nextVideoItem;
- (void)reloadDataWithCache:(_Bool)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

