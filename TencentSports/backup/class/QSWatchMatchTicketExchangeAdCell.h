//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "QSWatchMatchTicketExchangeCell.h"

@class UILabel;

__attribute__((visibility("hidden")))
@interface QSWatchMatchTicketExchangeAdCell : QSWatchMatchTicketExchangeCell
{
    UILabel *_topTextLabel;
    UILabel *_bottomTextLabel;
}

+ (double)heightWithWatchMatchTicketExchangeListInfoAd:(id)arg1;
+ (id)getReuseIdentifier;
@property(retain, nonatomic) UILabel *bottomTextLabel; // @synthesize bottomTextLabel=_bottomTextLabel;
@property(retain, nonatomic) UILabel *topTextLabel; // @synthesize topTextLabel=_topTextLabel;
- (void).cxx_destruct;
- (void)updateLayoutWithWatchMatchTicketExchangeListInfoAd:(id)arg1;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end
