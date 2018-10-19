//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, QSDatabase;

@interface QSDBTable : NSObject
{
    Class _modelClass;
    NSString *_name;
    QSDatabase *_database;
}

+ (id)dbTableWithName:(id)arg1;
@property(nonatomic) __weak QSDatabase *database; // @synthesize database=_database;
@property(retain, nonatomic) NSString *name; // @synthesize name=_name;
@property(retain, nonatomic) Class modelClass; // @synthesize modelClass=_modelClass;
- (void).cxx_destruct;
- (void)queryWithCommand:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)queryWithCommand:(id)arg1;
- (void)createIndex:(id)arg1 unique:(_Bool)arg2 forProperties:(id)arg3;
- (void)modifyItem:(id)arg1 withProperties:(id)arg2;
- (void)addOrUpdateItem:(id)arg1;
- (void)addItem:(id)arg1;
- (void)clear;
- (void)deleteItemsWithPredicate:(id)arg1;
- (void)deleteItemsBeforeUpdateDate:(id)arg1;
- (void)deleteItem:(id)arg1;

@end
