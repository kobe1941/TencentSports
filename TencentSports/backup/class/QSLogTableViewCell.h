//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

@class QSLogItem, UILabel;

__attribute__((visibility("hidden")))
@interface QSLogTableViewCell : UITableViewCell
{
    QSLogItem *_item;
    UILabel *_desLabel;
}

+ (double)heightWithModel:(id)arg1;
+ (double)CellHightWithItem:(id)arg1;
@property(retain, nonatomic) UILabel *desLabel; // @synthesize desLabel=_desLabel;
@property(retain, nonatomic) QSLogItem *item; // @synthesize item=_item;
- (void).cxx_destruct;
- (void)updateWithModel:(id)arg1;
- (void)update;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end
