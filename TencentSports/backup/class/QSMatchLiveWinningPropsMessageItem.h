//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "QSMatchLiveBasePropsMessageItem.h"

@class NSDictionary, NSString;

__attribute__((visibility("hidden")))
@interface QSMatchLiveWinningPropsMessageItem : QSMatchLiveBasePropsMessageItem
{
    NSString *_userid;
    NSString *_userIcon;
    NSString *_userNick;
    NSString *_lotteryLogo;
    NSString *_lotteryWordPrefix;
    NSString *_lotteryWordSuffix;
    NSDictionary *_jumpData;
}

@property(retain, nonatomic) NSDictionary *jumpData; // @synthesize jumpData=_jumpData;
@property(copy, nonatomic) NSString *lotteryWordSuffix; // @synthesize lotteryWordSuffix=_lotteryWordSuffix;
@property(copy, nonatomic) NSString *lotteryWordPrefix; // @synthesize lotteryWordPrefix=_lotteryWordPrefix;
@property(copy, nonatomic) NSString *lotteryLogo; // @synthesize lotteryLogo=_lotteryLogo;
@property(copy, nonatomic) NSString *userNick; // @synthesize userNick=_userNick;
@property(copy, nonatomic) NSString *userIcon; // @synthesize userIcon=_userIcon;
@property(copy, nonatomic) NSString *userid; // @synthesize userid=_userid;
- (void).cxx_destruct;

@end

