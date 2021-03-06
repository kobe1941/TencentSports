//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "QSModel.h"

@class NSDate, NSDictionary, NSString, QSTCPNotiItemContent;

__attribute__((visibility("hidden")))
@interface QSTCPNotiItem : QSModel
{
    double _serverTime;
    double _localTime;
    NSString *_itemId;
    NSDictionary *_page;
    NSDate *_expireTime;
    long long _type;
    QSTCPNotiItemContent *_content;
    NSDate *_showDate;
    NSString *_push_remark;
}

+ (id)propertyNameFromParsedKey:(id)arg1;
@property(retain, nonatomic) NSString *push_remark; // @synthesize push_remark=_push_remark;
@property(retain, nonatomic) NSDate *showDate; // @synthesize showDate=_showDate;
@property(retain, nonatomic) QSTCPNotiItemContent *content; // @synthesize content=_content;
@property(nonatomic) long long type; // @synthesize type=_type;
@property(retain, nonatomic) NSDate *expireTime; // @synthesize expireTime=_expireTime;
@property(retain, nonatomic) NSDictionary *page; // @synthesize page=_page;
@property(copy, nonatomic) NSString *itemId; // @synthesize itemId=_itemId;
@property(nonatomic) double localTime; // @synthesize localTime=_localTime;
@property(nonatomic) double serverTime; // @synthesize serverTime=_serverTime;
- (void).cxx_destruct;
- (_Bool)manualSetValue:(id)arg1 forKey:(id)arg2;

@end

