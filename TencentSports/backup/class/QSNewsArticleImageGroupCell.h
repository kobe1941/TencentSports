//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "QSNewsArticleDescCell.h"

@class QSCircleGifImageView, UIImageView, UILabel, UIView;

__attribute__((visibility("hidden")))
@interface QSNewsArticleImageGroupCell : QSNewsArticleDescCell
{
    QSCircleGifImageView *_pictureView;
    UIView *_groupView;
    UILabel *_countLabel;
    UIImageView *_countImageView;
}

+ (double)heightWithModel:(id)arg1;
@property(retain, nonatomic) UIImageView *countImageView; // @synthesize countImageView=_countImageView;
@property(retain, nonatomic) UILabel *countLabel; // @synthesize countLabel=_countLabel;
@property(retain, nonatomic) UIView *groupView; // @synthesize groupView=_groupView;
@property(retain, nonatomic) QSCircleGifImageView *pictureView; // @synthesize pictureView=_pictureView;
- (void).cxx_destruct;
- (void)updateWithModel:(id)arg1;
- (void)imagePressed:(id)arg1;
- (_Bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

