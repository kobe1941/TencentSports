//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

@class QSMatchStateOddsInfoItem, UILabel, UIView;

__attribute__((visibility("hidden")))
@interface QSOddsDataCell : UITableViewCell
{
    UIView *_line;
    UILabel *_lb0;
    UILabel *_lb1;
    UILabel *_lb2;
    UILabel *_lb3;
    UILabel *_lb4;
    UILabel *_lb21;
    UILabel *_lb22;
    UILabel *_lb23;
    UILabel *_lb24;
    _Bool _hasLine;
    QSMatchStateOddsInfoItem *_item;
}

+ (double)height;
@property(nonatomic) _Bool hasLine; // @synthesize hasLine=_hasLine;
@property(retain, nonatomic) QSMatchStateOddsInfoItem *item; // @synthesize item=_item;
- (void).cxx_destruct;
- (id)colorByIndex:(long long)arg1;
- (void)update;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end
