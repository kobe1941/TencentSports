//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

#import "QSExpandingTextViewDelegate-Protocol.h"

@class QSTopicExpandingTextView;

__attribute__((visibility("hidden")))
@interface QSComPublishContentCell : UITableViewCell <QSExpandingTextViewDelegate>
{
    QSTopicExpandingTextView *_mContentView;
    CDUnknownBlockType _comPublishContentBeginEditing;
    CDUnknownBlockType _comPublishContentDidChange;
}

+ (double)cellHeight;
@property(copy, nonatomic) CDUnknownBlockType comPublishContentDidChange; // @synthesize comPublishContentDidChange=_comPublishContentDidChange;
@property(copy, nonatomic) CDUnknownBlockType comPublishContentBeginEditing; // @synthesize comPublishContentBeginEditing=_comPublishContentBeginEditing;
@property(retain, nonatomic) QSTopicExpandingTextView *mContentView; // @synthesize mContentView=_mContentView;
- (void).cxx_destruct;
- (void)expandingTextViewDidChange:(id)arg1;
- (_Bool)expandingTextView:(id)arg1 shouldChangeTextInRange:(struct _NSRange)arg2 replacementText:(id)arg3;
- (_Bool)expandingTextViewShouldBeginEditing:(id)arg1;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

