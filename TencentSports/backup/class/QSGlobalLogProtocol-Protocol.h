//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSDate, NSString;

@protocol QSGlobalLogProtocol <NSObject>
@property(copy, nonatomic) NSString *pageStep;
@property(readonly, copy, nonatomic) NSString *pageID;
@property(retain, nonatomic) NSDate *didAppearDate;
@property(nonatomic) _Bool shouldAutoLog;
- (void)logSelfImmediately;
- (void)resetDidAppearDate;

@optional
- (void)logSelfImmediatelyWhenAppear;
@end
