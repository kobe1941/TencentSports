//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "QSModel.h"

@class NSString;

__attribute__((visibility("hidden")))
@interface QSAIChatDogActionConfigItemPart : QSModel
{
    NSString *_fileName;
    long long _loopMinTimes;
    long long _loopMaxTimes;
}

@property(nonatomic) long long loopMaxTimes; // @synthesize loopMaxTimes=_loopMaxTimes;
@property(nonatomic) long long loopMinTimes; // @synthesize loopMinTimes=_loopMinTimes;
@property(copy, nonatomic) NSString *fileName; // @synthesize fileName=_fileName;
- (void).cxx_destruct;

@end

