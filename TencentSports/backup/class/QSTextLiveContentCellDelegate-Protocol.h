//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSArray, QSTextLiveMixCell;

@protocol QSTextLiveContentCellDelegate <NSObject>
- (void)textLiveContentCellDidPressPage:(QSTextLiveMixCell *)arg1;
- (void)textLiveContentCellDidPressVideo:(QSTextLiveMixCell *)arg1;
- (void)textLiveContentCellDidPressPlayerCard:(QSTextLiveMixCell *)arg1;
- (void)textLiveContentCellDidPressImage:(QSTextLiveMixCell *)arg1 withAllImages:(NSArray *)arg2 atIndex:(unsigned long long)arg3;
@end

