//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "QSModel.h"

@class NSArray, NSString;

__attribute__((visibility("hidden")))
@interface QSDailyNewsDataSectionItem : QSModel
{
    _Bool _isHide;
    NSString *_columnId;
    NSString *_columnName;
    NSArray *_nodeList;
}

+ (Class)classForObjectInArrayProperty:(id)arg1;
@property(retain, nonatomic) NSArray *nodeList; // @synthesize nodeList=_nodeList;
@property(nonatomic) _Bool isHide; // @synthesize isHide=_isHide;
@property(retain, nonatomic) NSString *columnName; // @synthesize columnName=_columnName;
@property(retain, nonatomic) NSString *columnId; // @synthesize columnId=_columnId;
- (void).cxx_destruct;

@end
