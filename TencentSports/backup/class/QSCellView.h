//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface QSCellView : UIView
{
    unsigned long long _index;
    NSString *_reusedIdentify;
}

@property(retain, nonatomic) NSString *reusedIdentify; // @synthesize reusedIdentify=_reusedIdentify;
@property(nonatomic) unsigned long long index; // @synthesize index=_index;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect)arg1 reuseIdentifier:(id)arg2;

@end

