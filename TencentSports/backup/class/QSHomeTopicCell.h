//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "QSCommMainTopicWithReadStateTableViewCell.h"

#import "QSHomeRecommendCellProtocol-Protocol.h"

@class NSString, UILabel, UIView;

__attribute__((visibility("hidden")))
@interface QSHomeTopicCell : QSCommMainTopicWithReadStateTableViewCell <QSHomeRecommendCellProtocol>
{
    UILabel *_mainTagLabel;
    UIView *_tagSepaerator;
    UIView *_seperatorLine;
}

+ (double)cellHeightWithInfo:(id)arg1;
@property(retain, nonatomic) UIView *seperatorLine; // @synthesize seperatorLine=_seperatorLine;
@property(retain, nonatomic) UIView *tagSepaerator; // @synthesize tagSepaerator=_tagSepaerator;
@property(retain, nonatomic) UILabel *mainTagLabel; // @synthesize mainTagLabel=_mainTagLabel;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)updateSeparatorLineFrame:(struct CGRect)arg1;
- (void)updateWithInfo:(id)arg1;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

