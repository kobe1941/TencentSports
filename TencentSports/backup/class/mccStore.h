//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;

@interface mccStore : NSObject
{
    NSMutableDictionary *_dbQueueDict;
}

+ (id)getInstance;
@property(retain) NSMutableDictionary *dbQueueDict; // @synthesize dbQueueDict=_dbQueueDict;
- (void).cxx_destruct;
- (id)getConfigFilePath:(id)arg1 sdkVersion:(id)arg2;
- (id)getDBPath:(id)arg1;
- (void)getDatabase:(id)arg1;
- (void)getDataTable:(id)arg1;
- (void)loadLocalConfig:(id)arg1;
- (void)insertConfig:(id)arg1 row:(id)arg2;
- (id)init;

@end

