//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "QSModel.h"

@class NSArray, NSString;

__attribute__((visibility("hidden")))
@interface QSBarrageInfo : QSModel
{
    _Bool _bContinued;
    NSArray *_commentList;
    NSString *_ddwLastStamp;
    NSString *_dwLoopInterval;
    NSString *_strSessionKey;
}

+ (Class)classForObjectInArrayProperty:(id)arg1;
@property(copy, nonatomic) NSString *strSessionKey; // @synthesize strSessionKey=_strSessionKey;
@property(copy, nonatomic) NSString *dwLoopInterval; // @synthesize dwLoopInterval=_dwLoopInterval;
@property(copy, nonatomic) NSString *ddwLastStamp; // @synthesize ddwLastStamp=_ddwLastStamp;
@property(retain, nonatomic) NSArray *commentList; // @synthesize commentList=_commentList;
@property(nonatomic) _Bool bContinued; // @synthesize bContinued=_bContinued;
- (void).cxx_destruct;

@end

