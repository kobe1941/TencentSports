//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "QSModel.h"

@class NSString;

__attribute__((visibility("hidden")))
@interface QSMatchStateOddsInfoItemRecent : QSModel
{
    NSString *_desc;
    NSString *_left;
    NSString *_right;
    NSString *_middle;
    long long _leftChange;
    long long _rightChange;
    long long _middleChange;
}

@property(nonatomic) long long middleChange; // @synthesize middleChange=_middleChange;
@property(nonatomic) long long rightChange; // @synthesize rightChange=_rightChange;
@property(nonatomic) long long leftChange; // @synthesize leftChange=_leftChange;
@property(retain, nonatomic) NSString *middle; // @synthesize middle=_middle;
@property(retain, nonatomic) NSString *right; // @synthesize right=_right;
@property(retain, nonatomic) NSString *left; // @synthesize left=_left;
@property(retain, nonatomic) NSString *desc; // @synthesize desc=_desc;
- (void).cxx_destruct;

@end

