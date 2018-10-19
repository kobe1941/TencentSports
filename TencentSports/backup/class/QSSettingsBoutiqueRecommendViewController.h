//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "QSViewController.h"

#import "NSCoding-Protocol.h"
#import "QSCleanCacheProtocol-Protocol.h"

@class NSMutableArray, NSString, QSHTTPRequestOperation;

__attribute__((visibility("hidden")))
@interface QSSettingsBoutiqueRecommendViewController : QSViewController <NSCoding, QSCleanCacheProtocol>
{
    NSMutableArray *_boutiques;
    NSString *_version;
    QSHTTPRequestOperation *_request;
}

+ (void)cleanCache;
@property(retain) QSHTTPRequestOperation *request; // @synthesize request=_request;
@property(copy, nonatomic) NSString *version; // @synthesize version=_version;
@property(retain, nonatomic) NSMutableArray *boutiques; // @synthesize boutiques=_boutiques;
- (void).cxx_destruct;
- (void)refreshBoutique;
- (void)handleAppClick:(id)arg1;
- (void)loadBoutique;
- (void)resetLoad;
- (void)getBoutiqueFromNet;
- (void)getBoutiqueFromLocal;
- (void)clickedBtnBack:(id)arg1;
- (void)viewDidLoad;
- (void)save;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)dealloc;
- (_Bool)shouldShowSelfDefinedNavigationBar;

@end
