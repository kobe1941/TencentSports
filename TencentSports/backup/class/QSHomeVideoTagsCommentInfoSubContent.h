//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "QSHomeVideoTagsInfoSubContent.h"

@class QSWebImageView, UIButton, UILabel;

__attribute__((visibility("hidden")))
@interface QSHomeVideoTagsCommentInfoSubContent : QSHomeVideoTagsInfoSubContent
{
    UIButton *_iconControl;
    UIButton *_commentButton;
    UIButton *_sharedButton;
    UIButton *_likeButton;
    QSWebImageView *_icon;
    UILabel *_viewLabel;
    QSWebImageView *_adIcon;
}

+ (double)heightWithModel:(id)arg1;
@property(retain, nonatomic) QSWebImageView *adIcon; // @synthesize adIcon=_adIcon;
@property(retain, nonatomic) UILabel *viewLabel; // @synthesize viewLabel=_viewLabel;
@property(retain, nonatomic) QSWebImageView *icon; // @synthesize icon=_icon;
@property(retain, nonatomic) UIButton *likeButton; // @synthesize likeButton=_likeButton;
@property(retain, nonatomic) UIButton *sharedButton; // @synthesize sharedButton=_sharedButton;
@property(retain, nonatomic) UIButton *commentButton; // @synthesize commentButton=_commentButton;
@property(retain, nonatomic) UIButton *iconControl; // @synthesize iconControl=_iconControl;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)updateModel:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end
