//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "QSModel.h"

@class NSDictionary, NSString;

__attribute__((visibility("hidden")))
@interface QSTCPNotiItemContentBoxData : QSModel
{
    NSString *_title;
    NSString *_content;
    NSString *_leftTitle;
    NSDictionary *_leftJumpData;
    NSString *_rightTitle;
    NSDictionary *_rightJumpData;
}

@property(retain, nonatomic) NSDictionary *rightJumpData; // @synthesize rightJumpData=_rightJumpData;
@property(copy, nonatomic) NSString *rightTitle; // @synthesize rightTitle=_rightTitle;
@property(retain, nonatomic) NSDictionary *leftJumpData; // @synthesize leftJumpData=_leftJumpData;
@property(copy, nonatomic) NSString *leftTitle; // @synthesize leftTitle=_leftTitle;
@property(copy, nonatomic) NSString *content; // @synthesize content=_content;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
- (void).cxx_destruct;

@end

