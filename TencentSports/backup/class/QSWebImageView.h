//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIImageView.h>

@class NSString, UIImage;
@protocol QSWebImageViewDelegate;

__attribute__((visibility("hidden")))
@interface QSWebImageView : UIImageView
{
    id <QSWebImageViewDelegate> _delegate;
    UIImage *_defaultImage;
    long long _imageContentMode;
    NSString *_url;
}

+ (id)imageBaseURL;
@property(retain, nonatomic) NSString *url; // @synthesize url=_url;
@property(nonatomic) long long imageContentMode; // @synthesize imageContentMode=_imageContentMode;
@property(retain, nonatomic) UIImage *defaultImage; // @synthesize defaultImage=_defaultImage;
@property(nonatomic) __weak id <QSWebImageViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (id)modifiedIndentifier;
- (id)modifiedImageWithImage:(id)arg1;
- (void)dealloc;
- (void)clearImage;
- (void)setImageWithURL:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

