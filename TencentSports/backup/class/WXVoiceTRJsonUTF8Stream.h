//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableData;

@interface WXVoiceTRJsonUTF8Stream : NSObject
{
    const char *_bytes;
    NSMutableData *_data;
    unsigned long long _length;
    unsigned long long _index;
}

@property unsigned long long index; // @synthesize index=_index;
- (id)stringWithRange:(struct _NSRange)arg1;
- (_Bool)skipCharacters:(const char *)arg1 length:(unsigned long long)arg2;
- (_Bool)haveRemainingCharacters:(unsigned long long)arg1;
- (void)skipWhitespace;
- (void)skip;
- (_Bool)getRetainedStringFragment:(id *)arg1;
- (_Bool)getNextUnichar:(unsigned short *)arg1;
- (_Bool)getUnichar:(unsigned short *)arg1;
- (void)appendData:(id)arg1;
- (void)dealloc;
- (id)init;

@end
