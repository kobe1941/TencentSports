//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

#import "QSMatchPushFocusMatchesVideoCollectionMultipleButtonViewDelegate-Protocol.h"

@class NSString, QSMatchPushFocusMatchesContentVideoCollectionItem, QSMatchPushFocusMatchesVideoCollectionMultipleButtonView, QSMatchPushFocusMatchesVideoCollectionVideoView, QSViewController, UILabel, UIView;
@protocol QSMatchPushFocusMatchesVideoCollectionCellDelegate;

__attribute__((visibility("hidden")))
@interface QSMatchPushFocusMatchesVideoCollectionCell : UITableViewCell <QSMatchPushFocusMatchesVideoCollectionMultipleButtonViewDelegate>
{
    id <QSMatchPushFocusMatchesVideoCollectionCellDelegate> _delegate;
    QSViewController *_viewController;
    QSMatchPushFocusMatchesContentVideoCollectionItem *_videoCollectionItem;
    UILabel *_matchKindLabel;
    UILabel *_titleLabel;
    QSMatchPushFocusMatchesVideoCollectionVideoView *_videoView;
    UILabel *_contentLabel;
    QSMatchPushFocusMatchesVideoCollectionMultipleButtonView *_multipleButtonView;
    UIView *_viewAboveVideoView;
    UIView *_viewBelowVideoView;
}

+ (double)heightForVideoCollectionItemWithoutTitleHeight:(id)arg1;
+ (id)attributedStringWithVideoCollectionContent:(id)arg1;
@property(retain, nonatomic) UIView *viewBelowVideoView; // @synthesize viewBelowVideoView=_viewBelowVideoView;
@property(retain, nonatomic) UIView *viewAboveVideoView; // @synthesize viewAboveVideoView=_viewAboveVideoView;
@property(retain, nonatomic) QSMatchPushFocusMatchesVideoCollectionMultipleButtonView *multipleButtonView; // @synthesize multipleButtonView=_multipleButtonView;
@property(retain, nonatomic) UILabel *contentLabel; // @synthesize contentLabel=_contentLabel;
@property(retain, nonatomic) QSMatchPushFocusMatchesVideoCollectionVideoView *videoView; // @synthesize videoView=_videoView;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UILabel *matchKindLabel; // @synthesize matchKindLabel=_matchKindLabel;
@property(retain, nonatomic) QSMatchPushFocusMatchesContentVideoCollectionItem *videoCollectionItem; // @synthesize videoCollectionItem=_videoCollectionItem;
@property(nonatomic) __weak QSViewController *viewController; // @synthesize viewController=_viewController;
@property(nonatomic) __weak id <QSMatchPushFocusMatchesVideoCollectionCellDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)pushFocusMatchesVideoCollectionMultipleButtonViewDidPressThirdButton:(id)arg1;
- (void)pushFocusMatchesVideoCollectionMultipleButtonViewDidPressSecondButton:(id)arg1;
- (void)pushFocusMatchesVideoCollectionMultipleButtonViewDidPressfirstButton:(id)arg1;
- (void)videoCollectionCellClicked:(id)arg1;
- (double)heightForViewAboveVideoViewIncludeSeprateView;
- (void)videoCellDisappearShouldSavePossibleExistedVideoCurrentDuration;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

