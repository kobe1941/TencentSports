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
    
    
    
//    NSString *selectorStr = [NSString stringWithCString:selector encoding:NSUTF8StringEncoding];
    
    /*
    static BOOL start = NO;
    if ([classStr isEqualToString:@"QSMatchDetailViewController"] && strstr(selector, "alloc")) {
        start = YES;
    }
    
    if (!start) {
        return;
    }
     */
    
/*
    NSArray *classNameAvoid = @[
                                @"QSOperationQueue",@"QSBusSystem",
                                @"QBBeaconEvent",@"QSStateMachine",
                                @"TADHTTPClientRequest",
                                @"ASIFormDataRequest",
                                @"QSImageCache",@"QSQueue",
                                @"XMLDictionaryParser",
                                @"QSPropertyInfoEx",@"QSSportsMediaMatchInfo",
                                @"TSADP3Item",@"FMDatabase",
                                @"AVPlayerItem",
                                ];
    NSArray *classPrefixAvoid = @[
                                  @"NS",@"_NS",@"__NS",@"QSLog",@"QSDatabase",
                                  @"UI",@"_UI",@"MTALogTrack",
                                  @"MttMemory",@"VRPosition",@"QBReachability",@"QBBeaconAnalytics",
                                  @"QSCache",@"LOT",@"ASIHTTPRequest",
                                  @"LOT",
                                  ];
    NSArray *classSuffixAvoid = @[
                                  @"Log",@"log",
                                  @"Cell",
                                  @"Layer",
                                  @"Transaction",
                                  @"LinkedList",
                                  @"LinkedNode",
                                  @"Socket",
                                  @"Loading",
                                  @"Store",
                                  @"Node",
                                  @"Queue",
                                  @"TCPData",
                                  @"Logger",
                                  ];
 */
    
   /****selector****/
    /*
    NSArray *selectorNameAvoid = @[
                                   @"view",
                                   @"presentingViewController",
                                   @"parentViewController",
                                   ];
    
    NSArray *selectorPrefixAvoid = @[
                                     @"isKindOfClass",
                                     @"class",
                                     ];
    NSArray *selectorContain = @[
                                @"loading",
                                @"Animation",
                                @"valueForKey",
                                ];
     */
    
/*
    for (NSString *tempName in classNameAvoid) {
        if ([classStr isEqualToString:tempName]) {
            return;
        }
    }
    
    for (NSString *tempName in classPrefixAvoid) {
        if ([classStr hasPrefix:tempName]) {
            return;
        }
    }
    
    for (NSString *tempName in classSuffixAvoid) {
        if ([classStr hasSuffix:tempName]) {
            return;
        }
    }
    
    for (NSString *tempSEL in selectorNameAvoid) {
        if ([selectorStr isEqualToString:tempSEL]) {
            return;
        }
    }
    
    for (NSString *tempSEL in selectorPrefixAvoid) {
        if ([selectorStr hasPrefix:tempSEL]) {
            return;
        }
    }
    
    for (NSString *tempSEL in selectorContain) {
        if ([selectorStr containsString:tempSEL]) {
            return;
        }
    }
    
    */

    /*
    static BOOL tryStart = NO;
    if ([classStr isEqualToString:@"QSMPAuthenticationView"] || [classStr isEqualToString:@"QSMPMatchLiveAuthenticationView"]) {
//        if (strstr(selector, "tryButtonPressed")) {
         // 是调用的canTryWatch这个属性
            tryStart = YES;
//        }
    }
    
    if (!tryStart) {
        return;
    }
    
*/
    
    //
    
//    if ([classStr hasPrefix:@"TAD"] ) {
//        return; ///< 这里值得商榷
//    }
    
    /*
    
    //类名包含 Media 的就打印出来
    NSArray *classNameContainsLog = @[
                                      @"Media",
                                      @"TryWatch",
                                      @"tryWatch",
                                      @"QLTryWatchView",
                                      @"QLTryWatchViewController",
                                      @"QSVideoPlayerTryWatchProgressViewController",
                                      @"QSMatchDetailTopViewController",
                                      @"QSMatchSkipViewController",
                                      @"QSMatchDetailViewController",
                                      @"Authentication",
                                      @"QSUserInfoManagement",
                                      @"QSVIPInfo",
                                      @"vip",
                                      @"VIP",
                                      ];
    
    NSArray *selectorNameContainsLog = @[
                                         @"vip",
                                         @"",
                                         @"",
                                         @"",
                                         ];

    BOOL shoudLog = NO;
    for (NSString *tempName in classNameContainsLog) {
        if ([classStr containsString:tempName]) {
            shoudLog = YES;
            break;
        }
    }
    
    
    for (NSString *tempName in selectorNameContainsLog) {
        if ([selectorStr containsString:tempName]) {
            shoudLog = YES;
            break;
        }
    }

     
     */
    
    
    
    
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

