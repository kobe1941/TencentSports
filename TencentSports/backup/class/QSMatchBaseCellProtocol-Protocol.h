//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSIndexPath, QSMoreMatchItem, UITableView;

@protocol QSMatchBaseCellProtocol <NSObject>
+ (double)cellHeightWithMoreMatchItem:(QSMoreMatchItem *)arg1;
+ (id)cellWithInfo:(QSMoreMatchItem *)arg1 fromTableView:(UITableView *)arg2 withIndexPath:(NSIndexPath *)arg3;
+ (void)registerAllCellsForTableView:(UITableView *)arg1;
- (void)updateWithInfo:(QSMoreMatchItem *)arg1;
@end

