//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TADAutoPersistenceContainer.h"

@class NSString;

@interface TSAFrequencyManager : TADAutoPersistenceContainer
{
    NSString *_token;
}

+ (id)sharedInstance;
@property(copy, nonatomic) NSString *token; // @synthesize token=_token;
- (void).cxx_destruct;
- (id)filenameForPersistence;
- (id)getContainer;
- (void)resetFrequencyManager;
- (_Bool)checkIsOverFrequencyForItem:(id)arg1;
- (void)addFrequencyForItem:(id)arg1;
- (void)updateFrequencyForItem:(id)arg1;
- (id)init;

@end

