//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

@class NSArray;
@protocol QSNewsArticleShareCellDelegate;

__attribute__((visibility("hidden")))
@interface QSNewsArticleShareCell : UITableViewCell
{
    id <QSNewsArticleShareCellDelegate> _delegate;
    NSArray *_targetArray;
    NSArray *_buttonArray;
}

+ (_Bool)checkDataCorrectness:(id)arg1;
+ (double)cellHeightWithInfo:(id)arg1;
@property(retain, nonatomic) NSArray *buttonArray; // @synthesize buttonArray=_buttonArray;
@property(retain, nonatomic) NSArray *targetArray; // @synthesize targetArray=_targetArray;
@property(nonatomic) __weak id <QSNewsArticleShareCellDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)buttonClicked:(id)arg1;
- (void)updateWithInfo:(id)arg1;
- (void)dealloc;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

