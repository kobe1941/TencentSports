//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

@class QSMatchItem;

__attribute__((visibility("hidden")))
@interface QSRoundVSScoreCell : UITableViewCell
{
    QSMatchItem *_matchVSInfo;
}

+ (id)defaultCellIdentifier;
+ (double)height;
@property(retain, nonatomic) QSMatchItem *matchVSInfo; // @synthesize matchVSInfo=_matchVSInfo;
- (void).cxx_destruct;
- (void)updateWithMatchVSInfo:(id)arg1;
- (void)drawRect:(struct CGRect)arg1;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end
