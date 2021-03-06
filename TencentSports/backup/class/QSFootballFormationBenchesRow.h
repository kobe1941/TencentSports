//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSString, QSFootballFormationBubble, QSMatchDetailFootballFormationPlayer, QSWebImageViewEx, UIColor, UIImageView, UILabel;

__attribute__((visibility("hidden")))
@interface QSFootballFormationBenchesRow : UIView
{
    _Bool _isTeamRow;
    QSWebImageViewEx *_homeTeamLogo;
    QSWebImageViewEx *_awayTeamLogo;
    UILabel *_leftNameLabel;
    UILabel *_rightNameLabel;
    UIImageView *_leftPlayerImageView;
    UILabel *_leftPlayerLabel;
    UIImageView *_rightPlayerImageView;
    UILabel *_rightPlayerLabel;
    NSString *_homeTeamLogoUrl;
    NSString *_awayTeamLogoUrl;
    NSString *_homePlayerNum;
    NSString *_awayPlayerNum;
    NSString *_homeName;
    NSString *_awayName;
    UIColor *_homeColor;
    UIColor *_awayColor;
    QSWebImageViewEx *_homeRedYellowIcon1;
    QSWebImageViewEx *_homeRedYellowIcon2;
    QSFootballFormationBubble *_homeExchangeBubble1;
    QSFootballFormationBubble *_homeExchangeBubble2;
    QSFootballFormationBubble *_homeGoalBubble;
    QSFootballFormationBubble *_homeWulongBubble;
    QSFootballFormationBubble *_homeShootoutBubble;
    QSWebImageViewEx *_awayRedYellowIcon1;
    QSWebImageViewEx *_awayRedYellowIcon2;
    QSFootballFormationBubble *_awayExchangeBubble1;
    QSFootballFormationBubble *_awayExchangeBubble2;
    QSFootballFormationBubble *_awayGoalBubble;
    QSFootballFormationBubble *_awayWulongBubble;
    QSFootballFormationBubble *_awayShootoutBubble;
    QSMatchDetailFootballFormationPlayer *_homePlayer;
    QSMatchDetailFootballFormationPlayer *_awayPlayer;
    NSString *_leftUrl;
    NSString *_rightUrl;
}

@property(retain, nonatomic) NSString *rightUrl; // @synthesize rightUrl=_rightUrl;
@property(retain, nonatomic) NSString *leftUrl; // @synthesize leftUrl=_leftUrl;
@property(nonatomic) _Bool isTeamRow; // @synthesize isTeamRow=_isTeamRow;
@property(retain, nonatomic) QSMatchDetailFootballFormationPlayer *awayPlayer; // @synthesize awayPlayer=_awayPlayer;
@property(retain, nonatomic) QSMatchDetailFootballFormationPlayer *homePlayer; // @synthesize homePlayer=_homePlayer;
@property(retain, nonatomic) QSFootballFormationBubble *awayShootoutBubble; // @synthesize awayShootoutBubble=_awayShootoutBubble;
@property(retain, nonatomic) QSFootballFormationBubble *awayWulongBubble; // @synthesize awayWulongBubble=_awayWulongBubble;
@property(retain, nonatomic) QSFootballFormationBubble *awayGoalBubble; // @synthesize awayGoalBubble=_awayGoalBubble;
@property(retain, nonatomic) QSFootballFormationBubble *awayExchangeBubble2; // @synthesize awayExchangeBubble2=_awayExchangeBubble2;
@property(retain, nonatomic) QSFootballFormationBubble *awayExchangeBubble1; // @synthesize awayExchangeBubble1=_awayExchangeBubble1;
@property(retain, nonatomic) QSWebImageViewEx *awayRedYellowIcon2; // @synthesize awayRedYellowIcon2=_awayRedYellowIcon2;
@property(retain, nonatomic) QSWebImageViewEx *awayRedYellowIcon1; // @synthesize awayRedYellowIcon1=_awayRedYellowIcon1;
@property(retain, nonatomic) QSFootballFormationBubble *homeShootoutBubble; // @synthesize homeShootoutBubble=_homeShootoutBubble;
@property(retain, nonatomic) QSFootballFormationBubble *homeWulongBubble; // @synthesize homeWulongBubble=_homeWulongBubble;
@property(retain, nonatomic) QSFootballFormationBubble *homeGoalBubble; // @synthesize homeGoalBubble=_homeGoalBubble;
@property(retain, nonatomic) QSFootballFormationBubble *homeExchangeBubble2; // @synthesize homeExchangeBubble2=_homeExchangeBubble2;
@property(retain, nonatomic) QSFootballFormationBubble *homeExchangeBubble1; // @synthesize homeExchangeBubble1=_homeExchangeBubble1;
@property(retain, nonatomic) QSWebImageViewEx *homeRedYellowIcon2; // @synthesize homeRedYellowIcon2=_homeRedYellowIcon2;
@property(retain, nonatomic) QSWebImageViewEx *homeRedYellowIcon1; // @synthesize homeRedYellowIcon1=_homeRedYellowIcon1;
@property(retain, nonatomic) UIColor *awayColor; // @synthesize awayColor=_awayColor;
@property(retain, nonatomic) UIColor *homeColor; // @synthesize homeColor=_homeColor;
@property(retain, nonatomic) NSString *awayName; // @synthesize awayName=_awayName;
@property(retain, nonatomic) NSString *homeName; // @synthesize homeName=_homeName;
@property(retain, nonatomic) NSString *awayPlayerNum; // @synthesize awayPlayerNum=_awayPlayerNum;
@property(retain, nonatomic) NSString *homePlayerNum; // @synthesize homePlayerNum=_homePlayerNum;
@property(retain, nonatomic) NSString *awayTeamLogoUrl; // @synthesize awayTeamLogoUrl=_awayTeamLogoUrl;
@property(retain, nonatomic) NSString *homeTeamLogoUrl; // @synthesize homeTeamLogoUrl=_homeTeamLogoUrl;
@property(retain, nonatomic) UILabel *rightPlayerLabel; // @synthesize rightPlayerLabel=_rightPlayerLabel;
@property(retain, nonatomic) UIImageView *rightPlayerImageView; // @synthesize rightPlayerImageView=_rightPlayerImageView;
@property(retain, nonatomic) UILabel *leftPlayerLabel; // @synthesize leftPlayerLabel=_leftPlayerLabel;
@property(retain, nonatomic) UIImageView *leftPlayerImageView; // @synthesize leftPlayerImageView=_leftPlayerImageView;
@property(retain, nonatomic) UILabel *rightNameLabel; // @synthesize rightNameLabel=_rightNameLabel;
@property(retain, nonatomic) UILabel *leftNameLabel; // @synthesize leftNameLabel=_leftNameLabel;
@property(retain, nonatomic) QSWebImageViewEx *awayTeamLogo; // @synthesize awayTeamLogo=_awayTeamLogo;
@property(retain, nonatomic) QSWebImageViewEx *homeTeamLogo; // @synthesize homeTeamLogo=_homeTeamLogo;
- (void).cxx_destruct;
- (void)update;
- (void)benchesRawTaped:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

