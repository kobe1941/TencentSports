//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

@class UIActivityIndicatorView, UILabel;

__attribute__((visibility("hidden")))
@interface QSProjectionSearchingTableViewCell : UITableViewCell
{
    UILabel *_textLabel1;
    UIActivityIndicatorView *_loadingView;
}

@property(retain, nonatomic) UIActivityIndicatorView *loadingView; // @synthesize loadingView=_loadingView;
@property(retain, nonatomic) UILabel *textLabel1; // @synthesize textLabel1=_textLabel1;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

