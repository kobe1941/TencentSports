//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSString, QSWebImageView, UILabel;

__attribute__((visibility("hidden")))
@interface QSTextLiveGeneralLinkView : UIView
{
    NSString *_iconUrl;
    NSString *_title;
    NSString *_subTitle;
    QSWebImageView *_playerIconImageView;
    UILabel *_playerNameLabel;
    UILabel *_playerDescLabel;
}

@property(retain, nonatomic) UILabel *playerDescLabel; // @synthesize playerDescLabel=_playerDescLabel;
@property(retain, nonatomic) UILabel *playerNameLabel; // @synthesize playerNameLabel=_playerNameLabel;
@property(retain, nonatomic) QSWebImageView *playerIconImageView; // @synthesize playerIconImageView=_playerIconImageView;
@property(retain, nonatomic) NSString *subTitle; // @synthesize subTitle=_subTitle;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
@property(retain, nonatomic) NSString *iconUrl; // @synthesize iconUrl=_iconUrl;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect)arg1;

@end

