//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class QSComTopicDetailReplyTitleCell, QSComTopicUserItem, UIButton;

@protocol QSComTopicDetailReplyTitleCellDelegate <NSObject>
- (void)replyTitleCell:(QSComTopicDetailReplyTitleCell *)arg1 didTapSupportButton:(UIButton *)arg2;
- (void)replyTitleCell:(QSComTopicDetailReplyTitleCell *)arg1 didTapUser:(QSComTopicUserItem *)arg2;
@end

