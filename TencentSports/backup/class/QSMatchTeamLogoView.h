//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "QSAvatarView.h"

@class UIColor;

__attribute__((visibility("hidden")))
@interface QSMatchTeamLogoView : QSAvatarView
{
    UIColor *_innerRingColor;
    double _innerRingWidth;
    UIColor *_outRingColor;
    double _outRingWidth;
}

@property(nonatomic) double outRingWidth; // @synthesize outRingWidth=_outRingWidth;
@property(retain, nonatomic) UIColor *outRingColor; // @synthesize outRingColor=_outRingColor;
@property(nonatomic) double innerRingWidth; // @synthesize innerRingWidth=_innerRingWidth;
@property(retain, nonatomic) UIColor *innerRingColor; // @synthesize innerRingColor=_innerRingColor;
- (void).cxx_destruct;
- (id)modifiedIndentifier;
- (id)modifiedImageWithImage:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

