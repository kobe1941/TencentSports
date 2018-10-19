//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "QSModel.h"

@class NSArray, NSString;

__attribute__((visibility("hidden")))
@interface QSComTopicDetailVoteQuestionItem : QSModel
{
    _Bool _isFirstQuestion;
    NSString *_questionId;
    long long _type;
    NSString *_question;
    NSArray *_options;
    long long _maxselect;
    long long _minselect;
    long long _votedTotal;
    double _questionItemHeight;
    struct CGSize _titleSize;
}

+ (id)ignoredPropertiesWhenEncoding;
+ (Class)classForObjectInArrayProperty:(id)arg1;
+ (id)propertyNameFromParsedKey:(id)arg1;
@property(nonatomic) double questionItemHeight; // @synthesize questionItemHeight=_questionItemHeight;
@property(nonatomic) struct CGSize titleSize; // @synthesize titleSize=_titleSize;
@property(nonatomic) _Bool isFirstQuestion; // @synthesize isFirstQuestion=_isFirstQuestion;
@property(nonatomic) long long votedTotal; // @synthesize votedTotal=_votedTotal;
@property(nonatomic) long long minselect; // @synthesize minselect=_minselect;
@property(nonatomic) long long maxselect; // @synthesize maxselect=_maxselect;
@property(retain, nonatomic) NSArray *options; // @synthesize options=_options;
@property(copy, nonatomic) NSString *question; // @synthesize question=_question;
@property(nonatomic) long long type; // @synthesize type=_type;
@property(copy, nonatomic) NSString *questionId; // @synthesize questionId=_questionId;
- (void).cxx_destruct;

@end
