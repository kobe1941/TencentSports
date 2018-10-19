//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class LOTKeyframeGroup, NSString;

__attribute__((visibility("hidden")))
@interface LOTShapeTransform : NSObject
{
    NSString *_keyname;
    LOTKeyframeGroup *_position;
    LOTKeyframeGroup *_anchor;
    LOTKeyframeGroup *_scale;
    LOTKeyframeGroup *_rotation;
    LOTKeyframeGroup *_opacity;
}

@property(readonly, nonatomic) LOTKeyframeGroup *opacity; // @synthesize opacity=_opacity;
@property(readonly, nonatomic) LOTKeyframeGroup *rotation; // @synthesize rotation=_rotation;
@property(readonly, nonatomic) LOTKeyframeGroup *scale; // @synthesize scale=_scale;
@property(readonly, nonatomic) LOTKeyframeGroup *anchor; // @synthesize anchor=_anchor;
@property(readonly, nonatomic) LOTKeyframeGroup *position; // @synthesize position=_position;
@property(readonly, nonatomic) NSString *keyname; // @synthesize keyname=_keyname;
- (void).cxx_destruct;
- (id)description;
- (void)_mapFromJSON:(id)arg1;
- (id)initWithJSON:(id)arg1;

@end

