//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

@class QSVideoColumnsListVideoSingleSmallControl;

__attribute__((visibility("hidden")))
@interface QSVideoColumnsListSmallVideoCell : UITableViewCell
{
    QSVideoColumnsListVideoSingleSmallControl *_firstSmallControl;
    QSVideoColumnsListVideoSingleSmallControl *_secondSmallControl;
}

+ (double)heightWithFirstSingleVideoInfo:(id)arg1 secondSingleVideoInfo:(id)arg2;
+ (double)fixedWidth;
@property(retain, nonatomic) QSVideoColumnsListVideoSingleSmallControl *secondSmallControl; // @synthesize secondSmallControl=_secondSmallControl;
@property(retain, nonatomic) QSVideoColumnsListVideoSingleSmallControl *firstSmallControl; // @synthesize firstSmallControl=_firstSmallControl;
- (void).cxx_destruct;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

