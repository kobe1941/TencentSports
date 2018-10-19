//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "QSRichTextLabel.h"

@class NSArray, QSRichTextPartInfo;
@protocol QSPartedRichTextLabelDelegate;

__attribute__((visibility("hidden")))
@interface QSPartedRichTextLabel : QSRichTextLabel
{
    NSArray *_partedInfo;
    id <QSPartedRichTextLabelDelegate> _delegate;
    NSArray *_tempTexts;
    QSRichTextPartInfo *_touchedPartInfo;
}

+ (struct CGSize)sizeWithPartedInfo:(id)arg1 constrainedToSize:(struct CGSize)arg2 limitLines:(long long)arg3 lineSpacing:(double)arg4;
+ (struct CGSize)sizeWithPartedInfo:(id)arg1 constrainedToSize:(struct CGSize)arg2 limitLines:(long long)arg3;
+ (struct CGSize)sizeWithPartedInfo:(id)arg1 constrainedToSize:(struct CGSize)arg2;
@property(retain, nonatomic) QSRichTextPartInfo *touchedPartInfo; // @synthesize touchedPartInfo=_touchedPartInfo;
@property(retain, nonatomic) NSArray *tempTexts; // @synthesize tempTexts=_tempTexts;
@property(nonatomic) __weak id <QSPartedRichTextLabelDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) NSArray *partedInfo; // @synthesize partedInfo=_partedInfo;
- (void).cxx_destruct;
- (void)clearTouchInfo;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (id)touchLinkAtPoint:(struct CGPoint)arg1;
- (double)getLineHeightWith:(long long)arg1;
- (void)setAttributes;
- (void)drawRect:(struct CGRect)arg1;
- (void)drawBlackgroundOfColor:(id)arg1 context:(struct CGContext *)arg2 runBound:(struct CGRect)arg3;
- (void)drawUnderLineOfColor:(id)arg1 context:(struct CGContext *)arg2 runBound:(struct CGRect)arg3;
- (_Bool)drawRun:(struct __CTRun *)arg1 withContext:(struct CGContext *)arg2 lineOrigin:(struct CGPoint)arg3 lineAscent:(double)arg4 lineDescent:(double)arg5 preRun:(struct __CTRun *)arg6 nextRun:(struct __CTRun *)arg7;

@end

