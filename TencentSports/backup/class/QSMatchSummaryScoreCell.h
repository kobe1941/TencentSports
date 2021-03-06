//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

@class QSMatchDetailInfo, QSMatchSummaryScoreNonVSContentView, QSMatchSummaryScoreVSContentView;

__attribute__((visibility("hidden")))
@interface QSMatchSummaryScoreCell : UITableViewCell
{
    QSMatchDetailInfo *_detailInfo;
    QSMatchSummaryScoreVSContentView *_vsContentView;
    QSMatchSummaryScoreNonVSContentView *_nonVSContentView;
}

+ (double)heightWithModel:(id)arg1;
+ (_Bool)isValidWithModel:(id)arg1;
@property(retain, nonatomic) QSMatchSummaryScoreNonVSContentView *nonVSContentView; // @synthesize nonVSContentView=_nonVSContentView;
@property(retain, nonatomic) QSMatchSummaryScoreVSContentView *vsContentView; // @synthesize vsContentView=_vsContentView;
@property(retain, nonatomic) QSMatchDetailInfo *detailInfo; // @synthesize detailInfo=_detailInfo;
- (void).cxx_destruct;
- (void)updateWithModel:(id)arg1;
- (void)layoutSubviews;
- (id)getTimeLabelString;
- (id)getLiveTypeString;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

