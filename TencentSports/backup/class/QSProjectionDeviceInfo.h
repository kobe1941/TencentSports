//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCoding-Protocol.h"

@class NSString;

__attribute__((visibility("hidden")))
@interface QSProjectionDeviceInfo : NSObject <NSCoding>
{
    NSString *_identifier;
    NSString *_name;
    unsigned long long _connectionType;
    id _deviceInfo;
}

@property(retain, nonatomic) id deviceInfo; // @synthesize deviceInfo=_deviceInfo;
@property(nonatomic) unsigned long long connectionType; // @synthesize connectionType=_connectionType;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
@property(copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
- (void).cxx_destruct;
- (_Bool)isValid;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end
