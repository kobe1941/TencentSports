//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSArray, NSMutableArray;
@protocol QSComTopicDetailTopToolbarDelegate;

__attribute__((visibility("hidden")))
@interface QSComTopicDetailTopToolbar : UIView
{
    id <QSComTopicDetailTopToolbarDelegate> _delegate;
    NSArray *_actions;
    NSMutableArray *_buttons;
}

@property(retain, nonatomic) NSMutableArray *buttons; // @synthesize buttons=_buttons;
@property(retain, nonatomic) NSArray *actions; // @synthesize actions=_actions;
@property(nonatomic) __weak id <QSComTopicDetailTopToolbarDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)onItemAction:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)allButtons;

@end
