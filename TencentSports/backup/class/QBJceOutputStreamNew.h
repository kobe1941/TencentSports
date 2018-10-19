//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "QBJceStreamNew.h"

__attribute__((visibility("hidden")))
@interface QBJceOutputStreamNew : QBJceStreamNew
{
}

+ (id)streamWithCapability:(int)arg1;
+ (id)stream;
- (void)writeAnything:(id)arg1 tag:(int)arg2 required:(_Bool)arg3;
- (void)writeData:(id)arg1 tag:(int)arg2 required:(_Bool)arg3;
- (void)writeString:(id)arg1 tag:(int)arg2 required:(_Bool)arg3;
- (void)writeObject:(id)arg1 tag:(int)arg2 required:(_Bool)arg3;
- (void)writeNumber:(id)arg1 tag:(int)arg2 required:(_Bool)arg3;
- (void)writeArray:(id)arg1 tag:(int)arg2 required:(_Bool)arg3;
- (void)writeDictionary:(id)arg1 tag:(int)arg2 required:(_Bool)arg3;
- (void)writeInt:(long long)arg1 tag:(int)arg2;
- (void)writeDouble:(double)arg1 tag:(int)arg2;
- (void)writeFloat:(float)arg1 tag:(int)arg2;
- (void)fillWithZero:(unsigned int)arg1;
- (void)writeBytes:(const void *)arg1 size:(int)arg2;
- (void)writeInt8:(long long)arg1;
- (void)writeInt4:(int)arg1;
- (void)writeInt2:(short)arg1;
- (void)writeInt1:(BOOL)arg1;
- (void)writeTag:(int)arg1 type:(int)arg2;
- (id)data;
- (void)preventBufferOverflow:(int)arg1;
- (void)dealloc;
- (id)initWithBufferSize:(int)arg1;
- (id)init;

@end

