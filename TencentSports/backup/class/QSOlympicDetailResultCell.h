//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

@class QSMatchItem, QSOlympicScheduleDataView, UIButton, UILabel;

__attribute__((visibility("hidden")))
@interface QSOlympicDetailResultCell : UITableViewCell
{
    QSMatchItem *_match;
    UILabel *_titleLabel;
    QSOlympicScheduleDataView *_resultView;
    UIButton *_moreBtn;
}

+ (double)heightWithMatchItem:(id)arg1;
@property(retain, nonatomic) UIButton *moreBtn; // @synthesize moreBtn=_moreBtn;
@property(retain, nonatomic) QSOlympicScheduleDataView *resultView; // @synthesize resultView=_resultView;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) QSMatchItem *match; // @synthesize match=_match;
- (void).cxx_destruct;
- (void)detailPressed:(id)arg1;
- (void)setSelected:(_Bool)arg1 animated:(_Bool)arg2;
- (void)awakeFromNib;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

