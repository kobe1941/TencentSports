//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

@class NSArray, QSRanklistLabel, UILabel;

__attribute__((visibility("hidden")))
@interface QSRanklistTitleViewCell : UITableViewCell
{
    NSArray *_myRanklistTitleInfoArray;
    UILabel *_firstLabel;
    QSRanklistLabel *_titleLabel;
}

+ (double)height;
@property(retain, nonatomic) QSRanklistLabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UILabel *firstLabel; // @synthesize firstLabel=_firstLabel;
@property(retain, nonatomic) NSArray *myRanklistTitleInfoArray; // @synthesize myRanklistTitleInfoArray=_myRanklistTitleInfoArray;
- (void).cxx_destruct;
- (void)updateUI;
- (void)initSubview;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end
