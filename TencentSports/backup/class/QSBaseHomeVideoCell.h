//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

#import "QSTableviewCellProtocolEx-Protocol.h"

@class NSString, UIView;

__attribute__((visibility("hidden")))
@interface QSBaseHomeVideoCell : UITableViewCell <QSTableviewCellProtocolEx>
{
    UIView *_topSeparatorView;
    UIView *_bottomSeparatorView;
    UIView *_customSelectedBGV;
}

+ (double)heightWithModel:(id)arg1;
+ (double)heightWithWidth:(double)arg1 modal:(id)arg2;
@property(retain, nonatomic) UIView *customSelectedBGV; // @synthesize customSelectedBGV=_customSelectedBGV;
@property(retain, nonatomic) UIView *bottomSeparatorView; // @synthesize bottomSeparatorView=_bottomSeparatorView;
@property(retain, nonatomic) UIView *topSeparatorView; // @synthesize topSeparatorView=_topSeparatorView;
- (void).cxx_destruct;
- (void)displayLayer:(id)arg1;
- (void)actionDidHandleWithType:(id)arg1;
- (void)setCellModel:(id)arg1;
- (id)cellModel;
- (void)updateWithModel:(id)arg1;
- (void)updateWithCellModel:(id)arg1;
- (void)layoutSubviews;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)dealloc;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 model:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

