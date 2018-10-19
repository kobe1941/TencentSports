//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSString;

@interface TTExtensionInfo : NSObject
{
    NSString *_id;
    NSString *_name;
    NSString *_description;
    NSString *_version;
    NSString *_copyright;
    NSString *_license;
    NSArray *_authors;
}

@property(copy, nonatomic) NSArray *authors; // @synthesize authors=_authors;
@property(copy, nonatomic) NSString *license; // @synthesize license=_license;
@property(copy, nonatomic) NSString *copyright; // @synthesize copyright=_copyright;
@property(copy, nonatomic) NSString *version; // @synthesize version=_version;
@property(copy, nonatomic) NSString *description; // @synthesize description=_description;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
@property(readonly, nonatomic) NSString *identifier; // @synthesize identifier=_id;
- (void)setIdentifier:(id)arg1;
- (_Bool)isEqual:(id)arg1;
- (void)dealloc;
- (id)init;

@end

