//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

@class QSHomeVideoCommentInfoSubContent, QSHomeVideoSubContentView, QSVideoDetailTitleCellModel, UIView;

__attribute__((visibility("hidden")))
@interface QSVideoDetailTitleCell : UITableViewCell
{
    QSHomeVideoSubContentView *_subContent;
    QSHomeVideoCommentInfoSubContent *_commentContent;
    QSVideoDetailTitleCellModel *_cellModel;
    UIView *_seperator;
}

+ (id)actionsWillBePerformed;
+ (double)heightWithModel:(id)arg1;
+ (Class)_subContentClassWithModel:(id)arg1;
@property(retain, nonatomic) UIView *seperator; // @synthesize seperator=_seperator;
@property(retain, nonatomic) QSVideoDetailTitleCellModel *cellModel; // @synthesize cellModel=_cellModel;
@property(retain, nonatomic) QSHomeVideoCommentInfoSubContent *commentContent; // @synthesize commentContent=_commentContent;
@property(readonly, nonatomic) QSHomeVideoSubContentView *subContent; // @synthesize subContent=_subContent;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)likeButtonPresed;
- (void)sharedButtonPressed;
- (void)commentButtonPressed;
- (void)linkButtonPresed;
- (void)iconButtonPresed;
- (void)updateWithModel:(id)arg1;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

