//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "QSNewsContentItem.h"

@class NSArray, NSString;

__attribute__((visibility("hidden")))
@interface QSNewsContentTextItem : QSNewsContentItem
{
    NSString *_info;
    NSArray *_attr;
    NSArray *_partedAttributes;
}

+ (Class)classForObjectInArrayProperty:(id)arg1;
+ (id)ignoredPropertiesWhenEncoding;
@property(retain, nonatomic) NSArray *partedAttributes; // @synthesize partedAttributes=_partedAttributes;
@property(retain, nonatomic) NSArray *attr; // @synthesize attr=_attr;
@property(retain, nonatomic) NSString *info; // @synthesize info=_info;
- (void).cxx_destruct;
- (id)newTextAttributeWithRange:(struct _NSRange)arg1;
- (id)textWithRange:(struct _NSRange)arg1;

@end

