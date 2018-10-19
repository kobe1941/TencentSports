//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSString, QSCustomTabBar, QSCustomTabBarCell;

@protocol QSCustomTabBarDelegate <NSObject>
- (NSString *)tabBar:(QSCustomTabBar *)arg1 titleForItemAtIndex:(long long)arg2;
- (unsigned long long)numberOfItemsInTabBar:(QSCustomTabBar *)arg1;

@optional
- (void)tabBar:(QSCustomTabBar *)arg1 didSelectSameItemAtIndex:(long long)arg2;
- (void)tabBar:(QSCustomTabBar *)arg1 didSelectItemAtIndex:(long long)arg2;
- (void)tabBar:(QSCustomTabBar *)arg1 cell:(QSCustomTabBarCell *)arg2 atIndex:(long long)arg3;
@end

