//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface QLInterActiveRelatedItem : NSObject
{
    _Bool _isPlaying;
    double _pointEndTime;
    NSString *_InteractiveUrl;
}

+ (id)interActiveVoteRelatedItemWithEntity:(id)arg1;
@property(copy, nonatomic) NSString *InteractiveUrl; // @synthesize InteractiveUrl=_InteractiveUrl;
@property(nonatomic) _Bool isPlaying; // @synthesize isPlaying=_isPlaying;
@property(nonatomic) double pointEndTime; // @synthesize pointEndTime=_pointEndTime;
- (void)dealloc;
- (void)parseDictionary:(id)arg1;
- (id)initWithEntity:(id)arg1;

@end
