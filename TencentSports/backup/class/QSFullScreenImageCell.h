//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "QSCellView.h"

#import "QSShareKitDelegate-Protocol.h"
#import "UIActionSheetDelegate-Protocol.h"

@class NSString, QSCircleProgressView, QSImageDetailPageView, UIImageView, UILongPressGestureRecognizer;
@protocol QSFullScreenImageCellDelegate;

__attribute__((visibility("hidden")))
@interface QSFullScreenImageCell : QSCellView <QSShareKitDelegate, UIActionSheetDelegate>
{
    _Bool _isGif;
    long long _state;
    id <QSFullScreenImageCellDelegate> _delegate;
    QSCircleProgressView *_progressView;
    QSImageDetailPageView *_imageView;
    UILongPressGestureRecognizer *_saveGestureRecognizer;
    UIImageView *_defaultImageView;
    NSString *_imageURL;
}

+ (id)imageBaseURL;
@property(nonatomic) _Bool isGif; // @synthesize isGif=_isGif;
@property(retain, nonatomic) NSString *imageURL; // @synthesize imageURL=_imageURL;
@property(retain, nonatomic) UIImageView *defaultImageView; // @synthesize defaultImageView=_defaultImageView;
@property(retain, nonatomic) UILongPressGestureRecognizer *saveGestureRecognizer; // @synthesize saveGestureRecognizer=_saveGestureRecognizer;
@property(retain, nonatomic) QSImageDetailPageView *imageView; // @synthesize imageView=_imageView;
@property(retain, nonatomic) QSCircleProgressView *progressView; // @synthesize progressView=_progressView;
@property(nonatomic) __weak id <QSFullScreenImageCellDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) long long state; // @synthesize state=_state;
- (void).cxx_destruct;
- (id)infoWillBeReportedToBoss;
- (id)infoWillBeShared;
- (void)share;
- (_Bool)canShare;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)longPressAction:(id)arg1;
- (void)saveImage;
- (void)didFinishSaving:(_Bool)arg1 error:(id)arg2;
- (void)image:(id)arg1 didFinishSavingWithError:(id)arg2 contextInfo:(void *)arg3;
- (void)reloadWithImageURL:(id)arg1 isGif:(_Bool)arg2;
- (void)dealloc;
- (void)setDefaultImage:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

