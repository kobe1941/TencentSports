//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "QSColumnedScheduleViewController.h"

@class NSString;

__attribute__((visibility("hidden")))
@interface QSWinterOlympicAllViewController : QSColumnedScheduleViewController
{
    _Bool _isChina;
    _Bool _isShowFlag;
    NSString *_category;
}

@property(retain, nonatomic) NSString *category; // @synthesize category=_category;
@property(nonatomic) _Bool isShowFlag; // @synthesize isShowFlag=_isShowFlag;
@property(nonatomic) _Bool isChina; // @synthesize isChina=_isChina;
- (void).cxx_destruct;
- (void)data:(id)arg1 didFinishLoadWithError:(id)arg2;
- (id)externInfoForBossReporter;
- (void)createScheduleData;
- (Class)currentMatchCellClass;
- (void)viewDidLoad;

@end

