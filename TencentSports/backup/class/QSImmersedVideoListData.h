//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "QSVideoListData.h"

#import "QSTableViewDataResultProtocol-Protocol.h"

@class NSString, QSVideoListVideoModel;

__attribute__((visibility("hidden")))
@interface QSImmersedVideoListData : QSVideoListData <QSTableViewDataResultProtocol>
{
    _Bool _autoLoadMore;
    QSVideoListVideoModel *_fakeVideoModel;
}

@property(nonatomic) _Bool autoLoadMore; // @synthesize autoLoadMore=_autoLoadMore;
@property(copy, nonatomic) QSVideoListVideoModel *fakeVideoModel; // @synthesize fakeVideoModel=_fakeVideoModel;
- (void).cxx_destruct;
- (id)modelWithIndexPath:(id)arg1;
- (long long)numberOfRowsInSection:(long long)arg1;
- (long long)numberOfSections;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
