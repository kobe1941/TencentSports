//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSAttributedString;

__attribute__((visibility("hidden")))
@interface QSScrollTextData : NSObject
{
    _Bool _stopAtLeft;
    _Bool _didCallShowMoreInfo;
    NSAttributedString *_attributedText;
    struct CGSize _textSize;
    struct CGPoint _currentOrigin;
}

@property(nonatomic) _Bool didCallShowMoreInfo; // @synthesize didCallShowMoreInfo=_didCallShowMoreInfo;
@property(retain, nonatomic) NSAttributedString *attributedText; // @synthesize attributedText=_attributedText;
@property(nonatomic) _Bool stopAtLeft; // @synthesize stopAtLeft=_stopAtLeft;
@property(nonatomic) struct CGPoint currentOrigin; // @synthesize currentOrigin=_currentOrigin;
@property(nonatomic) struct CGSize textSize; // @synthesize textSize=_textSize;
- (void).cxx_destruct;

@end

