//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "QSInputBar.h"

#import "QSTopicImageChooseViewDelegate-Protocol.h"

@class NSString, QSTopicImageChooseView, UIButton, UIView;
@protocol QSCommunityInputBarDelegate;

__attribute__((visibility("hidden")))
@interface QSCommunityInputBar : QSInputBar <QSTopicImageChooseViewDelegate>
{
    _Bool _supportMaskView;
    long long _displayMode;
    long long _maxImageCount;
    UIButton *_emotionButton;
    UIButton *_keyboardButton;
    UIButton *_addImgButton;
    QSTopicImageChooseView *_imageChooseView;
    UIView *_maskView;
}

@property(retain, nonatomic) UIView *maskView; // @synthesize maskView=_maskView;
@property(retain, nonatomic) QSTopicImageChooseView *imageChooseView; // @synthesize imageChooseView=_imageChooseView;
@property(retain, nonatomic) UIButton *addImgButton; // @synthesize addImgButton=_addImgButton;
@property(retain, nonatomic) UIButton *keyboardButton; // @synthesize keyboardButton=_keyboardButton;
@property(retain, nonatomic) UIButton *emotionButton; // @synthesize emotionButton=_emotionButton;
@property(nonatomic) _Bool supportMaskView; // @synthesize supportMaskView=_supportMaskView;
@property(nonatomic) long long maxImageCount; // @synthesize maxImageCount=_maxImageCount;
@property(nonatomic) long long displayMode; // @synthesize displayMode=_displayMode;
- (void).cxx_destruct;
- (void)showMask;
- (void)onMaskTap:(id)arg1;
- (void)chooseImageSendAction:(id)arg1;
- (_Bool)needsRevertToChoosingImageState;
- (id)chooseImageURLs;
- (id)chooseImages;
- (void)removeAllImages;
- (void)layoutSubviews;
- (void)imagePressed:(id)arg1;
- (void)keyboardPressed:(id)arg1;
- (void)emotionPressed:(id)arg1;
- (void)didChangeToMode:(unsigned long long)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(nonatomic) __weak id <QSCommunityInputBarDelegate> delegate; // @dynamic delegate;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

