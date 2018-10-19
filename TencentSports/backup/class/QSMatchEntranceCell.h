//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

#import "QSCycleViewDelegate-Protocol.h"
#import "QSHomeRecommendCellProtocol-Protocol.h"

@class NSObject, NSString, QSCycleView;

__attribute__((visibility("hidden")))
@interface QSMatchEntranceCell : UITableViewCell <QSCycleViewDelegate, QSHomeRecommendCellProtocol>
{
    QSCycleView *_cycleView;
    NSObject *_info;
    id _delegate;
}

+ (double)cellHeightWithInfo:(id)arg1;
@property(nonatomic) __weak id delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) NSObject *info; // @synthesize info=_info;
@property(retain, nonatomic) QSCycleView *cycleView; // @synthesize cycleView=_cycleView;
- (void).cxx_destruct;
- (void)cycleView:(id)arg1 didSelectItemAtIndex:(unsigned long long)arg2;
- (id)cycleView:(id)arg1 cellForRowAtIndex:(unsigned long long)arg2;
- (unsigned long long)numberOfItemsInCycleView:(id)arg1;
- (void)updateWithInfo:(id)arg1;
- (void)layoutSubviews;
- (void)loadSubviews;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

