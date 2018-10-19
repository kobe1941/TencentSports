//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class LOTAnimationView, NSObject, QSAIChatAchievementItem, QSWebImageViewEx, UIButton, UIImageView, UILabel;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface QSAIChatEggDisplayView : UIView
{
    NSObject<OS_dispatch_queue> *_fileQueue;
    LOTAnimationView *_dogView;
    QSAIChatAchievementItem *_item;
    UIImageView *_topBlockView;
    UIImageView *_bottomBlockView;
    QSWebImageViewEx *_iconView;
    UILabel *_nameLabel;
    UILabel *_secretLabel;
    UILabel *_descLabel;
    UIButton *_shareBtn;
    UIButton *_closeBtn;
}

+ (id)bottomBlockImage;
+ (id)topBlockImage;
@property(retain, nonatomic) UIButton *closeBtn; // @synthesize closeBtn=_closeBtn;
@property(retain, nonatomic) UIButton *shareBtn; // @synthesize shareBtn=_shareBtn;
@property(retain, nonatomic) UILabel *descLabel; // @synthesize descLabel=_descLabel;
@property(retain, nonatomic) UILabel *secretLabel; // @synthesize secretLabel=_secretLabel;
@property(retain, nonatomic) UILabel *nameLabel; // @synthesize nameLabel=_nameLabel;
@property(retain, nonatomic) QSWebImageViewEx *iconView; // @synthesize iconView=_iconView;
@property(retain, nonatomic) UIImageView *bottomBlockView; // @synthesize bottomBlockView=_bottomBlockView;
@property(retain, nonatomic) UIImageView *topBlockView; // @synthesize topBlockView=_topBlockView;
@property(retain, nonatomic) QSAIChatAchievementItem *item; // @synthesize item=_item;
@property(retain, nonatomic) LOTAnimationView *dogView; // @synthesize dogView=_dogView;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *fileQueue; // @synthesize fileQueue=_fileQueue;
- (void).cxx_destruct;
- (void)closeClicked:(id)arg1;
- (void)shareClicked:(id)arg1;
- (void)updateWithItem:(id)arg1;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

@end
