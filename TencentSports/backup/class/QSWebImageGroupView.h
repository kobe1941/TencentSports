//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIImageView.h>

@class QSImageGroupRequest, UIImage;

__attribute__((visibility("hidden")))
@interface QSWebImageGroupView : UIImageView
{
    UIImage *_defaultImage;
    long long _imageContentMode;
    QSImageGroupRequest *_imageGroupRequest;
}

@property(retain, nonatomic) QSImageGroupRequest *imageGroupRequest; // @synthesize imageGroupRequest=_imageGroupRequest;
@property(nonatomic) long long imageContentMode; // @synthesize imageContentMode=_imageContentMode;
@property(retain, nonatomic) UIImage *defaultImage; // @synthesize defaultImage=_defaultImage;
- (void).cxx_destruct;
- (void)stopGettingImage;
- (id)modifiedImageWithImages:(id)arg1;
- (void)dealloc;
- (void)clearImage;
- (void)setImageWithURLs:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)init;

@end
