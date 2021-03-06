//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "QSInputBar.h"

#import "QSExpandingTextViewDelegate-Protocol.h"

@class NSString, QSWebImageButton, UIButton;
@protocol QSLiveChatInputBarDelegate;

__attribute__((visibility("hidden")))
@interface QSLiveChatInputBar : QSInputBar <QSExpandingTextViewDelegate>
{
    _Bool _propsEntrance;
    NSString *_imageURL;
    UIButton *_emotionButton;
    UIButton *_keyboardButton;
    QSWebImageButton *_propsButton;
}

@property(retain, nonatomic) QSWebImageButton *propsButton; // @synthesize propsButton=_propsButton;
@property(retain, nonatomic) UIButton *keyboardButton; // @synthesize keyboardButton=_keyboardButton;
@property(retain, nonatomic) UIButton *emotionButton; // @synthesize emotionButton=_emotionButton;
@property(nonatomic) _Bool propsEntrance; // @synthesize propsEntrance=_propsEntrance;
@property(retain, nonatomic) NSString *imageURL; // @synthesize imageURL=_imageURL;
- (void).cxx_destruct;
- (id)getPlaceholerStr;
- (_Bool)expandingTextView:(id)arg1 shouldChangeTextInRange:(struct _NSRange)arg2 replacementText:(id)arg3;
- (void)setFrame:(struct CGRect)arg1;
- (void)update;
- (void)didChangeToMode:(unsigned long long)arg1;
- (void)propsPressed:(id)arg1;
- (void)keyboardPressed:(id)arg1;
- (void)emotionPressed:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(nonatomic) __weak id <QSLiveChatInputBarDelegate> delegate; // @dynamic delegate;

@end

