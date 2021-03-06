//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class QSMatchItem, QSMoreMatchItem, QSWebImageView, UIButton, UIImageView, UILabel;

__attribute__((visibility("hidden")))
@interface QSHomeMatchItemVSView : UIView
{
    UILabel *_matchTypeLabel;
    UIImageView *_vipTagView;
    QSWebImageView *_homeTeamIconView;
    QSWebImageView *_awayTeamIconView;
    UILabel *_homeTeamNameLabel;
    UILabel *_awayTeamNameLabel;
    UILabel *_matchScoreLabel;
    UILabel *_matchDateLabel;
    UIButton *_matchStateButton;
    UILabel *_leftTeamPlayoffScoreLabel;
    UILabel *_rightTeamPlayoffScoreLabel;
    QSMoreMatchItem *_moreMatchItem;
    QSMatchItem *_info;
}

@property(retain, nonatomic) QSMatchItem *info; // @synthesize info=_info;
@property(retain, nonatomic) QSMoreMatchItem *moreMatchItem; // @synthesize moreMatchItem=_moreMatchItem;
@property(retain, nonatomic) UILabel *rightTeamPlayoffScoreLabel; // @synthesize rightTeamPlayoffScoreLabel=_rightTeamPlayoffScoreLabel;
@property(retain, nonatomic) UILabel *leftTeamPlayoffScoreLabel; // @synthesize leftTeamPlayoffScoreLabel=_leftTeamPlayoffScoreLabel;
@property(retain, nonatomic) UIButton *matchStateButton; // @synthesize matchStateButton=_matchStateButton;
@property(retain, nonatomic) UILabel *matchDateLabel; // @synthesize matchDateLabel=_matchDateLabel;
@property(retain, nonatomic) UILabel *matchScoreLabel; // @synthesize matchScoreLabel=_matchScoreLabel;
@property(retain, nonatomic) UILabel *awayTeamNameLabel; // @synthesize awayTeamNameLabel=_awayTeamNameLabel;
@property(retain, nonatomic) UILabel *homeTeamNameLabel; // @synthesize homeTeamNameLabel=_homeTeamNameLabel;
@property(retain, nonatomic) QSWebImageView *awayTeamIconView; // @synthesize awayTeamIconView=_awayTeamIconView;
@property(retain, nonatomic) QSWebImageView *homeTeamIconView; // @synthesize homeTeamIconView=_homeTeamIconView;
@property(retain, nonatomic) UIImageView *vipTagView; // @synthesize vipTagView=_vipTagView;
@property(retain, nonatomic) UILabel *matchTypeLabel; // @synthesize matchTypeLabel=_matchTypeLabel;
- (void).cxx_destruct;
- (void)updateMatchState;
- (void)updateWithInfo:(id)arg1 isPay:(_Bool)arg2;
- (void)updateWithMoreMatchItem:(id)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)matchStateButtonDidTap:(id)arg1;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

@end

