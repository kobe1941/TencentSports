//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "QSModel.h"

@class NSArray;

__attribute__((visibility("hidden")))
@interface QSAppConfigHttpDnsInfo : QSModel
{
    _Bool _on;
    NSArray *_hosts;
    double _activeTime;
}

@property(nonatomic) double activeTime; // @synthesize activeTime=_activeTime;
@property(retain, nonatomic) NSArray *hosts; // @synthesize hosts=_hosts;
@property(nonatomic) _Bool on; // @synthesize on=_on;
- (void).cxx_destruct;

@end

