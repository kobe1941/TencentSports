//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "QLLangDyncConfig-Protocol.h"

@class NSDictionary, NSMutableDictionary, NSNumber, NSString;

@interface QLConfigDataModel : NSObject <QLLangDyncConfig>
{
    int _langLocation;
    NSDictionary *langConfigDict;
    NSNumber *langDataVersion;
    NSDictionary *propConfigDict;
    NSMutableDictionary *_configCacheDict;
}

+ (id)instance;
@property(retain) NSMutableDictionary *configCacheDict; // @synthesize configCacheDict=_configCacheDict;
@property int langLocation; // @synthesize langLocation=_langLocation;
@property(retain) NSDictionary *propConfigDict; // @synthesize propConfigDict;
@property(retain) NSNumber *langDataVersion; // @synthesize langDataVersion;
@property(retain) NSDictionary *langConfigDict; // @synthesize langConfigDict;
- (void)setConfigWithDict:(id)arg1 isResetDefault:(_Bool)arg2;
- (id)getConfigPropertyArray:(id)arg1;
- (id)getConfigPropertyObject:(id)arg1;
- (id)getConfigPropertyString:(id)arg1;
- (_Bool)getConfigPropertyBool:(id)arg1;
- (double)getConfigPropertyDouble:(id)arg1;
- (float)getConfigPropertyFloat:(id)arg1;
- (int)getConfigPropertyInt:(id)arg1;
- (void)saveLangConfig:(id)arg1;
- (void)loadLangConfig;
- (id)getConfigString:(id)arg1;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

