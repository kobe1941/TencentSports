//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface CGXmlNode : NSObject
{
    id userInfo;
    struct _CgXmlNode *cXmlNode;
}

@property struct _CgXmlNode *cXmlNode; // @synthesize cXmlNode;
@property(retain) id userInfo; // @synthesize userInfo;
- (void)setAttributeWithName:(id)arg1 stringValue:(id)arg2;
- (void)setStringValue:(id)arg1;
- (id)stringValue;
- (id)elementValueForName:(id)arg1;
- (id)attributeValueForName:(id)arg1;
- (void)dealloc;
- (id)initWithXMLNode:(struct _CgXmlNode *)arg1;
- (id)init;

@end

