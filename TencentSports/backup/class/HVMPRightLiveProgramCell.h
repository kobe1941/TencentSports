//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

@class QLLiveProgramItem, UIImageView;

@interface HVMPRightLiveProgramCell : UITableViewCell
{
    UIImageView *programIconView;
    UIImageView *vLineViewTop;
    UIImageView *vLineViewBottom;
    _Bool _hideTopLine;
    _Bool _hideBottomLine;
    _Bool _hideIcon;
    QLLiveProgramItem *_programItem;
}

+ (double)cellHeight;
@property(nonatomic) _Bool hideIcon; // @synthesize hideIcon=_hideIcon;
@property(nonatomic) _Bool hideBottomLine; // @synthesize hideBottomLine=_hideBottomLine;
@property(nonatomic) _Bool hideTopLine; // @synthesize hideTopLine=_hideTopLine;
@property(retain, nonatomic) QLLiveProgramItem *programItem; // @synthesize programItem=_programItem;
- (void)dealloc;
- (void)setPlayState:(unsigned long long)arg1;
- (void)layoutSubviews;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

