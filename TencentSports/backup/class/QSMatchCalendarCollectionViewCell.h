//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UICollectionViewCell.h>

@class QSMatchCalendarItem, UIButton, UIImageView, UILabel;
@protocol QSMatchCalendarCollectionViewCellDelegate;

__attribute__((visibility("hidden")))
@interface QSMatchCalendarCollectionViewCell : UICollectionViewCell
{
    id <QSMatchCalendarCollectionViewCellDelegate> _delegate;
    QSMatchCalendarItem *_matchCalendarItem;
    UIButton *_bgButton;
    UILabel *_calendarLabel;
    UILabel *_matchNumLabel;
    UIImageView *_attendImageView;
}

@property(retain, nonatomic) UIImageView *attendImageView; // @synthesize attendImageView=_attendImageView;
@property(retain, nonatomic) UILabel *matchNumLabel; // @synthesize matchNumLabel=_matchNumLabel;
@property(retain, nonatomic) UILabel *calendarLabel; // @synthesize calendarLabel=_calendarLabel;
@property(retain, nonatomic) UIButton *bgButton; // @synthesize bgButton=_bgButton;
@property(retain, nonatomic) QSMatchCalendarItem *matchCalendarItem; // @synthesize matchCalendarItem=_matchCalendarItem;
@property(nonatomic) __weak id <QSMatchCalendarCollectionViewCellDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)clickedBtnMainBg:(id)arg1;
- (void)refreshUI;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)dealloc;

@end
