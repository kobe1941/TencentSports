//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface QBWupEncrypt : NSObject
{
}

+ (id)sharedInstance;
- (id)encryptAESKeyWithRSA1024:(id)arg1;
- (id)generateAESKey;
- (void)removeWupTokenInfo;
- (id)getWupTokenInfo;
- (void)saveWupToken:(id)arg1;
- (id)keyAppendToWupRequestUrl:(id)arg1;
- (id)generateEncryptKey:(_Bool)arg1;

@end

