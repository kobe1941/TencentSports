//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "QSPlayerRanklistPlayerCell.h"

@class NSString, UIImageView;

__attribute__((visibility("hidden")))
@interface QSPlayerRanklistDetailCollectionPlayerCell : QSPlayerRanklistPlayerCell
{
    NSString *_rank;
    UIImageView *_rankImageView;
}

@property(retain, nonatomic) UIImageView *rankImageView; // @synthesize rankImageView=_rankImageView;
@property(retain, nonatomic) NSString *rank; // @synthesize rank=_rank;
- (void).cxx_destruct;
- (void)updateUI;
- (id)initWithFrame:(struct CGRect)arg1;

@end

