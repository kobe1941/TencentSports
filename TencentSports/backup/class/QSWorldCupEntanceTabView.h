//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSArray, QSCustomButton;

__attribute__((visibility("hidden")))
@interface QSWorldCupEntanceTabView : UIView
{
    NSArray *_tabInfos;
    QSCustomButton *_firstButton;
}

@property(nonatomic) __weak QSCustomButton *firstButton; // @synthesize firstButton=_firstButton;
@property(retain, nonatomic) NSArray *tabInfos; // @synthesize tabInfos=_tabInfos;
- (void).cxx_destruct;
- (void)removeAllSubviews;
- (void)buttonDidTap:(id)arg1;
@property(readonly, nonatomic) double visualLeftMargin; // @dynamic visualLeftMargin;

@end
