//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class QSCustomContentButton;
@protocol QSRankListScheduleViewDelegate;

__attribute__((visibility("hidden")))
@interface QSRankListScheduleView : UIView
{
    id <QSRankListScheduleViewDelegate> _delegate;
    QSCustomContentButton *_rankListButton;
    QSCustomContentButton *_scheduleButton;
    UIView *_verticalSeperatorLine;
    UIView *_horizontalSeperatorLine;
}

+ (double)horizontalSeperatorLineHeight;
+ (double)verticalSeperatorLineWidth;
@property(retain, nonatomic) UIView *horizontalSeperatorLine; // @synthesize horizontalSeperatorLine=_horizontalSeperatorLine;
@property(retain, nonatomic) UIView *verticalSeperatorLine; // @synthesize verticalSeperatorLine=_verticalSeperatorLine;
@property(retain, nonatomic) QSCustomContentButton *scheduleButton; // @synthesize scheduleButton=_scheduleButton;
@property(retain, nonatomic) QSCustomContentButton *rankListButton; // @synthesize rankListButton=_rankListButton;
@property(nonatomic) __weak id <QSRankListScheduleViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)schedulePressed:(id)arg1;
- (void)rankPressed:(id)arg1;
- (void)update;
- (id)rankListButtonImage;
- (id)rankListButtonTitle;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

