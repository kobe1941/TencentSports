//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "QSModel.h"

@class NSDictionary, NSString;

__attribute__((visibility("hidden")))
@interface QSSharedMessageHttpModel : QSModel
{
    NSDictionary *_vid;
    NSDictionary *_matchChat;
    NSDictionary *_notiList;
    NSDictionary *_attendData;
    NSDictionary *_matchVid;
    NSDictionary *_matchDetail;
    NSString *_tab2Dot;
}

@property(retain, nonatomic) NSString *tab2Dot; // @synthesize tab2Dot=_tab2Dot;
@property(retain, nonatomic) NSDictionary *matchDetail; // @synthesize matchDetail=_matchDetail;
@property(retain, nonatomic) NSDictionary *matchVid; // @synthesize matchVid=_matchVid;
@property(retain, nonatomic) NSDictionary *attendData; // @synthesize attendData=_attendData;
@property(retain, nonatomic) NSDictionary *notiList; // @synthesize notiList=_notiList;
@property(retain, nonatomic) NSDictionary *matchChat; // @synthesize matchChat=_matchChat;
@property(retain, nonatomic) NSDictionary *vid; // @synthesize vid=_vid;
- (void).cxx_destruct;

@end

