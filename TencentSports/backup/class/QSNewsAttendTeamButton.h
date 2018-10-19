//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class QSNewsTagItem, QSWebImageView, UIButton, UILabel;

__attribute__((visibility("hidden")))
@interface QSNewsAttendTeamButton : UIView
{
    QSWebImageView *_logoImageView;
    UILabel *_nameLabel;
    UIButton *_attendButton;
    QSNewsTagItem *_tagItem;
    long long _skinMode;
}

@property(nonatomic) long long skinMode; // @synthesize skinMode=_skinMode;
@property(retain, nonatomic) QSNewsTagItem *tagItem; // @synthesize tagItem=_tagItem;
@property(retain, nonatomic) UIButton *attendButton; // @synthesize attendButton=_attendButton;
@property(retain, nonatomic) UILabel *nameLabel; // @synthesize nameLabel=_nameLabel;
@property(retain, nonatomic) QSWebImageView *logoImageView; // @synthesize logoImageView=_logoImageView;
- (void).cxx_destruct;
- (void)setBlackSkin;
- (void)onTeamButtonClicked:(id)arg1;
- (void)updateAttended;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

@end
