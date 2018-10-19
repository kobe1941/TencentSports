//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDate, NSDictionary, NSString, QSGlobalLogSourceItem;
@protocol QSGlobalLogProtocol;

__attribute__((visibility("hidden")))
@interface QSGlobalLogManager : NSObject
{
    QSGlobalLogSourceItem *_externalSource;
    QSGlobalLogSourceItem *_interSource;
    NSString *_sectionID;
    unsigned long long _pageID;
    unsigned long long _pageStep;
    NSString *_bgPageID;
    NSDate *_bgDate;
    NSString *_lastLogObjectName;
    NSString *_lastLogObjectPageID;
    NSString *_lastLogObjectPageStep;
    NSDictionary *_lastLogParams;
    id <QSGlobalLogProtocol> _currentObject;
}

+ (void)load;
+ (id)sharedManager;
@property(nonatomic) __weak id <QSGlobalLogProtocol> currentObject; // @synthesize currentObject=_currentObject;
@property(retain, nonatomic) NSDictionary *lastLogParams; // @synthesize lastLogParams=_lastLogParams;
@property(copy, nonatomic) NSString *lastLogObjectPageStep; // @synthesize lastLogObjectPageStep=_lastLogObjectPageStep;
@property(copy, nonatomic) NSString *lastLogObjectPageID; // @synthesize lastLogObjectPageID=_lastLogObjectPageID;
@property(copy, nonatomic) NSString *lastLogObjectName; // @synthesize lastLogObjectName=_lastLogObjectName;
@property(retain, nonatomic) NSDate *bgDate; // @synthesize bgDate=_bgDate;
@property(copy, nonatomic) NSString *bgPageID; // @synthesize bgPageID=_bgPageID;
@property(nonatomic) unsigned long long pageStep; // @synthesize pageStep=_pageStep;
@property(nonatomic) unsigned long long pageID; // @synthesize pageID=_pageID;
@property(copy, nonatomic) NSString *sectionID; // @synthesize sectionID=_sectionID;
@property(retain, nonatomic) QSGlobalLogSourceItem *interSource; // @synthesize interSource=_interSource;
@property(retain, nonatomic) QSGlobalLogSourceItem *externalSource; // @synthesize externalSource=_externalSource;
- (void).cxx_destruct;
- (id)currentStep;
- (id)stepWithIncrement;
- (id)pageIDWithIncrement;
- (id)lastPageID;
- (void)enterForeground:(id)arg1;
- (void)enterBackground:(id)arg1;
- (id)currentPageID;
- (void)objectDidAppear:(id)arg1;
- (void)setInnerSourceWithName:(id)arg1 params:(id)arg2;
- (void)setExternalSourceWithName:(id)arg1 bundleID:(id)arg2 params:(id)arg3;
- (id)_queryStringFromdict:(id)arg1;
- (void)logWithObject:(id)arg1;
- (void)LogInCurrentStepWithName:(id)arg1 pageID:(id)arg2 extParams:(id)arg3;
- (void)LogWithName:(id)arg1 pageID:(id)arg2 step:(id)arg3 duration:(double)arg4 pageParams:(id)arg5 extParams:(id)arg6;
- (void)dealloc;
- (void)didTakeScreenshot:(id)arg1;
- (id)init;

@end
