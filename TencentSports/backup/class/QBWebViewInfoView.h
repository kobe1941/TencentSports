//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSString, UIImageView, UILabel;

__attribute__((visibility("hidden")))
@interface QBWebViewInfoView : UIView
{
    NSString *_url;
    UILabel *_preLabel;
    UILabel *_hostLabel;
    UILabel *_suffixLabel;
    UILabel *_X5Label;
    UIImageView *_icon;
}

@property(retain, nonatomic) UIImageView *icon; // @synthesize icon=_icon;
@property(retain, nonatomic) UILabel *X5Label; // @synthesize X5Label=_X5Label;
@property(retain, nonatomic) UILabel *suffixLabel; // @synthesize suffixLabel=_suffixLabel;
@property(retain, nonatomic) UILabel *hostLabel; // @synthesize hostLabel=_hostLabel;
@property(retain, nonatomic) UILabel *preLabel; // @synthesize preLabel=_preLabel;
@property(retain, nonatomic) NSString *url; // @synthesize url=_url;
- (void).cxx_destruct;
- (id)webViewInfoIconImage;
- (struct CGSize)mttSizeWithFont:(id)arg1 constrainedToSize:(struct CGSize)arg2 forString:(id)arg3;
- (void)updateInfoWithUrl:(id)arg1;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1 url:(id)arg2;
- (id)initWithFrame:(struct CGRect)arg1;

@end

