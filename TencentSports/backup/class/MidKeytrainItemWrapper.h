//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class MidKeytrainIdentifer, NSMutableDictionary, NSString;

@interface MidKeytrainItemWrapper : NSObject
{
    NSMutableDictionary *keytrainItemData;
    NSMutableDictionary *genericPasswordQuery;
    MidKeytrainIdentifer *mIdentifer;
    NSString *mAccessGroup;
}

@property(retain, nonatomic) NSString *mAccessGroup; // @synthesize mAccessGroup;
@property(retain, nonatomic) MidKeytrainIdentifer *mIdentifer; // @synthesize mIdentifer;
@property(retain, nonatomic) NSMutableDictionary *genericPasswordQuery; // @synthesize genericPasswordQuery;
@property(retain, nonatomic) NSMutableDictionary *keytrainItemData; // @synthesize keytrainItemData;
- (void).cxx_destruct;
- (id)dictionaryToSecItemFormat:(id)arg1;
- (id)secItemFormatToDictionary:(id)arg1;
- (void)writeToKeychain;
- (void)resetKeytrainItem;
- (id)objectValue;
- (id)objectForKey:(id)arg1;
- (void)setObject:(id)arg1;
- (void)setObject:(id)arg1 forKey:(id)arg2;
- (id)initWithIdentifier:(id)arg1 accessGroup:(id)arg2;

@end

