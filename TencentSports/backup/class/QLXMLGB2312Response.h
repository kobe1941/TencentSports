//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "QLASIURLResponse-Protocol.h"
#import "TTURLResponse-Protocol.h"

@class NSData, NSString;

@interface QLXMLGB2312Response : NSObject <TTURLResponse, QLASIURLResponse>
{
    id _rootObject;
}

@property(readonly, retain, nonatomic) id rootObject; // @synthesize rootObject=_rootObject;
- (id)request:(id)arg1 processResponse:(id)arg2 data:(id)arg3;
- (id)requestProcessResponse:(id)arg1;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, retain, nonatomic) NSData *requestPackageData;
@property(readonly) Class superclass;

@end

