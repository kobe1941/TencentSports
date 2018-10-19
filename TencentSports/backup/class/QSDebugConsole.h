//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "QSDebugConsoleActionDelegate-Protocol.h"

@class NSMutableArray, NSString, NSTimer, QSDebugConsoleFilterOption, QSDebugConsoleWindow;

__attribute__((visibility("hidden")))
@interface QSDebugConsole : NSObject <QSDebugConsoleActionDelegate>
{
    QSDebugConsoleWindow *_consoleWindow;
    QSDebugConsoleFilterOption *_filterOption;
    NSMutableArray *_allLogItems;
    NSMutableArray *_filterLogItems;
    NSTimer *_consoleLogTimer;
    double _lastItemInterval;
}

+ (unsigned long long)logTypeForLevel:(int)arg1;
+ (id)sharedConsole;
@property(nonatomic) double lastItemInterval; // @synthesize lastItemInterval=_lastItemInterval;
@property(retain, nonatomic) NSTimer *consoleLogTimer; // @synthesize consoleLogTimer=_consoleLogTimer;
@property(retain, nonatomic) NSMutableArray *filterLogItems; // @synthesize filterLogItems=_filterLogItems;
@property(retain, nonatomic) NSMutableArray *allLogItems; // @synthesize allLogItems=_allLogItems;
@property(retain, nonatomic) QSDebugConsoleFilterOption *filterOption; // @synthesize filterOption=_filterOption;
@property(retain, nonatomic) QSDebugConsoleWindow *consoleWindow; // @synthesize consoleWindow=_consoleWindow;
- (void).cxx_destruct;
- (id)debugConsoleActionType:(unsigned long long)arg1 content:(id)arg2 delegate:(id)arg3;
- (id)debugConsoleActionType:(unsigned long long)arg1 content:(id)arg2;
- (void)updateData:(id)arg1 withDataType:(unsigned long long)arg2;
- (void)updateInfoItem:(id)arg1;
- (id)getFilterLogItems;
- (void)removeAllItems;
- (void)_appendLogItem:(id)arg1;
- (void)appendLogItem:(id)arg1;
- (void)appendLogItems:(id)arg1;
- (void)reloadFilterLogItems;
- (void)reloadStringFilterLogItems;
- (id)logItemFromASLMessage:(struct __asl_object_s *)arg1;
- (id)allLogMessagesForCurrentProcess;
- (id)currentFilterOption;
- (void)updateFilterWithOption:(id)arg1;
- (void)updateFilterWithString:(id)arg1;
- (void)disactivate;
- (void)activate;
- (void)dismissConsoleView;
- (void)showConsoleView;
- (_Bool)isActived;
- (void)setPresentationStyle:(long long)arg1 animated:(_Bool)arg2;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

