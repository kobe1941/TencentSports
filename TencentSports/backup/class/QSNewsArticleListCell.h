//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "QSNewsArticleCell.h"

@class UIView;

__attribute__((visibility("hidden")))
@interface QSNewsArticleListCell : QSNewsArticleCell
{
    UIView *_bgView;
    unsigned long long _labelCount;
}

+ (double)heightWithModel:(id)arg1;
@property(nonatomic) unsigned long long labelCount; // @synthesize labelCount=_labelCount;
@property(retain, nonatomic) UIView *bgView; // @synthesize bgView=_bgView;
- (void).cxx_destruct;
- (id)imageWithLineNumber:(unsigned long long)arg1;
- (void)updateWithModel:(id)arg1;
- (void)layoutSubviews;
- (id)newLableByTag:(unsigned long long)arg1;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

