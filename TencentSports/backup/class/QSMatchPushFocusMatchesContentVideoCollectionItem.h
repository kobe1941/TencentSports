//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "QSModel.h"

@class NSArray, NSDictionary, NSString;

__attribute__((visibility("hidden")))
@interface QSMatchPushFocusMatchesContentVideoCollectionItem : QSModel
{
    NSString *_type;
    NSString *_title;
    NSString *_mid;
    NSString *_matchDesc;
    NSString *_videoPic;
    NSString *_vid;
    NSString *_summary;
    NSDictionary *_jumpData;
    NSArray *_tabs;
}

+ (Class)classForObjectInArrayProperty:(id)arg1;
@property(retain, nonatomic) NSArray *tabs; // @synthesize tabs=_tabs;
@property(retain, nonatomic) NSDictionary *jumpData; // @synthesize jumpData=_jumpData;
@property(retain, nonatomic) NSString *summary; // @synthesize summary=_summary;
@property(retain, nonatomic) NSString *vid; // @synthesize vid=_vid;
@property(retain, nonatomic) NSString *videoPic; // @synthesize videoPic=_videoPic;
@property(retain, nonatomic) NSString *matchDesc; // @synthesize matchDesc=_matchDesc;
@property(retain, nonatomic) NSString *mid; // @synthesize mid=_mid;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
@property(retain, nonatomic) NSString *type; // @synthesize type=_type;
- (void).cxx_destruct;

@end

