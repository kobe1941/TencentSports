//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "QSViewController.h"

@class NSString, UIButton, UIImageView, UILabel;
@protocol QSWTLoginViewControllerDelegate;

__attribute__((visibility("hidden")))
@interface QSWTLoginViewController : QSViewController
{
    _Bool _forceWeiXinHidden;
    id <QSWTLoginViewControllerDelegate> _delegate;
    NSString *_tipTitle;
    NSString *_tipDetail;
    UIButton *_closeBtn;
    UIImageView *_logoImageView;
    UIButton *_qqBtn;
    UIButton *_weixinBtn;
    UIButton *_guestBtn;
    UILabel *_tipTitleLabel;
    UILabel *_tipDetailLabel;
}

@property(retain, nonatomic) UILabel *tipDetailLabel; // @synthesize tipDetailLabel=_tipDetailLabel;
@property(retain, nonatomic) UILabel *tipTitleLabel; // @synthesize tipTitleLabel=_tipTitleLabel;
@property(retain, nonatomic) UIButton *guestBtn; // @synthesize guestBtn=_guestBtn;
@property(retain, nonatomic) UIButton *weixinBtn; // @synthesize weixinBtn=_weixinBtn;
@property(retain, nonatomic) UIButton *qqBtn; // @synthesize qqBtn=_qqBtn;
@property(retain, nonatomic) UIImageView *logoImageView; // @synthesize logoImageView=_logoImageView;
@property(retain, nonatomic) UIButton *closeBtn; // @synthesize closeBtn=_closeBtn;
@property(copy, nonatomic) NSString *tipDetail; // @synthesize tipDetail=_tipDetail;
@property(copy, nonatomic) NSString *tipTitle; // @synthesize tipTitle=_tipTitle;
@property(nonatomic) _Bool forceWeiXinHidden; // @synthesize forceWeiXinHidden=_forceWeiXinHidden;
@property(nonatomic) __weak id <QSWTLoginViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)showLoginFinished;
- (void)readyToLogin;
- (void)finishLogin;
- (void)guestLogin:(id)arg1;
- (void)weixinLogin:(id)arg1;
- (void)qqLogin:(id)arg1;
- (void)clickedBtnClose:(id)arg1;
- (void)didReceiveMemoryWarning;
- (void)dealloc;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (long long)preferredStatusBarStyle;

@end

