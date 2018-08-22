//  weibo: http://weibo.com/xiaoqing28
//  blog:  http://www.alonemonkey.com
//
//  TencentSportsDylib.h
//  TencentSportsDylib
//
//  Created by hufeng on 22/8/18.
//  Copyright (c) 2018年 hufeng. All rights reserved.
//

#import <Foundation/Foundation.h>

#define INSERT_SUCCESS_WELCOME @"\n               🎉!!！congratulations!!！🎉\n👍----------------insert dylib success----------------👍"

@interface CustomViewController

@property (nonatomic, copy) NSString* newProperty;

+ (void)classMethod;

- (NSString*)getMyName;

- (void)newMethod:(NSString*) output;

@end
