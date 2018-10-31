//
//  HookZzPrint.m
//  HookZzTestPrint
//
//  Created by 王磊磊 on 2018/5/28.
//  Copyright © 2018年 王磊磊. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <dlfcn.h>
#import <mach-o/dyld.h>
#import <objc/message.h>
#import <objc/runtime.h>


#include "hookzz.h"

#ifndef ZREG_MACRO
#define ZREG_MACRO
#if defined(__LP64__)
#define ZREG(n) general.regs.x##n
#else
#define ZREG(n) general.regs.r##n
#endif
#endif

char decollators[512]           = {0};

@interface OCMethodMonitor : NSObject

@end

@implementation OCMethodMonitor

+ (void)load {
    [self hook_objc_msgSend];
    OCMethodMonitor *z = [OCMethodMonitor new];
    [z log_for_test];
}

- (void)log_for_test {
    NSLog(@"catch by HookZz:OCMethodMonitor");
}

+ (void)hook_objc_msgSend {
    DebugLogControlerEnableLog();
    ZzHookGOT("objc_msgSend", NULL, NULL, objc_msgSend_pre_call, objc_msgSend_post_call);
}

void objc_msgSend_pre_call(RegState *rs, ThreadStackPublic *ts, CallStackPublic *cs, const HookEntryInfo *info)
{
    char *selector = (char *)rs->ZREG(1);
    id tmpObject = (id)rs->ZREG(0);
    Class tmpClass  = object_getClass(tmpObject);
    if (!tmpClass)
        return;
    const char *className               = class_getName(tmpClass);
    
    NSString *classStr = [NSString stringWithCString:className encoding:NSUTF8StringEncoding];
    
    static BOOL start = NO;
    if ([classStr isEqualToString:@"QSMatchDetailViewController"] && strstr(selector, "alloc")) {
        start = YES;
    }
    
    if (!start) {
        return;
    }
    
    if ([classStr hasPrefix:@"NS"] || [classStr hasPrefix:@"_NS"] || [classStr hasPrefix:@"__NS"]) {
        return;
    }
    
    if ([classStr hasPrefix:@"UI"] || [classStr hasPrefix:@"_UI"]) {
        return;
    }
    
    if ([classStr hasPrefix:@"MTALogTrack"] || [classStr hasPrefix:@"QBBeaconEvent"]) {
        return;
    }
    
    if ([classStr hasPrefix:@"MttMemory"] || [classStr hasPrefix:@"VRPosition"]) {
        return;
    }
    
    if ([classStr hasPrefix:@"QBReachability"] || [classStr hasPrefix:@"QBBeaconAnalytics"]) {
        return;
    }
    
    if ([classStr hasSuffix:@"Log"] || [classStr hasSuffix:@"log"]) {
        return;
    }
    
    
    
    
    
//    if (strstr(className, "NS") && strstr(className, "UI")) {
//        return;
//    }
    
    
    memset(decollators, '-', 512);
    if (ts->size * 3 >= 512)
        return;
    decollators[ts->size * 3] = '\0';
    
//    printf("[OCMethodMonitor|%ld] %s [%s %s]\n", ts->thread_id, decollators, className, selector);
    
    // NSlog比printf更合适，log更干净
    NSLog(@"[OCMethodMonitor|%ld] %s [%s %s]\n", ts->thread_id, decollators, className, selector);
}

void objc_msgSend_post_call(RegState *rs, ThreadStackPublic *ts, CallStackPublic *cs, const HookEntryInfo *info) {
//    printf("post call success.\n");
}

@end

