//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface QSVideoSegmentalItem : NSObject
{
    _Bool _isSelected;
    id _identifier;
    NSString *_title;
    unsigned long long _position;
    struct UIEdgeInsets _textInsets;
}

@property(nonatomic) _Bool isSelected; // @synthesize isSelected=_isSelected;
@property(nonatomic) struct UIEdgeInsets textInsets; // @synthesize textInsets=_textInsets;
@property(nonatomic) unsigned long long position; // @synthesize position=_position;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(retain, nonatomic) id identifier; // @synthesize identifier=_identifier;
- (void).cxx_destruct;
- (_Bool)isEqual:(id)arg1;

@end
