//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSArray;

__attribute__((visibility("hidden")))
@interface QSMatchMedalsView : UIView
{
    NSArray *_medals;
}

@property(retain, nonatomic) NSArray *medals; // @synthesize medals=_medals;
- (void).cxx_destruct;
- (void)updateMedalsData:(id)arg1;
- (void)drawRect:(struct CGRect)arg1;
- (void)drawMedalInfo:(id)arg1 withTextFont:(id)arg2 withTextColor:(id)arg3 inFrame:(struct CGRect)arg4 withStartSpace:(float)arg5;
- (id)imageWithLevel:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end
