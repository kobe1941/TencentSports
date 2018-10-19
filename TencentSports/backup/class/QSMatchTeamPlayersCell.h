//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

@class NSMutableArray, QSMatchStatePlayerStat, QSMatchTeamPlayersMoreView;
@protocol QSMatchTeamPlayersCellDelegate;

__attribute__((visibility("hidden")))
@interface QSMatchTeamPlayersCell : UITableViewCell
{
    QSMatchStatePlayerStat *_playerStat;
    id <QSMatchTeamPlayersCellDelegate> _delegate;
    NSMutableArray *_headerViews;
    NSMutableArray *_contentViews;
    QSMatchTeamPlayersMoreView *_moreView;
}

+ (double)heightWithModel:(id)arg1;
@property(retain, nonatomic) QSMatchTeamPlayersMoreView *moreView; // @synthesize moreView=_moreView;
@property(retain, nonatomic) NSMutableArray *contentViews; // @synthesize contentViews=_contentViews;
@property(retain, nonatomic) NSMutableArray *headerViews; // @synthesize headerViews=_headerViews;
@property(nonatomic) __weak id <QSMatchTeamPlayersCellDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) QSMatchStatePlayerStat *playerStat; // @synthesize playerStat=_playerStat;
- (void).cxx_destruct;
- (void)tap:(id)arg1;
- (void)update;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end
