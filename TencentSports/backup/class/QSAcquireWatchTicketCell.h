//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

@class NSString, UIImageView, UILabel, UIView;

__attribute__((visibility("hidden")))
@interface QSAcquireWatchTicketCell : UITableViewCell
{
    UILabel *_titleLabel;
    UIImageView *_arrowView;
    UIView *_separatorLine;
    _Bool _separatorLineHidden;
    NSString *_title;
}

+ (double)height;
@property(nonatomic) _Bool separatorLineHidden; // @synthesize separatorLineHidden=_separatorLineHidden;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
- (void).cxx_destruct;
- (void)updateUI;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

