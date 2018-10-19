//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray, NSString;
@protocol VideoP2PDataControllerDelegate;

@interface VideoP2PDataController : NSObject
{
    NSString *_videoID;
    long long _dltype;
    NSString *_format;
    NSMutableArray *_urlArray;
    NSMutableArray *_timeArray;
    NSMutableArray *_formatArray;
    long long _dataID;
    id <VideoP2PDataControllerDelegate> _delegate;
}

@property(nonatomic) id <VideoP2PDataControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) long long dataID; // @synthesize dataID=_dataID;
@property(retain, nonatomic) NSMutableArray *formatArray; // @synthesize formatArray=_formatArray;
@property(retain, nonatomic) NSMutableArray *timeArray; // @synthesize timeArray=_timeArray;
@property(retain, nonatomic) NSMutableArray *urlArray; // @synthesize urlArray=_urlArray;
@property(retain, nonatomic) NSString *format; // @synthesize format=_format;
@property(nonatomic) long long dltype; // @synthesize dltype=_dltype;
@property(retain, nonatomic) NSString *videoID; // @synthesize videoID=_videoID;
- (void)cleanData;
- (_Bool)createData;
- (void)dealloc;
- (id)init;

@end

