//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TCAPIRequest.h"

@class NSString, UIImage;

@interface TCUploadPicDic : TCAPIRequest
{
    NSString *_paramPhotodesc;
    NSString *_paramTitle;
    NSString *_paramAlbumid;
    NSString *_paramMobile;
    NSString *_paramX;
    NSString *_paramY;
    UIImage *_paramPicture;
    NSString *_paramNeedfeed;
    NSString *_paramSuccessnum;
    NSString *_paramPicnum;
}

+ (id)dictionary;
@property(nonatomic) NSString *paramPicnum; // @synthesize paramPicnum=_paramPicnum;
@property(nonatomic) NSString *paramSuccessnum; // @synthesize paramSuccessnum=_paramSuccessnum;
@property(nonatomic) NSString *paramNeedfeed; // @synthesize paramNeedfeed=_paramNeedfeed;
@property(retain, nonatomic) UIImage *paramPicture; // @synthesize paramPicture=_paramPicture;
@property(retain, nonatomic) NSString *paramY; // @synthesize paramY=_paramY;
@property(retain, nonatomic) NSString *paramX; // @synthesize paramX=_paramX;
@property(nonatomic) NSString *paramMobile; // @synthesize paramMobile=_paramMobile;
@property(retain, nonatomic) NSString *paramAlbumid; // @synthesize paramAlbumid=_paramAlbumid;
@property(retain, nonatomic) NSString *paramTitle; // @synthesize paramTitle=_paramTitle;
@property(retain, nonatomic) NSString *paramPhotodesc; // @synthesize paramPhotodesc=_paramPhotodesc;
- (void).cxx_destruct;

@end

