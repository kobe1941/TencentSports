//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "QSCellView.h"

@class QSAvatarView;

__attribute__((visibility("hidden")))
@interface QSScoreIconsCellView : QSCellView
{
    QSAvatarView *_topIcon;
    QSAvatarView *_bottomIcon;
}

@property(retain, nonatomic) QSAvatarView *bottomIcon; // @synthesize bottomIcon=_bottomIcon;
@property(retain, nonatomic) QSAvatarView *topIcon; // @synthesize topIcon=_topIcon;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

