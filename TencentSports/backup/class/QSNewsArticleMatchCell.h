//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "QSNewsArticleCell.h"

@class NSMutableArray;

__attribute__((visibility("hidden")))
@interface QSNewsArticleMatchCell : QSNewsArticleCell
{
    NSMutableArray *_viewArray;
}

+ (double)heightWithModel:(id)arg1;
@property(retain, nonatomic) NSMutableArray *viewArray; // @synthesize viewArray=_viewArray;
- (void).cxx_destruct;
- (Class)viewClassMatchItem:(id)arg1;
- (void)addViews;
- (void)setBlackSkin;
- (void)cleanViews;
- (void)tapGestureDidTrigger:(id)arg1;
- (void)onMore;
- (void)setContentItem:(id)arg1;
- (void)updateWithModel:(id)arg1;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

