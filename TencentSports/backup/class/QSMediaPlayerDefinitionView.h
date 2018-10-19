//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "QSMediaTapView.h"

#import "QSPlayerOptionCellDelegate-Protocol.h"
#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"

@class NSArray, NSString, QSMediaFormatInfo, UITableView;
@protocol QSMediaPlayerDefinitionViewDelegate;

__attribute__((visibility("hidden")))
@interface QSMediaPlayerDefinitionView : QSMediaTapView <UITableViewDataSource, UITableViewDelegate, QSPlayerOptionCellDelegate>
{
    QSMediaFormatInfo *_currentFormat;
    NSArray *_formats;
    UITableView *_tableView;
}

@property(retain, nonatomic) UITableView *tableView; // @synthesize tableView=_tableView;
@property(retain, nonatomic) NSArray *formats; // @synthesize formats=_formats;
@property(retain, nonatomic) QSMediaFormatInfo *currentFormat; // @synthesize currentFormat=_currentFormat;
- (void).cxx_destruct;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)didSelectRowAtIndexPath:(id)arg1;
- (void)titleDidTapInPlayerOptionCell:(id)arg1;
- (void)dealloc;
- (void)setFrame:(struct CGRect)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(nonatomic) __weak id <QSMediaPlayerDefinitionViewDelegate> delegate; // @dynamic delegate;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
