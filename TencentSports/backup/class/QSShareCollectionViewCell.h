//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UICollectionViewCell.h>

@class QSSharePlatformButton;
@protocol QSShareCollectionViewCellDelegate;

__attribute__((visibility("hidden")))
@interface QSShareCollectionViewCell : UICollectionViewCell
{
    QSSharePlatformButton *_shareBtn;
    id <QSShareCollectionViewCellDelegate> _delegate;
}

@property(nonatomic) __weak id <QSShareCollectionViewCellDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) QSSharePlatformButton *shareBtn; // @synthesize shareBtn=_shareBtn;
- (void).cxx_destruct;
- (void)pressed:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

