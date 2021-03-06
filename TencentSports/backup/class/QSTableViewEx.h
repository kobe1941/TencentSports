//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "QSTableView.h"

@protocol QSSignedInCardDelegate;

__attribute__((visibility("hidden")))
@interface QSTableViewEx : QSTableView
{
    _Bool _showSignedInCard;
    id <QSSignedInCardDelegate> _signedInCardDelegate;
}

@property(nonatomic) _Bool showSignedInCard; // @synthesize showSignedInCard=_showSignedInCard;
@property(nonatomic) __weak id <QSSignedInCardDelegate> signedInCardDelegate; // @synthesize signedInCardDelegate=_signedInCardDelegate;
- (void).cxx_destruct;
- (void)signedInCardDisplay:(_Bool)arg1 withAnimation:(_Bool)arg2;
- (void)setContentInset:(struct UIEdgeInsets)arg1;
- (void)setSignedInStateSuccess:(_Bool)arg1;
- (double)pullToRefreshViewHeight;
- (void)createPullToRefreshView;
- (double)exHeadHeigh;
- (void)finishedLoading;
- (void)scrollViewDidScroll;
- (void)setContentOffset:(struct CGPoint)arg1;
- (void)setContentSize:(struct CGSize)arg1;
- (void)reloadData;
- (id)initWithFrame:(struct CGRect)arg1 style:(long long)arg2;

@end

