//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSString, QSMatchPushFocusMatchesContentVideoCollectionItem, QSViewController, QSWebImageView, UIButton;

__attribute__((visibility("hidden")))
@interface QSMatchPushFocusMatchesVideoCollectionVideoView : UIView
{
    QSViewController *_viewController;
    QSMatchPushFocusMatchesContentVideoCollectionItem *_videoCollectionItem;
    NSString *_vid;
    NSString *_imgUrl;
    UIButton *_playBtn;
    QSWebImageView *_pictureView;
}

@property(retain, nonatomic) QSWebImageView *pictureView; // @synthesize pictureView=_pictureView;
@property(retain, nonatomic) UIButton *playBtn; // @synthesize playBtn=_playBtn;
@property(retain, nonatomic) NSString *imgUrl; // @synthesize imgUrl=_imgUrl;
@property(retain, nonatomic) NSString *vid; // @synthesize vid=_vid;
@property(retain, nonatomic) QSMatchPushFocusMatchesContentVideoCollectionItem *videoCollectionItem; // @synthesize videoCollectionItem=_videoCollectionItem;
@property(nonatomic) __weak QSViewController *viewController; // @synthesize viewController=_viewController;
- (void).cxx_destruct;
- (void)handlePlayBtnPress:(id)arg1;
- (void)pictureViewTapped:(id)arg1;
- (void)videoCellDisappearShouldSavePossibleExistedVideoCurrentDuration;
- (void)updateWithVideoPic:(id)arg1 andVid:(id)arg2;
- (id)initWithFrame:(struct CGRect)arg1;

@end
