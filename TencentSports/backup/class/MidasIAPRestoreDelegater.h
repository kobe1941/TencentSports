//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "MidasIAPPayDelegate-Protocol.h"

@class MidasIAPRestoreReq, NSMutableArray, NSString;

@interface MidasIAPRestoreDelegater : NSObject <MidasIAPPayDelegate>
{
    NSMutableArray *_parent;
    MidasIAPRestoreReq *_req;
}

@property(retain, nonatomic) MidasIAPRestoreReq *req; // @synthesize req=_req;
@property(nonatomic) __weak NSMutableArray *parent; // @synthesize parent=_parent;
- (void).cxx_destruct;
- (id)requestInfo;
- (void)onResp:(id)arg1;
- (void)needLogin;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

