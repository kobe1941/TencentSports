//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSString, QSWebImageView, UILabel;

__attribute__((visibility("hidden")))
@interface QSOlympicPlayerView : UIView
{
    NSString *_avatarUrl;
    NSString *_subscriptUrl;
    QSWebImageView *_avatarView;
    QSWebImageView *_subscriptView;
    UILabel *_nameLabel;
    double _avatarWidth;
}

@property(nonatomic) double avatarWidth; // @synthesize avatarWidth=_avatarWidth;
@property(retain, nonatomic) UILabel *nameLabel; // @synthesize nameLabel=_nameLabel;
@property(retain, nonatomic) QSWebImageView *subscriptView; // @synthesize subscriptView=_subscriptView;
@property(retain, nonatomic) QSWebImageView *avatarView; // @synthesize avatarView=_avatarView;
@property(copy, nonatomic) NSString *subscriptUrl; // @synthesize subscriptUrl=_subscriptUrl;
@property(copy, nonatomic) NSString *avatarUrl; // @synthesize avatarUrl=_avatarUrl;
- (void).cxx_destruct;
- (void)setFrame:(struct CGRect)arg1;
@property(copy, nonatomic) NSString *name; // @dynamic name;
- (void)createSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

