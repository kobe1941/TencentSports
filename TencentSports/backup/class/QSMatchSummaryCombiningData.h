//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "QSCombiningData.h"

#import "QSTableViewDataResultProtocol-Protocol.h"

@class NSString, QSMatchDetailInfo, QSMatchSummaryData, QSMatchSummaryVideoDetail, QSMatchTopicsData;

__attribute__((visibility("hidden")))
@interface QSMatchSummaryCombiningData : QSCombiningData <QSTableViewDataResultProtocol>
{
    QSMatchDetailInfo *_detailInfo;
    QSMatchSummaryData *_summaryData;
    QSMatchTopicsData *_topicsData;
    QSMatchSummaryVideoDetail *_videoDetail;
}

@property(retain, nonatomic) QSMatchSummaryVideoDetail *videoDetail; // @synthesize videoDetail=_videoDetail;
@property(retain, nonatomic) QSMatchTopicsData *topicsData; // @synthesize topicsData=_topicsData;
@property(retain, nonatomic) QSMatchSummaryData *summaryData; // @synthesize summaryData=_summaryData;
@property(retain, nonatomic) QSMatchDetailInfo *detailInfo; // @synthesize detailInfo=_detailInfo;
- (void).cxx_destruct;
- (id)modelWithIndexPath:(id)arg1;
- (id)newsModelWithIndex:(long long)arg1;
- (long long)numberOfRowsInSection:(long long)arg1;
- (_Bool)needEmptyCell;
- (long long)numberOfTopic;
- (long long)numberOfSections;
- (void)reloadData;
- (_Bool)isEmpty;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
