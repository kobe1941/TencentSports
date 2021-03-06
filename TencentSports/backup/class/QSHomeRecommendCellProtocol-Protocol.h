//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSObject, QSHomePageFeedNavigator, UIGestureRecognizer, UITableView;

@protocol QSHomeRecommendCellProtocol <NSObject>
+ (double)cellHeightWithInfo:(NSObject *)arg1;
- (void)updateWithInfo:(NSObject *)arg1;

@optional
+ (_Bool)donotJumpWhenUserPressed;
+ (_Bool)checkDataCorrectness:(NSObject *)arg1;
- (void)updateSeparatorLineFrame:(struct CGRect)arg1;
- (UIGestureRecognizer *)perferredGesture;
- (void)setTableView:(UITableView *)arg1;
- (void)setDelegate:(id)arg1;
- (void)setNavigator:(QSHomePageFeedNavigator *)arg1;
@end

