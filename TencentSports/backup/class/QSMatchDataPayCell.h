//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

@class NSString, QSSportsMediaInfo, UIButton, UIImageView;

__attribute__((visibility("hidden")))
@interface QSMatchDataPayCell : UITableViewCell
{
    NSString *_mid;
    QSSportsMediaInfo *_authenticationInfo;
    UIButton *_payOnlyButton;
    UIImageView *_rightArrow;
}

+ (double)heightWithAuthenticationInfo:(id)arg1;
@property(retain, nonatomic) UIImageView *rightArrow; // @synthesize rightArrow=_rightArrow;
@property(retain, nonatomic) UIButton *payOnlyButton; // @synthesize payOnlyButton=_payOnlyButton;
@property(retain, nonatomic) QSSportsMediaInfo *authenticationInfo; // @synthesize authenticationInfo=_authenticationInfo;
@property(retain, nonatomic) NSString *mid; // @synthesize mid=_mid;
- (void).cxx_destruct;
- (void)toMemberPage:(id)arg1;
- (void)reset;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

