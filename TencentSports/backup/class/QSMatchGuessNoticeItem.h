//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "QSModel.h"

@class NSDictionary, NSString;

__attribute__((visibility("hidden")))
@interface QSMatchGuessNoticeItem : QSModel
{
    NSString *_logo;
    NSString *_title;
    NSString *_content;
    NSString *_url;
    NSDictionary *_jumpData;
}

@property(retain, nonatomic) NSDictionary *jumpData; // @synthesize jumpData=_jumpData;
@property(retain, nonatomic) NSString *url; // @synthesize url=_url;
@property(retain, nonatomic) NSString *content; // @synthesize content=_content;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
@property(retain, nonatomic) NSString *logo; // @synthesize logo=_logo;
- (void).cxx_destruct;

@end
