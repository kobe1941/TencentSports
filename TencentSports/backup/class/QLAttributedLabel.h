//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UILabel.h>

#import "QLAttributedLabel-Protocol.h"
#import "UIGestureRecognizerDelegate-Protocol.h"

@class NSArray, NSAttributedString, NSDataDetector, NSDictionary, NSString, NSTextCheckingResult, UIColor;
@protocol QLAttributedLabelDelegate;

@interface QLAttributedLabel : UILabel <QLAttributedLabel, UIGestureRecognizerDelegate>
{
    _Bool _needsFramesetter;
    int _verticalAlignment;
    NSAttributedString *_attributedText;
    NSAttributedString *_inactiveAttributedText;
    NSAttributedString *_renderedAttributedText;
    struct __CTFramesetter *_framesetter;
    struct __CTFramesetter *_highlightFramesetter;
    id <QLAttributedLabelDelegate> _delegate;
    unsigned long long _dataDetectorTypes;
    NSDataDetector *_dataDetector;
    NSArray *_links;
    NSDictionary *_linkAttributes;
    NSDictionary *_activeLinkAttributes;
    double _shadowRadius;
    double _highlightedShadowRadius;
    UIColor *_highlightedShadowColor;
    double _leading;
    double _lineHeightMultiple;
    double _firstLineIndent;
    NSString *_truncationTokenString;
    NSTextCheckingResult *_activeLink;
    struct CGSize _highlightedShadowOffset;
    struct UIEdgeInsets _textInsets;
}

@property(retain, nonatomic) NSTextCheckingResult *activeLink; // @synthesize activeLink=_activeLink;
@property(retain, nonatomic) NSString *truncationTokenString; // @synthesize truncationTokenString=_truncationTokenString;
@property(nonatomic) int verticalAlignment; // @synthesize verticalAlignment=_verticalAlignment;
@property(nonatomic) struct UIEdgeInsets textInsets; // @synthesize textInsets=_textInsets;
@property(nonatomic) double firstLineIndent; // @synthesize firstLineIndent=_firstLineIndent;
@property(nonatomic) double lineHeightMultiple; // @synthesize lineHeightMultiple=_lineHeightMultiple;
@property(nonatomic) double leading; // @synthesize leading=_leading;
@property(retain, nonatomic) UIColor *highlightedShadowColor; // @synthesize highlightedShadowColor=_highlightedShadowColor;
@property(nonatomic) struct CGSize highlightedShadowOffset; // @synthesize highlightedShadowOffset=_highlightedShadowOffset;
@property(nonatomic) double highlightedShadowRadius; // @synthesize highlightedShadowRadius=_highlightedShadowRadius;
@property(nonatomic) double shadowRadius; // @synthesize shadowRadius=_shadowRadius;
@property(retain, nonatomic) NSDictionary *activeLinkAttributes; // @synthesize activeLinkAttributes=_activeLinkAttributes;
@property(retain, nonatomic) NSDictionary *linkAttributes; // @synthesize linkAttributes=_linkAttributes;
@property(retain, nonatomic) NSArray *links; // @synthesize links=_links;
@property(retain, nonatomic) NSDataDetector *dataDetector; // @synthesize dataDetector=_dataDetector;
@property(nonatomic) unsigned long long dataDetectorTypes; // @synthesize dataDetectorTypes=_dataDetectorTypes;
@property(nonatomic) id <QLAttributedLabelDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) struct __CTFramesetter *highlightFramesetter; // @synthesize highlightFramesetter=_highlightFramesetter;
@property(nonatomic) struct __CTFramesetter *framesetter; // @synthesize framesetter=_framesetter;
@property(copy, nonatomic) NSAttributedString *renderedAttributedText; // @synthesize renderedAttributedText=_renderedAttributedText;
@property(copy, nonatomic) NSAttributedString *inactiveAttributedText; // @synthesize inactiveAttributedText=_inactiveAttributedText;
@property(copy, nonatomic) NSAttributedString *attributedText; // @synthesize attributedText=_attributedText;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (struct CGSize)intrinsicContentSize;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)drawTextInRect:(struct CGRect)arg1;
- (struct CGRect)textRectForBounds:(struct CGRect)arg1 limitedToNumberOfLines:(long long)arg2;
- (void)setTextColor:(id)arg1;
- (id)textColor;
- (void)setHighlighted:(_Bool)arg1;
- (void)setText:(id)arg1 afterInheritingLabelAttributesAndConfiguringWithBlock:(CDUnknownBlockType)arg2;
@property(copy, nonatomic) id text; // @dynamic text;
- (void)drawStrike:(struct __CTFrame *)arg1 inRect:(struct CGRect)arg2 context:(struct CGContext *)arg3;
- (void)drawBackground:(struct __CTFrame *)arg1 inRect:(struct CGRect)arg2 context:(struct CGContext *)arg3;
- (void)drawFramesetter:(struct __CTFramesetter *)arg1 attributedString:(id)arg2 textRange:(CDStruct_912cb5d2)arg3 inRect:(struct CGRect)arg4 context:(struct CGContext *)arg5;
- (long long)characterIndexAtPoint:(struct CGPoint)arg1;
- (id)linkAtPoint:(struct CGPoint)arg1;
- (id)linkAtCharacterIndex:(long long)arg1;
- (void)addLinkToDate:(id)arg1 timeZone:(id)arg2 duration:(double)arg3 withRange:(struct _NSRange)arg4;
- (void)addLinkToDate:(id)arg1 withRange:(struct _NSRange)arg2;
- (void)addLinkToPhoneNumber:(id)arg1 withRange:(struct _NSRange)arg2;
- (void)addLinkToAddress:(id)arg1 withRange:(struct _NSRange)arg2;
- (void)addLinkToURL:(id)arg1 withRange:(struct _NSRange)arg2;
- (void)addLinkWithTextCheckingResult:(id)arg1;
- (void)addLinksWithTextCheckingResults:(id)arg1 attributes:(id)arg2;
- (void)addLinkWithTextCheckingResult:(id)arg1 attributes:(id)arg2;
- (void)setNeedsFramesetter;
- (void)dealloc;
- (void)commonInit;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

