//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface QSPlayerRanklistBasketballTitleCell : UITableViewCell
{
    NSString *_playerStr;
    NSString *_teamStr;
    NSString *_scoreStr;
}

+ (id)defaultCellIdentifier;
+ (double)height;
@property(retain, nonatomic) NSString *scoreStr; // @synthesize scoreStr=_scoreStr;
@property(retain, nonatomic) NSString *teamStr; // @synthesize teamStr=_teamStr;
@property(retain, nonatomic) NSString *playerStr; // @synthesize playerStr=_playerStr;
- (void).cxx_destruct;
- (void)updateWithTitleArray:(id)arg1;
- (void)drawRect:(struct CGRect)arg1;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

