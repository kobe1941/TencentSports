//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class LOTKeyframeGroup, NSNumber, NSString;

__attribute__((visibility("hidden")))
@interface LOTShapeGradientFill : NSObject
{
    _Bool _evenOddFillRule;
    NSString *_keyname;
    NSNumber *_numberOfColors;
    LOTKeyframeGroup *_startPoint;
    LOTKeyframeGroup *_endPoint;
    LOTKeyframeGroup *_gradient;
    LOTKeyframeGroup *_opacity;
    unsigned long long _type;
}

@property(readonly, nonatomic) unsigned long long type; // @synthesize type=_type;
@property(readonly, nonatomic) _Bool evenOddFillRule; // @synthesize evenOddFillRule=_evenOddFillRule;
@property(readonly, nonatomic) LOTKeyframeGroup *opacity; // @synthesize opacity=_opacity;
@property(readonly, nonatomic) LOTKeyframeGroup *gradient; // @synthesize gradient=_gradient;
@property(readonly, nonatomic) LOTKeyframeGroup *endPoint; // @synthesize endPoint=_endPoint;
@property(readonly, nonatomic) LOTKeyframeGroup *startPoint; // @synthesize startPoint=_startPoint;
@property(readonly, nonatomic) NSNumber *numberOfColors; // @synthesize numberOfColors=_numberOfColors;
@property(readonly, nonatomic) NSString *keyname; // @synthesize keyname=_keyname;
- (void).cxx_destruct;
- (void)_mapFromJSON:(id)arg1;
- (id)initWithJSON:(id)arg1;

@end

