//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TADBaseResponse.h"

@class TADItemInfo;

@interface TADRTVideoPicResponse : TADBaseResponse
{
    TADItemInfo *_picAd;
}

@property(readonly, nonatomic) TADItemInfo *picAd; // @synthesize picAd=_picAd;
- (void).cxx_destruct;
- (id)initWithResponse:(id)arg1 channel:(id)arg2 articleId:(id)arg3 adType:(id)arg4;

@end
