//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "QSComTopicDetailContentCell.h"

@class QSCircleGifImageView;

__attribute__((visibility("hidden")))
@interface QSComTopicDetailImageContentCell : QSComTopicDetailContentCell
{
    QSCircleGifImageView *_contentImageView;
}

+ (double)cellHeightWithContentItem:(id)arg1 isReply:(_Bool)arg2;
+ (double)PlaceHolderImageHeight;
+ (double)BottomVerticalPadding;
+ (double)TopVerticalPadding;
+ (double)RightHorizontalPadding;
+ (double)LeftHorizontalPadding;
@property(retain, nonatomic) QSCircleGifImageView *contentImageView; // @synthesize contentImageView=_contentImageView;
- (void).cxx_destruct;
- (void)update;
- (void)onLongPress:(id)arg1;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end
