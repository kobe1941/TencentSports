//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "QSFullScreenTipView.h"

@protocol QSDiamondTransferTipViewDelegate;

__attribute__((visibility("hidden")))
@interface QSDiamondTransferTipView : QSFullScreenTipView
{
    id <QSDiamondTransferTipViewDelegate> _delegate;
}

@property(nonatomic) __weak id <QSDiamondTransferTipViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)transformPressed:(id)arg1;
- (void)clickedCancelButton:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

