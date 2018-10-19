//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "QSModel.h"

#import "QSDBModelProtocol-Protocol.h"

@class NSDate, NSString;

@interface QSDBModel : QSModel <QSDBModelProtocol>
{
    long long _rowId;
    NSDate *_insertDate;
    NSDate *_updateDate;
}

+ (id)allDBKeys;
+ (id)columnDescription;
+ (id)allColumns;
@property(retain, nonatomic) NSDate *updateDate; // @synthesize updateDate=_updateDate;
@property(retain, nonatomic) NSDate *insertDate; // @synthesize insertDate=_insertDate;
@property(nonatomic) long long rowId; // @synthesize rowId=_rowId;
- (void).cxx_destruct;
- (_Bool)manualSetValue:(id)arg1 forKey:(id)arg2;
- (id)dbValesForKeys:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

