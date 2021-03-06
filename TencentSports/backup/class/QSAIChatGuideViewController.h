//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "QSViewController.h"

#import "QSWebImageViewDelegate-Protocol.h"

@class NSString, QSWebImageViewEx, UIButton, UIImageView, UIScrollView;

__attribute__((visibility("hidden")))
@interface QSAIChatGuideViewController : QSViewController <QSWebImageViewDelegate>
{
    NSString *_guideUrl;
    CDUnknownBlockType _dismissBlock;
    UIImageView *_backgroudView;
    UIScrollView *_scrollView;
    QSWebImageViewEx *_imageView;
    UIButton *_closeBtn;
}

@property(retain, nonatomic) UIButton *closeBtn; // @synthesize closeBtn=_closeBtn;
@property(retain, nonatomic) QSWebImageViewEx *imageView; // @synthesize imageView=_imageView;
@property(retain, nonatomic) UIScrollView *scrollView; // @synthesize scrollView=_scrollView;
@property(retain, nonatomic) UIImageView *backgroudView; // @synthesize backgroudView=_backgroudView;
@property(copy, nonatomic) CDUnknownBlockType dismissBlock; // @synthesize dismissBlock=_dismissBlock;
@property(copy, nonatomic) NSString *guideUrl; // @synthesize guideUrl=_guideUrl;
- (void).cxx_destruct;
- (void)webImageViewDidFinishLoading:(id)arg1;
- (id)backgroundImage;
- (void)didReceiveMemoryWarning;
- (void)closeBtnClicked:(id)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

