//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, QSVideoDetailInfo;

__attribute__((visibility("hidden")))
@interface QSVideoDetailSeriesCellModel : NSObject
{
    QSVideoDetailInfo *_videoDetail;
    NSString *_currentSelectedVid;
    unsigned long long _commentCount;
}

@property(nonatomic) unsigned long long commentCount; // @synthesize commentCount=_commentCount;
@property(copy, nonatomic) NSString *currentSelectedVid; // @synthesize currentSelectedVid=_currentSelectedVid;
@property(retain, nonatomic) QSVideoDetailInfo *videoDetail; // @synthesize videoDetail=_videoDetail;
- (void).cxx_destruct;

@end
