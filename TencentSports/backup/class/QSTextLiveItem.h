//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "QSModel.h"

@class NSArray, NSString, QSNewsListItem, QSTextLiveCommentStub, QSTextLiveCommentatorStub, QSTextLiveItemImages, QSTextLiveItemPage, QSTextLivePlayerStub;

__attribute__((visibility("hidden")))
@interface QSTextLiveItem : QSModel
{
    _Bool _unshowHeader;
    _Bool _shouldShowHeaderScore;
    _Bool _shouldAnimatePlusScore;
    _Bool _topIndex;
    NSString *_localCustomPlusScore;
    NSString *_localCustomPlusTeamId;
    NSString *_localCustomLeftTeamGoal;
    NSString *_localCustomRightTeamGoal;
    NSString *_textLiveId;
    long long _ctype;
    NSString *_time;
    NSString *_content;
    QSTextLiveCommentatorStub *_commentator;
    QSTextLiveCommentStub *_comment;
    NSArray *_event;
    QSTextLivePlayerStub *_player;
    QSNewsListItem *_video;
    QSTextLiveItemImages *_image;
    NSString *_teamId;
    NSString *_plus;
    NSString *_rightGoal;
    NSString *_leftGoal;
    NSString *_sendTime;
    NSString *_quarter;
    QSTextLiveItemPage *_page;
}

+ (id)ignoredPropertiesWhenEncoding;
@property(retain, nonatomic) QSTextLiveItemPage *page; // @synthesize page=_page;
@property(nonatomic) _Bool topIndex; // @synthesize topIndex=_topIndex;
@property(retain, nonatomic) NSString *quarter; // @synthesize quarter=_quarter;
@property(retain, nonatomic) NSString *sendTime; // @synthesize sendTime=_sendTime;
@property(retain, nonatomic) NSString *leftGoal; // @synthesize leftGoal=_leftGoal;
@property(retain, nonatomic) NSString *rightGoal; // @synthesize rightGoal=_rightGoal;
@property(retain, nonatomic) NSString *plus; // @synthesize plus=_plus;
@property(retain, nonatomic) NSString *teamId; // @synthesize teamId=_teamId;
@property(retain, nonatomic) QSTextLiveItemImages *image; // @synthesize image=_image;
@property(retain, nonatomic) QSNewsListItem *video; // @synthesize video=_video;
@property(retain, nonatomic) QSTextLivePlayerStub *player; // @synthesize player=_player;
@property(retain, nonatomic) NSArray *event; // @synthesize event=_event;
@property(retain, nonatomic) QSTextLiveCommentStub *comment; // @synthesize comment=_comment;
@property(retain, nonatomic) QSTextLiveCommentatorStub *commentator; // @synthesize commentator=_commentator;
@property(retain, nonatomic) NSString *content; // @synthesize content=_content;
@property(retain, nonatomic) NSString *time; // @synthesize time=_time;
@property(nonatomic) long long ctype; // @synthesize ctype=_ctype;
@property(retain, nonatomic) NSString *textLiveId; // @synthesize textLiveId=_textLiveId;
@property(retain, nonatomic) NSString *localCustomRightTeamGoal; // @synthesize localCustomRightTeamGoal=_localCustomRightTeamGoal;
@property(retain, nonatomic) NSString *localCustomLeftTeamGoal; // @synthesize localCustomLeftTeamGoal=_localCustomLeftTeamGoal;
@property(retain, nonatomic) NSString *localCustomPlusTeamId; // @synthesize localCustomPlusTeamId=_localCustomPlusTeamId;
@property(retain, nonatomic) NSString *localCustomPlusScore; // @synthesize localCustomPlusScore=_localCustomPlusScore;
@property(nonatomic) _Bool shouldAnimatePlusScore; // @synthesize shouldAnimatePlusScore=_shouldAnimatePlusScore;
@property(nonatomic) _Bool shouldShowHeaderScore; // @synthesize shouldShowHeaderScore=_shouldShowHeaderScore;
@property(nonatomic) _Bool unshowHeader; // @synthesize unshowHeader=_unshowHeader;
- (void).cxx_destruct;

@end

