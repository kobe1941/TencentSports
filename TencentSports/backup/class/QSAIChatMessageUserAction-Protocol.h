//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class QSAIChatReceivedBaseView, UIButton;

@protocol QSAIChatMessageUserAction <NSObject>

@optional
- (void)actionContentClicked:(QSAIChatReceivedBaseView *)arg1;
- (void)actionToNext:(id)arg1;
- (void)actionRevealDetail:(id)arg1;
- (void)actionNO:(UIButton *)arg1;
- (void)actionYes:(UIButton *)arg1;
@end
