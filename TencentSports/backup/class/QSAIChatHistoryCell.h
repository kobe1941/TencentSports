//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

@class QSAIChatHistoryItem, UIImageView, UILabel;
@protocol QSAIChatHistoryCellDelegate;

__attribute__((visibility("hidden")))
@interface QSAIChatHistoryCell : UITableViewCell
{
    id <QSAIChatHistoryCellDelegate> _delegate;
    QSAIChatHistoryItem *_item;
    UIImageView *_bgView;
    UILabel *_contentLabel;
    UIImageView *_leftIcon;
    UIImageView *_rightIcon;
    UILabel *_rightLabel;
}

+ (id)backgroundImageWithColor:(id)arg1;
+ (double)contentLabelMaxWdithWithItem:(id)arg1;
+ (double)heightWithItem:(id)arg1;
@property(retain, nonatomic) UILabel *rightLabel; // @synthesize rightLabel=_rightLabel;
@property(retain, nonatomic) UIImageView *rightIcon; // @synthesize rightIcon=_rightIcon;
@property(retain, nonatomic) UIImageView *leftIcon; // @synthesize leftIcon=_leftIcon;
@property(retain, nonatomic) UILabel *contentLabel; // @synthesize contentLabel=_contentLabel;
@property(retain, nonatomic) UIImageView *bgView; // @synthesize bgView=_bgView;
@property(retain, nonatomic) QSAIChatHistoryItem *item; // @synthesize item=_item;
@property(nonatomic) __weak id <QSAIChatHistoryCellDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)updateWithItem:(id)arg1;
- (void)bgViewTapped:(id)arg1;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

